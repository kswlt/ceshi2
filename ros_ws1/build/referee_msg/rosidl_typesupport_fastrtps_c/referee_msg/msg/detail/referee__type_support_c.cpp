// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice
#include "referee_msg/msg/detail/referee__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "referee_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "referee_msg/msg/detail/referee__struct.h"
#include "referee_msg/msg/detail/referee__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Referee__ros_msg_type = referee_msg__msg__Referee;

static bool _Referee__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Referee__ros_msg_type * ros_message = static_cast<const _Referee__ros_msg_type *>(untyped_ros_message);
  // Field name: remain_hp
  {
    cdr << ros_message->remain_hp;
  }

  // Field name: max_hp
  {
    cdr << ros_message->max_hp;
  }

  // Field name: game_type
  {
    cdr << ros_message->game_type;
  }

  // Field name: game_progress
  {
    cdr << ros_message->game_progress;
  }

  // Field name: stage_remain_time
  {
    cdr << ros_message->stage_remain_time;
  }

  // Field name: coin_remaining_num
  {
    cdr << ros_message->coin_remaining_num;
  }

  // Field name: bullet_remaining_num_17mm
  {
    cdr << ros_message->bullet_remaining_num_17mm;
  }

  // Field name: red_1_hp
  {
    cdr << ros_message->red_1_hp;
  }

  // Field name: red_2_hp
  {
    cdr << ros_message->red_2_hp;
  }

  // Field name: red_3_hp
  {
    cdr << ros_message->red_3_hp;
  }

  // Field name: red_4_hp
  {
    cdr << ros_message->red_4_hp;
  }

  // Field name: red_5_hp
  {
    cdr << ros_message->red_5_hp;
  }

  // Field name: red_7_hp
  {
    cdr << ros_message->red_7_hp;
  }

  // Field name: red_outpost_hp
  {
    cdr << ros_message->red_outpost_hp;
  }

  // Field name: red_base_hp
  {
    cdr << ros_message->red_base_hp;
  }

  // Field name: blue_1_hp
  {
    cdr << ros_message->blue_1_hp;
  }

  // Field name: blue_2_hp
  {
    cdr << ros_message->blue_2_hp;
  }

  // Field name: blue_3_hp
  {
    cdr << ros_message->blue_3_hp;
  }

  // Field name: blue_4_hp
  {
    cdr << ros_message->blue_4_hp;
  }

  // Field name: blue_5_hp
  {
    cdr << ros_message->blue_5_hp;
  }

  // Field name: blue_7_hp
  {
    cdr << ros_message->blue_7_hp;
  }

  // Field name: blue_outpost_hp
  {
    cdr << ros_message->blue_outpost_hp;
  }

  // Field name: blue_base_hp
  {
    cdr << ros_message->blue_base_hp;
  }

  // Field name: rfid_status
  {
    cdr << ros_message->rfid_status;
  }

  return true;
}

