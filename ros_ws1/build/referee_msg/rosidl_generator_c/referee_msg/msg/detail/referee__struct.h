// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef REFEREE_MSG__MSG__DETAIL__REFEREE__STRUCT_H_
#define REFEREE_MSG__MSG__DETAIL__REFEREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Referee in the package referee_msg.
typedef struct referee_msg__msg__Referee
{
  uint16_t remain_hp;
  uint16_t max_hp;
  uint8_t game_type;
  uint8_t game_progress;
  uint16_t stage_remain_time;
  uint16_t coin_remaining_num;
  uint16_t bullet_remaining_num_17mm;
  uint16_t red_1_hp;
  uint16_t red_2_hp;
  uint16_t red_3_hp;
  uint16_t red_4_hp;
  uint16_t red_5_hp;
  uint16_t red_7_hp;
  uint16_t red_outpost_hp;
  uint16_t red_base_hp;
  uint16_t blue_1_hp;
  uint16_t blue_2_hp;
  uint16_t blue_3_hp;
  uint16_t blue_4_hp;
  uint16_t blue_5_hp;
  uint16_t blue_7_hp;
  uint16_t blue_outpost_hp;
  uint16_t blue_base_hp;
  uint32_t rfid_status;
} referee_msg__msg__Referee;

// Struct for a sequence of referee_msg__msg__Referee.
typedef struct referee_msg__msg__Referee__Sequence
{
  referee_msg__msg__Referee * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} referee_msg__msg__Referee__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REFEREE_MSG__MSG__DETAIL__REFEREE__STRUCT_H_
