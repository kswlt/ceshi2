// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef REFEREE_MSG__MSG__DETAIL__REFEREE__TRAITS_HPP_
#define REFEREE_MSG__MSG__DETAIL__REFEREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "referee_msg/msg/detail/referee__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace referee_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Referee & msg,
  std::ostream & out)
{
  out << "{";
  // member: remain_hp
  {
    out << "remain_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_hp, out);
    out << ", ";
  }

  // member: max_hp
  {
    out << "max_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_hp, out);
    out << ", ";
  }

  // member: game_type
  {
    out << "game_type: ";
    rosidl_generator_traits::value_to_yaml(msg.game_type, out);
    out << ", ";
  }

  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << ", ";
  }

  // member: coin_remaining_num
  {
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
    out << ", ";
  }

  // member: bullet_remaining_num_17mm
  {
    out << "bullet_remaining_num_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_17mm, out);
    out << ", ";
  }

  // member: red_1_hp
  {
    out << "red_1_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_hp, out);
    out << ", ";
  }

  // member: red_2_hp
  {
    out << "red_2_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_hp, out);
    out << ", ";
  }

  // member: red_3_hp
  {
    out << "red_3_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_hp, out);
    out << ", ";
  }

  // member: red_4_hp
  {
    out << "red_4_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_hp, out);
    out << ", ";
  }

  // member: red_5_hp
  {
    out << "red_5_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_hp, out);
    out << ", ";
  }

  // member: red_7_hp
  {
    out << "red_7_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_hp, out);
    out << ", ";
  }

  // member: red_outpost_hp
  {
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << ", ";
  }

  // member: red_base_hp
  {
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << ", ";
  }

  // member: blue_1_hp
  {
    out << "blue_1_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_hp, out);
    out << ", ";
  }

  // member: blue_2_hp
  {
    out << "blue_2_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_hp, out);
    out << ", ";
  }

  // member: blue_3_hp
  {
    out << "blue_3_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_hp, out);
    out << ", ";
  }

  // member: blue_4_hp
  {
    out << "blue_4_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_hp, out);
    out << ", ";
  }

  // member: blue_5_hp
  {
    out << "blue_5_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_hp, out);
    out << ", ";
  }

  // member: blue_7_hp
  {
    out << "blue_7_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_hp, out);
    out << ", ";
  }

  // member: blue_outpost_hp
  {
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << ", ";
  }

  // member: blue_base_hp
  {
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << ", ";
  }

  // member: rfid_status
  {
    out << "rfid_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rfid_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Referee & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remain_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_hp, out);
    out << "\n";
  }

  // member: max_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_hp, out);
    out << "\n";
  }

  // member: game_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_type: ";
    rosidl_generator_traits::value_to_yaml(msg.game_type, out);
    out << "\n";
  }

  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }

  // member: coin_remaining_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
    out << "\n";
  }

  // member: bullet_remaining_num_17mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_remaining_num_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_17mm, out);
    out << "\n";
  }

  // member: red_1_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_1_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_hp, out);
    out << "\n";
  }

  // member: red_2_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_2_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_hp, out);
    out << "\n";
  }

  // member: red_3_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_3_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_hp, out);
    out << "\n";
  }

  // member: red_4_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_4_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_hp, out);
    out << "\n";
  }

  // member: red_5_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_5_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_hp, out);
    out << "\n";
  }

  // member: red_7_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_7_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_hp, out);
    out << "\n";
  }

  // member: red_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << "\n";
  }

  // member: red_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << "\n";
  }

  // member: blue_1_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_1_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_hp, out);
    out << "\n";
  }

  // member: blue_2_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_2_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_hp, out);
    out << "\n";
  }

  // member: blue_3_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_3_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_hp, out);
    out << "\n";
  }

  // member: blue_4_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_4_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_hp, out);
    out << "\n";
  }

  // member: blue_5_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_5_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_hp, out);
    out << "\n";
  }

  // member: blue_7_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_7_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_hp, out);
    out << "\n";
  }

  // member: blue_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << "\n";
  }

  // member: blue_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << "\n";
  }

  // member: rfid_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfid_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rfid_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Referee & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace referee_msg

namespace rosidl_generator_traits
{

[[deprecated("use referee_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const referee_msg::msg::Referee & msg,
  std::ostream & out, size_t indentation = 0)
{
  referee_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use referee_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const referee_msg::msg::Referee & msg)
{
  return referee_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<referee_msg::msg::Referee>()
{
  return "referee_msg::msg::Referee";
}

template<>
inline const char * name<referee_msg::msg::Referee>()
{
  return "referee_msg/msg/Referee";
}

template<>
struct has_fixed_size<referee_msg::msg::Referee>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<referee_msg::msg::Referee>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<referee_msg::msg::Referee>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // REFEREE_MSG__MSG__DETAIL__REFEREE__TRAITS_HPP_
