// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef REFEREE_MSG__MSG__DETAIL__REFEREE__STRUCT_HPP_
#define REFEREE_MSG__MSG__DETAIL__REFEREE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__referee_msg__msg__Referee __attribute__((deprecated))
#else
# define DEPRECATED__referee_msg__msg__Referee __declspec(deprecated)
#endif

namespace referee_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Referee_
{
  using Type = Referee_<ContainerAllocator>;

  explicit Referee_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remain_hp = 0;
      this->max_hp = 0;
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->coin_remaining_num = 0;
      this->bullet_remaining_num_17mm = 0;
      this->red_1_hp = 0;
      this->red_2_hp = 0;
      this->red_3_hp = 0;
      this->red_4_hp = 0;
      this->red_5_hp = 0;
      this->red_7_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_hp = 0;
      this->blue_2_hp = 0;
      this->blue_3_hp = 0;
      this->blue_4_hp = 0;
      this->blue_5_hp = 0;
      this->blue_7_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->rfid_status = 0ul;
    }
  }

  explicit Referee_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remain_hp = 0;
      this->max_hp = 0;
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->coin_remaining_num = 0;
      this->bullet_remaining_num_17mm = 0;
      this->red_1_hp = 0;
      this->red_2_hp = 0;
      this->red_3_hp = 0;
      this->red_4_hp = 0;
      this->red_5_hp = 0;
      this->red_7_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_hp = 0;
      this->blue_2_hp = 0;
      this->blue_3_hp = 0;
      this->blue_4_hp = 0;
      this->blue_5_hp = 0;
      this->blue_7_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->rfid_status = 0ul;
    }
  }

  // field types and members
  using _remain_hp_type =
    uint16_t;
  _remain_hp_type remain_hp;
  using _max_hp_type =
    uint16_t;
  _max_hp_type max_hp;
  using _game_type_type =
    uint8_t;
  _game_type_type game_type;
  using _game_progress_type =
    uint8_t;
  _game_progress_type game_progress;
  using _stage_remain_time_type =
    uint16_t;
  _stage_remain_time_type stage_remain_time;
  using _coin_remaining_num_type =
    uint16_t;
  _coin_remaining_num_type coin_remaining_num;
  using _bullet_remaining_num_17mm_type =
    uint16_t;
  _bullet_remaining_num_17mm_type bullet_remaining_num_17mm;
  using _red_1_hp_type =
    uint16_t;
  _red_1_hp_type red_1_hp;
  using _red_2_hp_type =
    uint16_t;
  _red_2_hp_type red_2_hp;
  using _red_3_hp_type =
    uint16_t;
  _red_3_hp_type red_3_hp;
  using _red_4_hp_type =
    uint16_t;
  _red_4_hp_type red_4_hp;
  using _red_5_hp_type =
    uint16_t;
  _red_5_hp_type red_5_hp;
  using _red_7_hp_type =
    uint16_t;
  _red_7_hp_type red_7_hp;
  using _red_outpost_hp_type =
    uint16_t;
  _red_outpost_hp_type red_outpost_hp;
  using _red_base_hp_type =
    uint16_t;
  _red_base_hp_type red_base_hp;
  using _blue_1_hp_type =
    uint16_t;
  _blue_1_hp_type blue_1_hp;
  using _blue_2_hp_type =
    uint16_t;
  _blue_2_hp_type blue_2_hp;
  using _blue_3_hp_type =
    uint16_t;
  _blue_3_hp_type blue_3_hp;
  using _blue_4_hp_type =
    uint16_t;
  _blue_4_hp_type blue_4_hp;
  using _blue_5_hp_type =
    uint16_t;
  _blue_5_hp_type blue_5_hp;
  using _blue_7_hp_type =
    uint16_t;
  _blue_7_hp_type blue_7_hp;
  using _blue_outpost_hp_type =
    uint16_t;
  _blue_outpost_hp_type blue_outpost_hp;
  using _blue_base_hp_type =
    uint16_t;
  _blue_base_hp_type blue_base_hp;
  using _rfid_status_type =
    uint32_t;
  _rfid_status_type rfid_status;

  // setters for named parameter idiom
  Type & set__remain_hp(
    const uint16_t & _arg)
  {
    this->remain_hp = _arg;
    return *this;
  }
  Type & set__max_hp(
    const uint16_t & _arg)
  {
    this->max_hp = _arg;
    return *this;
  }
  Type & set__game_type(
    const uint8_t & _arg)
  {
    this->game_type = _arg;
    return *this;
  }
  Type & set__game_progress(
    const uint8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const uint16_t & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__coin_remaining_num(
    const uint16_t & _arg)
  {
    this->coin_remaining_num = _arg;
    return *this;
  }
  Type & set__bullet_remaining_num_17mm(
    const uint16_t & _arg)
  {
    this->bullet_remaining_num_17mm = _arg;
    return *this;
  }
  Type & set__red_1_hp(
    const uint16_t & _arg)
  {
    this->red_1_hp = _arg;
    return *this;
  }
  Type & set__red_2_hp(
    const uint16_t & _arg)
  {
    this->red_2_hp = _arg;
    return *this;
  }
  Type & set__red_3_hp(
    const uint16_t & _arg)
  {
    this->red_3_hp = _arg;
    return *this;
  }
  Type & set__red_4_hp(
    const uint16_t & _arg)
  {
    this->red_4_hp = _arg;
    return *this;
  }
  Type & set__red_5_hp(
    const uint16_t & _arg)
  {
    this->red_5_hp = _arg;
    return *this;
  }
  Type & set__red_7_hp(
    const uint16_t & _arg)
  {
    this->red_7_hp = _arg;
    return *this;
  }
  Type & set__red_outpost_hp(
    const uint16_t & _arg)
  {
    this->red_outpost_hp = _arg;
    return *this;
  }
  Type & set__red_base_hp(
    const uint16_t & _arg)
  {
    this->red_base_hp = _arg;
    return *this;
  }
  Type & set__blue_1_hp(
    const uint16_t & _arg)
  {
    this->blue_1_hp = _arg;
    return *this;
  }
  Type & set__blue_2_hp(
    const uint16_t & _arg)
  {
    this->blue_2_hp = _arg;
    return *this;
  }
  Type & set__blue_3_hp(
    const uint16_t & _arg)
  {
    this->blue_3_hp = _arg;
    return *this;
  }
  Type & set__blue_4_hp(
    const uint16_t & _arg)
  {
    this->blue_4_hp = _arg;
    return *this;
  }
  Type & set__blue_5_hp(
    const uint16_t & _arg)
  {
    this->blue_5_hp = _arg;
    return *this;
  }
  Type & set__blue_7_hp(
    const uint16_t & _arg)
  {
    this->blue_7_hp = _arg;
    return *this;
  }
  Type & set__blue_outpost_hp(
    const uint16_t & _arg)
  {
    this->blue_outpost_hp = _arg;
    return *this;
  }
  Type & set__blue_base_hp(
    const uint16_t & _arg)
  {
    this->blue_base_hp = _arg;
    return *this;
  }
  Type & set__rfid_status(
    const uint32_t & _arg)
  {
    this->rfid_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    referee_msg::msg::Referee_<ContainerAllocator> *;
  using ConstRawPtr =
    const referee_msg::msg::Referee_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<referee_msg::msg::Referee_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<referee_msg::msg::Referee_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      referee_msg::msg::Referee_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<referee_msg::msg::Referee_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      referee_msg::msg::Referee_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<referee_msg::msg::Referee_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<referee_msg::msg::Referee_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<referee_msg::msg::Referee_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__referee_msg__msg__Referee
    std::shared_ptr<referee_msg::msg::Referee_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__referee_msg__msg__Referee
    std::shared_ptr<referee_msg::msg::Referee_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Referee_ & other) const
  {
    if (this->remain_hp != other.remain_hp) {
      return false;
    }
    if (this->max_hp != other.max_hp) {
      return false;
    }
    if (this->game_type != other.game_type) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->coin_remaining_num != other.coin_remaining_num) {
      return false;
    }
    if (this->bullet_remaining_num_17mm != other.bullet_remaining_num_17mm) {
      return false;
    }
    if (this->red_1_hp != other.red_1_hp) {
      return false;
    }
    if (this->red_2_hp != other.red_2_hp) {
      return false;
    }
    if (this->red_3_hp != other.red_3_hp) {
      return false;
    }
    if (this->red_4_hp != other.red_4_hp) {
      return false;
    }
    if (this->red_5_hp != other.red_5_hp) {
      return false;
    }
    if (this->red_7_hp != other.red_7_hp) {
      return false;
    }
    if (this->red_outpost_hp != other.red_outpost_hp) {
      return false;
    }
    if (this->red_base_hp != other.red_base_hp) {
      return false;
    }
    if (this->blue_1_hp != other.blue_1_hp) {
      return false;
    }
    if (this->blue_2_hp != other.blue_2_hp) {
      return false;
    }
    if (this->blue_3_hp != other.blue_3_hp) {
      return false;
    }
    if (this->blue_4_hp != other.blue_4_hp) {
      return false;
    }
    if (this->blue_5_hp != other.blue_5_hp) {
      return false;
    }
    if (this->blue_7_hp != other.blue_7_hp) {
      return false;
    }
    if (this->blue_outpost_hp != other.blue_outpost_hp) {
      return false;
    }
    if (this->blue_base_hp != other.blue_base_hp) {
      return false;
    }
    if (this->rfid_status != other.rfid_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Referee_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Referee_

// alias to use template instance with default allocator
using Referee =
  referee_msg::msg::Referee_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace referee_msg

#endif  // REFEREE_MSG__MSG__DETAIL__REFEREE__STRUCT_HPP_
