// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef REFEREE_MSG__MSG__DETAIL__REFEREE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define REFEREE_MSG__MSG__DETAIL__REFEREE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "referee_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "referee_msg/msg/detail/referee__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace referee_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
cdr_serialize(
  const referee_msg::msg::Referee & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  referee_msg::msg::Referee & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
get_serialized_size(
  const referee_msg::msg::Referee & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
max_serialized_size_Referee(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace referee_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, referee_msg, msg, Referee)();

#ifdef __cplusplus
}
#endif

#endif  // REFEREE_MSG__MSG__DETAIL__REFEREE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
