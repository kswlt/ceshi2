// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef REFEREE_MSG__MSG__DETAIL__REFEREE__BUILDER_HPP_
#define REFEREE_MSG__MSG__DETAIL__REFEREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "referee_msg/msg/detail/referee__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace referee_msg
{

namespace msg
{

namespace builder
{

class Init_Referee_rfid_status
{
public:
  explicit Init_Referee_rfid_status(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  ::referee_msg::msg::Referee rfid_status(::referee_msg::msg::Referee::_rfid_status_type arg)
  {
    msg_.rfid_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_base_hp
{
public:
  explicit Init_Referee_blue_base_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_rfid_status blue_base_hp(::referee_msg::msg::Referee::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return Init_Referee_rfid_status(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_outpost_hp
{
public:
  explicit Init_Referee_blue_outpost_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_base_hp blue_outpost_hp(::referee_msg::msg::Referee::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_Referee_blue_base_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_7_hp
{
public:
  explicit Init_Referee_blue_7_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_outpost_hp blue_7_hp(::referee_msg::msg::Referee::_blue_7_hp_type arg)
  {
    msg_.blue_7_hp = std::move(arg);
    return Init_Referee_blue_outpost_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_5_hp
{
public:
  explicit Init_Referee_blue_5_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_7_hp blue_5_hp(::referee_msg::msg::Referee::_blue_5_hp_type arg)
  {
    msg_.blue_5_hp = std::move(arg);
    return Init_Referee_blue_7_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_4_hp
{
public:
  explicit Init_Referee_blue_4_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_5_hp blue_4_hp(::referee_msg::msg::Referee::_blue_4_hp_type arg)
  {
    msg_.blue_4_hp = std::move(arg);
    return Init_Referee_blue_5_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_3_hp
{
public:
  explicit Init_Referee_blue_3_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_4_hp blue_3_hp(::referee_msg::msg::Referee::_blue_3_hp_type arg)
  {
    msg_.blue_3_hp = std::move(arg);
    return Init_Referee_blue_4_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_2_hp
{
public:
  explicit Init_Referee_blue_2_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_3_hp blue_2_hp(::referee_msg::msg::Referee::_blue_2_hp_type arg)
  {
    msg_.blue_2_hp = std::move(arg);
    return Init_Referee_blue_3_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_blue_1_hp
{
public:
  explicit Init_Referee_blue_1_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_2_hp blue_1_hp(::referee_msg::msg::Referee::_blue_1_hp_type arg)
  {
    msg_.blue_1_hp = std::move(arg);
    return Init_Referee_blue_2_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_base_hp
{
public:
  explicit Init_Referee_red_base_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue_1_hp red_base_hp(::referee_msg::msg::Referee::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_Referee_blue_1_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_outpost_hp
{
public:
  explicit Init_Referee_red_outpost_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_base_hp red_outpost_hp(::referee_msg::msg::Referee::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_Referee_red_base_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_7_hp
{
public:
  explicit Init_Referee_red_7_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_outpost_hp red_7_hp(::referee_msg::msg::Referee::_red_7_hp_type arg)
  {
    msg_.red_7_hp = std::move(arg);
    return Init_Referee_red_outpost_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_5_hp
{
public:
  explicit Init_Referee_red_5_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_7_hp red_5_hp(::referee_msg::msg::Referee::_red_5_hp_type arg)
  {
    msg_.red_5_hp = std::move(arg);
    return Init_Referee_red_7_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_4_hp
{
public:
  explicit Init_Referee_red_4_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_5_hp red_4_hp(::referee_msg::msg::Referee::_red_4_hp_type arg)
  {
    msg_.red_4_hp = std::move(arg);
    return Init_Referee_red_5_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_3_hp
{
public:
  explicit Init_Referee_red_3_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_4_hp red_3_hp(::referee_msg::msg::Referee::_red_3_hp_type arg)
  {
    msg_.red_3_hp = std::move(arg);
    return Init_Referee_red_4_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_2_hp
{
public:
  explicit Init_Referee_red_2_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_3_hp red_2_hp(::referee_msg::msg::Referee::_red_2_hp_type arg)
  {
    msg_.red_2_hp = std::move(arg);
    return Init_Referee_red_3_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_red_1_hp
{
public:
  explicit Init_Referee_red_1_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_2_hp red_1_hp(::referee_msg::msg::Referee::_red_1_hp_type arg)
  {
    msg_.red_1_hp = std::move(arg);
    return Init_Referee_red_2_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_bullet_remaining_num_17mm
{
public:
  explicit Init_Referee_bullet_remaining_num_17mm(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_red_1_hp bullet_remaining_num_17mm(::referee_msg::msg::Referee::_bullet_remaining_num_17mm_type arg)
  {
    msg_.bullet_remaining_num_17mm = std::move(arg);
    return Init_Referee_red_1_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_coin_remaining_num
{
public:
  explicit Init_Referee_coin_remaining_num(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_bullet_remaining_num_17mm coin_remaining_num(::referee_msg::msg::Referee::_coin_remaining_num_type arg)
  {
    msg_.coin_remaining_num = std::move(arg);
    return Init_Referee_bullet_remaining_num_17mm(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_stage_remain_time
{
public:
  explicit Init_Referee_stage_remain_time(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_coin_remaining_num stage_remain_time(::referee_msg::msg::Referee::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_Referee_coin_remaining_num(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_game_progress
{
public:
  explicit Init_Referee_game_progress(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_stage_remain_time game_progress(::referee_msg::msg::Referee::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_Referee_stage_remain_time(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_game_type
{
public:
  explicit Init_Referee_game_type(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_game_progress game_type(::referee_msg::msg::Referee::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_Referee_game_progress(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_max_hp
{
public:
  explicit Init_Referee_max_hp(::referee_msg::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_game_type max_hp(::referee_msg::msg::Referee::_max_hp_type arg)
  {
    msg_.max_hp = std::move(arg);
    return Init_Referee_game_type(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

class Init_Referee_remain_hp
{
public:
  Init_Referee_remain_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Referee_max_hp remain_hp(::referee_msg::msg::Referee::_remain_hp_type arg)
  {
    msg_.remain_hp = std::move(arg);
    return Init_Referee_max_hp(msg_);
  }

private:
  ::referee_msg::msg::Referee msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::referee_msg::msg::Referee>()
{
  return referee_msg::msg::builder::Init_Referee_remain_hp();
}

}  // namespace referee_msg

#endif  // REFEREE_MSG__MSG__DETAIL__REFEREE__BUILDER_HPP_
