import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kswlt/Desktop/Nav导航改进/ros_ws/install/my_nav_controller'