static bool _Referee__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Referee__ros_msg_type * ros_message = static_cast<_Referee__ros_msg_type *>(untyped_ros_message);
  // Field name: remain_hp
  {
    cdr >> ros_message->remain_hp;
  }

  // Field name: max_hp
  {
    cdr >> ros_message->max_hp;
  }

  // Field name: game_type
  {
    cdr >> ros_message->game_type;
  }

  // Field name: game_progress
  {
    cdr >> ros_message->game_progress;
  }

  // Field name: stage_remain_time
  {
    cdr >> ros_message->stage_remain_time;
  }

  // Field name: coin_remaining_num
  {
    cdr >> ros_message->coin_remaining_num;
  }

  // Field name: bullet_remaining_num_17mm
  {
    cdr >> ros_message->bullet_remaining_num_17mm;
  }

  // Field name: red_1_hp
  {
    cdr >> ros_message->red_1_hp;
  }

  // Field name: red_2_hp
  {
    cdr >> ros_message->red_2_hp;
  }

  // Field name: red_3_hp
  {
    cdr >> ros_message->red_3_hp;
  }

  // Field name: red_4_hp
  {
    cdr >> ros_message->red_4_hp;
  }

  // Field name: red_5_hp
  {
    cdr >> ros_message->red_5_hp;
  }

  // Field name: red_7_hp
  {
    cdr >> ros_message->red_7_hp;
  }

  // Field name: red_outpost_hp
  {
    cdr >> ros_message->red_outpost_hp;
  }

  // Field name: red_base_hp
  {
    cdr >> ros_message->red_base_hp;
  }

  // Field name: blue_1_hp
  {
    cdr >> ros_message->blue_1_hp;
  }

  // Field name: blue_2_hp
  {
    cdr >> ros_message->blue_2_hp;
  }

  // Field name: blue_3_hp
  {
    cdr >> ros_message->blue_3_hp;
  }

  // Field name: blue_4_hp
  {
    cdr >> ros_message->blue_4_hp;
  }

  // Field name: blue_5_hp
  {
    cdr >> ros_message->blue_5_hp;
  }

  // Field name: blue_7_hp
  {
    cdr >> ros_message->blue_7_hp;
  }

  // Field name: blue_outpost_hp
  {
    cdr >> ros_message->blue_outpost_hp;
  }

  // Field name: blue_base_hp
  {
    cdr >> ros_message->blue_base_hp;
  }

  // Field name: rfid_status
  {
    cdr >> ros_message->rfid_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_referee_msg
size_t get_serialized_size_referee_msg__msg__Referee(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Referee__ros_msg_type * ros_message = static_cast<const _Referee__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name remain_hp
  {
    size_t item_size = sizeof(ros_message->remain_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_hp
  {
    size_t item_size = sizeof(ros_message->max_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_type
  {
    size_t item_size = sizeof(ros_message->game_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_progress
  {
    size_t item_size = sizeof(ros_message->game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stage_remain_time
  {
    size_t item_size = sizeof(ros_message->stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coin_remaining_num
  {
    size_t item_size = sizeof(ros_message->coin_remaining_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bullet_remaining_num_17mm
  {
    size_t item_size = sizeof(ros_message->bullet_remaining_num_17mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_1_hp
  {
    size_t item_size = sizeof(ros_message->red_1_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_2_hp
  {
    size_t item_size = sizeof(ros_message->red_2_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_3_hp
  {
    size_t item_size = sizeof(ros_message->red_3_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_4_hp
  {
    size_t item_size = sizeof(ros_message->red_4_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_5_hp
  {
    size_t item_size = sizeof(ros_message->red_5_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_7_hp
  {
    size_t item_size = sizeof(ros_message->red_7_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_outpost_hp
  {
    size_t item_size = sizeof(ros_message->red_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_base_hp
  {
    size_t item_size = sizeof(ros_message->red_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_1_hp
  {
    size_t item_size = sizeof(ros_message->blue_1_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_2_hp
  {
    size_t item_size = sizeof(ros_message->blue_2_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_3_hp
  {
    size_t item_size = sizeof(ros_message->blue_3_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_4_hp
  {
    size_t item_size = sizeof(ros_message->blue_4_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_5_hp
  {
    size_t item_size = sizeof(ros_message->blue_5_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_7_hp
  {
    size_t item_size = sizeof(ros_message->blue_7_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_outpost_hp
  {
    size_t item_size = sizeof(ros_message->blue_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_base_hp
  {
    size_t item_size = sizeof(ros_message->blue_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfid_status
  {
    size_t item_size = sizeof(ros_message->rfid_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Referee__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_referee_msg__msg__Referee(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_referee_msg
size_t max_serialized_size_referee_msg__msg__Referee(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: remain_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: max_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: game_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: game_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stage_remain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: coin_remaining_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bullet_remaining_num_17mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_1_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_2_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_3_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_4_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_5_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_7_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_1_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_2_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_3_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_4_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_5_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_7_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rfid_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = referee_msg__msg__Referee;
    is_plain =
      (
      offsetof(DataType, rfid_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Referee__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_referee_msg__msg__Referee(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Referee = {
  "referee_msg::msg",
  "Referee",
  _Referee__cdr_serialize,
  _Referee__cdr_deserialize,
  _Referee__get_serialized_size,
  _Referee__max_serialized_size
};

static rosidl_message_type_support_t _Referee__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Referee,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, referee_msg, msg, Referee)() {
  return &_Referee__type_support;
}

#if defined(__cplusplus)
}
#endif
