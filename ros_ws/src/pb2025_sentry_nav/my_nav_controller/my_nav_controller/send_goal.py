# 导入必要的库
import time  # 用于时间相关操作
import rclpy  # ROS2 Python客户端库
from rclpy.node import Node  # ROS2节点基类
from rclpy.action import ActionClient  # ROS2动作客户端
from nav2_msgs.action import NavigateToPose  # 导航到指定位置的动作消息
from rclpy.qos import QoSProfile  # 服务质量配置
from referee_msg.msg import Referee  # 自定义裁判系统消息类型，用于接收STM32数据
from action_msgs.msg import GoalStatus  # 用于处理导航目标状态
from geometry_msgs.msg import Quaternion  # 四元数消息，用于表示旋转
from std_msgs.msg import Int8  # 整型消息，用于发布导航状态
import math  # 数学库，用于角度转换

class NavigationClient(Node):
    """
    导航客户端节点类，负责处理导航请求和状态
    """
    def __init__(self):
        """
        初始化导航客户端节点
        """
        super().__init__('navigation_client')  # 初始化节点，命名为'navigation_client'

        # 创建 Action 客户端，连接到导航服务
        # 参数说明: 节点实例, 动作类型, 动作服务器名称
        self.client = ActionClient(self, NavigateToPose, '/red_standard_robot1/navigate_to_pose')

        # 订阅 STM32 发送的裁判系统数据
        # 参数说明: 消息类型, 话题名, 回调函数, 队列大小
        self.subscription = self.create_subscription(
            Referee,
            'stm32_ros2_data',
            self.condition_callback,
            10
        )

        # 发布导航状态（1=导航中，0=未导航）
        # 用于通知其他节点当前导航状态
        self.status_publisher = self.create_publisher(Int8, 'nav2_status', 10)

        # 创建定时器，每秒发布一次状态
        # 定期发布状态可防止通信错误导致状态误判
        self.timer = self.create_timer(1.0, self.publish_status)

        # 预定义目标点位置字典
        # 格式: {编号: (x坐标, y坐标, 偏航角)}
        # 不同编号对应不同位置，用于快速切换导航目标
        self.target_points = {
            1: (-3.7, -5.75, 0.0),  # 目标点1
            2: (-3.7, -5.75, 0.0),  # 目标点2
            3: (-3.7, -5.75, 0.0),  # 目标点3
            4: (-3.7, -5.75, 0.0),  # 目标点4
            5: (-3.7, -5.75, 0.0),  # 目标点5
            6: (-3.7, -5.75, 0.0),  # 目标点6
            7: (-3.7, -5.75, 0.0),  # 目标点7
            8: (-0.58, -0.26, 0.0),  # 目标点8 - 用于回到补给区
            9: (-6.83, 1.95, 0.0),  # 目标点9
            10: (-6.8, 1.70, 0.0)   # 目标点10
        }

        # 巡逻点定义 - 三个巡逻点的坐标
        self.patrol_points = [
            (1.30, -1.20, 0.0),  # 巡逻点A
            (1.70, -8.83, 0.0), # 巡逻点B
            (-0.79, -7.21, 0.0)    # 巡逻点C
        ]
        
        self.current_condition = 0  # 记录当前目标编号
        self.current_goal_handle = None  # 记录当前导航状态
        self.is_navigating = False  # 当前导航状态
        self.buff = 0.1  # 修的bug
        
        # 巡逻模式相关变量
        self.patrol_mode = False  # 巡逻模式开关
        self.current_patrol_index = 0  # 当前巡逻点索引
        self.patrol_timer = None  # 巡逻计时器
        
        # 血量检测相关变量
        self.last_hp = 600  # 初始血量，假设最大为600
        self.last_hp_time = time.time()  # 上次血量检测时间
        self.hp_history = []  # 存储最近的血量变化记录，格式：[(时间, 血量), ...]
        self.hp_history_max_length = 10  # 保存最近10次的血量记录
        self.hp_drop_threshold = 10  # 掉血速度阈值：10滴/秒
        self.in_healing_mode = False  # 是否正在回家补血
        
        # 初始化完成后直接启动巡逻模式
        self.get_logger().info("系统初始化完成，直接进入巡逻模式")
        self.patrol_mode = True
        # 使用定时器延迟一下启动巡逻，确保系统完全初始化
        self.create_timer(2.0, self.delayed_start_patrol)

    def delayed_start_patrol(self):
        """延迟启动巡逻，确保系统完全初始化"""
        x, y, yaw = self.patrol_points[self.current_patrol_index]
        self.send_goal(x, y, yaw)
        self.get_logger().info(f"开始巡逻: 前往第 {self.current_patrol_index+1} 个巡逻点")
        # 这是一次性定时器，执行后销毁
        for timer in self.timers:
            if timer.callback == self.delayed_start_patrol:
                self.destroy_timer(timer)
                break

    def send_goal(self, x, y, yaw):
        """发送导航目标点"""
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = "map"
        goal_msg.pose.header.stamp = self.get_clock().now().to_msg()
        goal_msg.pose.pose.position.x = x
        goal_msg.pose.pose.position.y = y
        goal_msg.pose.pose.orientation = self.yaw_to_quaternion(yaw)  # 转换成四元数

        self.get_logger().info(f"发送目标点: x={x}, y={y}, yaw={yaw}")

        self.client.wait_for_server(timeout_sec=5.0)
        future = self.client.send_goal_async(goal_msg)
        future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        """处理导航目标的接受情况"""
        goal_handle = future.result()
        if not goal_handle or not goal_handle.accepted:
            self.get_logger().warn("导航目标未被接受")
            self.is_navigating = False  # 未导航
            return
        
        self.current_goal_handle = goal_handle
        self.get_logger().info("导航目标已被接受，开始导航")
        self.is_navigating = True  # 进入导航状态

        # 监听导航任务完成情况
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.goal_result_callback)

    def goal_result_callback(self, future):
        """处理导航完成或失败"""
        if self.buff == 1:
            self.buff = 0
            return
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("导航成功到达目标点")
            # 如果在巡逻模式下成功到达目标，准备前往下一个巡逻点
            if self.patrol_mode:
                self.schedule_next_patrol_point()
        else:
            self.get_logger().warn(f"导航失败，状态码: {status}")

        if not self.patrol_mode:
            self.is_navigating = False  # 任务结束
            self.current_goal_handle = None  # 清除当前导航任务

    def schedule_next_patrol_point(self):
        """安排前往下一个巡逻点"""
        # 停留几秒后前往下一个点
        if self.patrol_timer:
            self.destroy_timer(self.patrol_timer)
        self.patrol_timer = self.create_timer(5.0, self.navigate_to_next_patrol_point)
        
    def navigate_to_next_patrol_point(self):
        """导航到下一个巡逻点"""
        if self.patrol_timer:
            self.destroy_timer(self.patrol_timer)
            self.patrol_timer = None
            
        # 切换到下一个巡逻点
        self.current_patrol_index = (self.current_patrol_index + 1) % len(self.patrol_points)
        x, y, yaw = self.patrol_points[self.current_patrol_index]
        
        self.get_logger().info(f"巡逻中: 前往第 {self.current_patrol_index+1} 个巡逻点")
        self.send_goal(x, y, yaw)
    
    def start_patrol(self):
        """开始巡逻模式"""
        if self.patrol_mode:
            self.get_logger().info("已经处于巡逻模式")
            return
            
        self.patrol_mode = True
        self.current_patrol_index = 0
        self.get_logger().info("启动巡逻模式")
        
        # 取消当前导航任务（如果有）
        self.cancel_goal()
        
        # 前往第一个巡逻点
        x, y, yaw = self.patrol_points[self.current_patrol_index]
        self.send_goal(x, y, yaw)
    
    def stop_patrol(self):
        """停止巡逻模式"""
        if not self.patrol_mode:
            return
            
        self.patrol_mode = False
        if self.patrol_timer:
            self.destroy_timer(self.patrol_timer)
            self.patrol_timer = None
        
        self.get_logger().info("停止巡逻模式")
        
        # 取消当前巡逻导航
        self.cancel_goal()

    def cancel_goal(self):
        """取消当前导航"""
        if self.current_goal_handle is None:
            return  # 没有目标，不需要取消
        self.buff = 1
        cancel_future = self.current_goal_handle.cancel_goal_async()
        cancel_future.add_done_callback(self.cancel_done_callback)

    def cancel_done_callback(self, future):
        """取消任务完成后的回调"""
        self.get_logger().info("导航目标已取消")
        self.is_navigating = False  # 取消后进入未导航状态
        self.current_goal_handle = None  # 清除当前任务

    def condition_callback(self, msg):
        """接收 STM32 传来的数据，处理导航和血量检测"""
        # 更新血量并检测掉血情况
        current_time = time.time()
        current_hp = msg.remain_hp
        
        # 更新血量历史记录
        self.hp_history.append((current_time, current_hp))
        if len(self.hp_history) > self.hp_history_max_length:
            self.hp_history.pop(0)  # 移除最旧的记录
        
        # 检测掉血速度
        if self.check_hp_drop_rate():
            self.get_logger().warn("检测到快速掉血！终止巡逻并回家补血")
            self.go_to_healing_point()
            return
            
        # 保留原有的导航逻辑，但修正变量赋值问题
        new_condition = -1
        
        # 解析msg中的条件，确定new_condition的值
        # 这里应该有解析逻辑，但原代码没有提供，保持为-1
        
        # 保留停止巡逻模式的功能
        if msg.game_progress == 4 and msg.remain_hp == 888:  # 停止巡逻模式的条件
            self.stop_patrol()
            return
                
        # 如果正在巡逻模式，忽略普通导航命令
        if self.patrol_mode:
            return
        
        # 更新last_hp以供下次比较    
        self.last_hp = current_hp
        self.last_hp_time = current_time
        
        # 原有的导航逻辑
        self.get_logger().info(f"收到条件: {new_condition}")

        if new_condition == 0:
            self.get_logger().info("无目标，保持当前状态")
            return

        if new_condition not in self.target_points:
            self.get_logger().warn(f"条件 {new_condition} 不在定义的目标范围内")
            return

        if new_condition == self.current_condition:
            self.get_logger().info("目标点未变化，不重新发送")
            return

        # 目标发生变化，取消当前导航
        self.cancel_goal()
        self.current_condition = new_condition  # 更新当前目标编号
        x, y, yaw = self.target_points[new_condition]
        self.send_goal(x, y, yaw)

    def check_hp_drop_rate(self):
        """
        检查最近的血量掉落速度
        如果掉血速度超过阈值，返回True
        """
        if len(self.hp_history) < 2:
            return False
        
        # 计算最近时间段内的掉血速度
        recent_records = self.hp_history[-5:]  # 取最近5条记录
        if len(recent_records) < 2:
            return False
        
        first_time, first_hp = recent_records[0]
        last_time, last_hp = recent_records[-1]
        
        time_diff = last_time - first_time
        if time_diff <= 0.1:  # 时间差太小，不计算
            return False
        
        hp_diff = first_hp - last_hp  # 血量减少为正值
        drop_rate = hp_diff / time_diff  # 计算掉血速率
        
        self.get_logger().info(f"当前掉血速率: {drop_rate:.2f} HP/秒")
        
        # 如果掉血速度超过阈值，返回True
        return drop_rate >= self.hp_drop_threshold

    def go_to_healing_point(self):
        """前往补给区补血"""
        # 如果已经在回血中，不重复触发
        if self.in_healing_mode:
            return
            
        self.in_healing_mode = True
        
        # 停止巡逻模式
        self.stop_patrol()
        
        # 取消当前所有导航任务
        self.cancel_goal()
        
        # 前往补给点（目标点8）
        healing_x, healing_y, healing_yaw = self.target_points[8]
        self.get_logger().info(f"前往补给区: x={healing_x}, y={healing_y}")
        self.send_goal(healing_x, healing_y, healing_yaw)
        
        # 设置到达补给区后的回调
        # 使用定时器检查是否补血完成
        self.healing_check_timer = self.create_timer(3.0, self.check_healing_status)

    def check_healing_status(self):
        """检查补血状态"""
        # 如果血量已经恢复到一定程度(比如90%以上)，则恢复巡逻
        if len(self.hp_history) > 0:
            _, current_hp = self.hp_history[-1]
            if current_hp > 540:  # 假设最大血量600，恢复到90%以上
                self.get_logger().info("补血完成，恢复巡逻")
                self.in_healing_mode = False
                self.destroy_timer(self.healing_check_timer)
                self.start_patrol()

    def publish_status(self):
        """每秒发布导航状态 (1=导航中, 0=未导航)"""
        msg = Int8()
        msg.data = 1 if self.is_navigating else 0
        self.status_publisher.publish(msg)
        self.get_logger().info(f"定期发布导航状态: {msg.data}")

    def yaw_to_quaternion(self, yaw):
        """将 yaw 角转换为四元数"""
        q = Quaternion()
        q.z = math.sin(yaw / 2.0)
        q.w = math.cos(yaw / 2.0)
        return q

def main(args=None):
    rclpy.init(args=args)
    nav_client = NavigationClient()
    rclpy.spin(nav_client)  # 让节点一直运行，等待消息
    nav_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
