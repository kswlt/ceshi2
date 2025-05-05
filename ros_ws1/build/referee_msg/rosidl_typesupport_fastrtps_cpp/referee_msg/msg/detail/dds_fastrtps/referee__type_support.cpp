// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice
#include "referee_msg/msg/detail/referee__rosidl_typesupport_fastrtps_cpp.hpp"
#include "referee_msg/msg/detail/referee__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: remain_hp
  cdr << ros_message.remain_hp;
  // Member: max_hp
  cdr << ros_message.max_hp;
  // Member: game_type
  cdr << ros_message.game_type;
  // Member: game_progress
  cdr << ros_message.game_progress;
  // Member: stage_remain_time
  cdr << ros_message.stage_remain_time;
  // Member: coin_remaining_num
  cdr << ros_message.coin_remaining_num;
  // Member: bullet_remaining_num_17mm
  cdr << ros_message.bullet_remaining_num_17mm;
  // Member: red_1_hp
  cdr << ros_message.red_1_hp;
  // Member: red_2_hp
  cdr << ros_message.red_2_hp;
  // Member: red_3_hp
  cdr << ros_message.red_3_hp;
  // Member: red_4_hp
  cdr << ros_message.red_4_hp;
  // Member: red_5_hp
  cdr << ros_message.red_5_hp;
  // Member: red_7_hp
  cdr << ros_message.red_7_hp;
  // Member: red_outpost_hp
  cdr << ros_message.red_outpost_hp;
  // Member: red_base_hp
  cdr << ros_message.red_base_hp;
  // Member: blue_1_hp
  cdr << ros_message.blue_1_hp;
  // Member: blue_2_hp
  cdr << ros_message.blue_2_hp;
  // Member: blue_3_hp
  cdr << ros_message.blue_3_hp;
  // Member: blue_4_hp
  cdr << ros_message.blue_4_hp;
  // Member: blue_5_hp
  cdr << ros_message.blue_5_hp;
  // Member: blue_7_hp
  cdr << ros_message.blue_7_hp;
  // Member: blue_outpost_hp
  cdr << ros_message.blue_outpost_hp;
  // Member: blue_base_hp
  cdr << ros_message.blue_base_hp;
  // Member: rfid_status
  cdr << ros_message.rfid_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  referee_msg::msg::Referee & ros_message)
{
  // Member: remain_hp
  cdr >> ros_message.remain_hp;

  // Member: max_hp
  cdr >> ros_message.max_hp;

  // Member: game_type
  cdr >> ros_message.game_type;

  // Member: game_progress
  cdr >> ros_message.game_progress;

  // Member: stage_remain_time
  cdr >> ros_message.stage_remain_time;

  // Member: coin_remaining_num
  cdr >> ros_message.coin_remaining_num;

  // Member: bullet_remaining_num_17mm
  cdr >> ros_message.bullet_remaining_num_17mm;

  // Member: red_1_hp
  cdr >> ros_message.red_1_hp;

  // Member: red_2_hp
  cdr >> ros_message.red_2_hp;

  // Member: red_3_hp
  cdr >> ros_message.red_3_hp;

  // Member: red_4_hp
  cdr >> ros_message.red_4_hp;

  // Member: red_5_hp
  cdr >> ros_message.red_5_hp;

  // Member: red_7_hp
  cdr >> ros_message.red_7_hp;

  // Member: red_outpost_hp
  cdr >> ros_message.red_outpost_hp;

  // Member: red_base_hp
  cdr >> ros_message.red_base_hp;

  // Member: blue_1_hp
  cdr >> ros_message.blue_1_hp;

  // Member: blue_2_hp
  cdr >> ros_message.blue_2_hp;

  // Member: blue_3_hp
  cdr >> ros_message.blue_3_hp;

  // Member: blue_4_hp
  cdr >> ros_message.blue_4_hp;

  // Member: blue_5_hp
  cdr >> ros_message.blue_5_hp;

  // Member: blue_7_hp
  cdr >> ros_message.blue_7_hp;

  // Member: blue_outpost_hp
  cdr >> ros_message.blue_outpost_hp;

  // Member: blue_base_hp
  cdr >> ros_message.blue_base_hp;

  // Member: rfid_status
  cdr >> ros_message.rfid_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
get_serialized_size(
  const referee_msg::msg::Referee & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: remain_hp
  {
    size_t item_size = sizeof(ros_message.remain_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_hp
  {
    size_t item_size = sizeof(ros_message.max_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_type
  {
    size_t item_size = sizeof(ros_message.game_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_progress
  {
    size_t item_size = sizeof(ros_message.game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stage_remain_time
  {
    size_t item_size = sizeof(ros_message.stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coin_remaining_num
  {
    size_t item_size = sizeof(ros_message.coin_remaining_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bullet_remaining_num_17mm
  {
    size_t item_size = sizeof(ros_message.bullet_remaining_num_17mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_1_hp
  {
    size_t item_size = sizeof(ros_message.red_1_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_2_hp
  {
    size_t item_size = sizeof(ros_message.red_2_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_3_hp
  {
    size_t item_size = sizeof(ros_message.red_3_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_4_hp
  {
    size_t item_size = sizeof(ros_message.red_4_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_5_hp
  {
    size_t item_size = sizeof(ros_message.red_5_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_7_hp
  {
    size_t item_size = sizeof(ros_message.red_7_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_outpost_hp
  {
    size_t item_size = sizeof(ros_message.red_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_base_hp
  {
    size_t item_size = sizeof(ros_message.red_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_1_hp
  {
    size_t item_size = sizeof(ros_message.blue_1_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_2_hp
  {
    size_t item_size = sizeof(ros_message.blue_2_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_3_hp
  {
    size_t item_size = sizeof(ros_message.blue_3_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_4_hp
  {
    size_t item_size = sizeof(ros_message.blue_4_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_5_hp
  {
    size_t item_size = sizeof(ros_message.blue_5_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_7_hp
  {
    size_t item_size = sizeof(ros_message.blue_7_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_outpost_hp
  {
    size_t item_size = sizeof(ros_message.blue_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_base_hp
  {
    size_t item_size = sizeof(ros_message.blue_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfid_status
  {
    size_t item_size = sizeof(ros_message.rfid_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_referee_msg
max_serialized_size_Referee(
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


  // Member: remain_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: max_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: game_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: game_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stage_remain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: coin_remaining_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: bullet_remaining_num_17mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_1_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_2_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_3_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_4_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_5_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_7_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_1_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_2_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_3_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_4_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_5_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_7_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rfid_status
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
    using DataType = referee_msg::msg::Referee;
    is_plain =
      (
      offsetof(DataType, rfid_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Referee__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const referee_msg::msg::Referee *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Referee__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<referee_msg::msg::Referee *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Referee__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const referee_msg::msg::Referee *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Referee__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Referee(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Referee__callbacks = {
  "referee_msg::msg",
  "Referee",
  _Referee__cdr_serialize,
  _Referee__cdr_deserialize,
  _Referee__get_serialized_size,
  _Referee__max_serialized_size
};

static rosidl_message_type_support_t _Referee__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Referee__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace referee_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_referee_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<referee_msg::msg::Referee>()
{
  return &referee_msg::msg::typesupport_fastrtps_cpp::_Referee__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, referee_msg, msg, Referee)() {
  return &referee_msg::msg::typesupport_fastrtps_cpp::_Referee__handle;
}

#ifdef __cplusplus
}
#endif
