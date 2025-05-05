// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice
#include "referee_msg/msg/detail/referee__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
referee_msg__msg__Referee__init(referee_msg__msg__Referee * msg)
{
  if (!msg) {
    return false;
  }
  // remain_hp
  // max_hp
  // game_type
  // game_progress
  // stage_remain_time
  // coin_remaining_num
  // bullet_remaining_num_17mm
  // red_1_hp
  // red_2_hp
  // red_3_hp
  // red_4_hp
  // red_5_hp
  // red_7_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_hp
  // blue_2_hp
  // blue_3_hp
  // blue_4_hp
  // blue_5_hp
  // blue_7_hp
  // blue_outpost_hp
  // blue_base_hp
  // rfid_status
  return true;
}

void
referee_msg__msg__Referee__fini(referee_msg__msg__Referee * msg)
{
  if (!msg) {
    return;
  }
  // remain_hp
  // max_hp
  // game_type
  // game_progress
  // stage_remain_time
  // coin_remaining_num
  // bullet_remaining_num_17mm
  // red_1_hp
  // red_2_hp
  // red_3_hp
  // red_4_hp
  // red_5_hp
  // red_7_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_hp
  // blue_2_hp
  // blue_3_hp
  // blue_4_hp
  // blue_5_hp
  // blue_7_hp
  // blue_outpost_hp
  // blue_base_hp
  // rfid_status
}

bool
referee_msg__msg__Referee__are_equal(const referee_msg__msg__Referee * lhs, const referee_msg__msg__Referee * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remain_hp
  if (lhs->remain_hp != rhs->remain_hp) {
    return false;
  }
  // max_hp
  if (lhs->max_hp != rhs->max_hp) {
    return false;
  }
  // game_type
  if (lhs->game_type != rhs->game_type) {
    return false;
  }
  // game_progress
  if (lhs->game_progress != rhs->game_progress) {
    return false;
  }
  // stage_remain_time
  if (lhs->stage_remain_time != rhs->stage_remain_time) {
    return false;
  }
  // coin_remaining_num
  if (lhs->coin_remaining_num != rhs->coin_remaining_num) {
    return false;
  }
  // bullet_remaining_num_17mm
  if (lhs->bullet_remaining_num_17mm != rhs->bullet_remaining_num_17mm) {
    return false;
  }
  // red_1_hp
  if (lhs->red_1_hp != rhs->red_1_hp) {
    return false;
  }
  // red_2_hp
  if (lhs->red_2_hp != rhs->red_2_hp) {
    return false;
  }
  // red_3_hp
  if (lhs->red_3_hp != rhs->red_3_hp) {
    return false;
  }
  // red_4_hp
  if (lhs->red_4_hp != rhs->red_4_hp) {
    return false;
  }
  // red_5_hp
  if (lhs->red_5_hp != rhs->red_5_hp) {
    return false;
  }
  // red_7_hp
  if (lhs->red_7_hp != rhs->red_7_hp) {
    return false;
  }
  // red_outpost_hp
  if (lhs->red_outpost_hp != rhs->red_outpost_hp) {
    return false;
  }
  // red_base_hp
  if (lhs->red_base_hp != rhs->red_base_hp) {
    return false;
  }
  // blue_1_hp
  if (lhs->blue_1_hp != rhs->blue_1_hp) {
    return false;
  }
  // blue_2_hp
  if (lhs->blue_2_hp != rhs->blue_2_hp) {
    return false;
  }
  // blue_3_hp
  if (lhs->blue_3_hp != rhs->blue_3_hp) {
    return false;
  }
  // blue_4_hp
  if (lhs->blue_4_hp != rhs->blue_4_hp) {
    return false;
  }
  // blue_5_hp
  if (lhs->blue_5_hp != rhs->blue_5_hp) {
    return false;
  }
  // blue_7_hp
  if (lhs->blue_7_hp != rhs->blue_7_hp) {
    return false;
  }
  // blue_outpost_hp
  if (lhs->blue_outpost_hp != rhs->blue_outpost_hp) {
    return false;
  }
  // blue_base_hp
  if (lhs->blue_base_hp != rhs->blue_base_hp) {
    return false;
  }
  // rfid_status
  if (lhs->rfid_status != rhs->rfid_status) {
    return false;
  }
  return true;
}

bool
referee_msg__msg__Referee__copy(
  const referee_msg__msg__Referee * input,
  referee_msg__msg__Referee * output)
{
  if (!input || !output) {
    return false;
  }
  // remain_hp
  output->remain_hp = input->remain_hp;
  // max_hp
  output->max_hp = input->max_hp;
  // game_type
  output->game_type = input->game_type;
  // game_progress
  output->game_progress = input->game_progress;
  // stage_remain_time
  output->stage_remain_time = input->stage_remain_time;
  // coin_remaining_num
  output->coin_remaining_num = input->coin_remaining_num;
  // bullet_remaining_num_17mm
  output->bullet_remaining_num_17mm = input->bullet_remaining_num_17mm;
  // red_1_hp
  output->red_1_hp = input->red_1_hp;
  // red_2_hp
  output->red_2_hp = input->red_2_hp;
  // red_3_hp
  output->red_3_hp = input->red_3_hp;
  // red_4_hp
  output->red_4_hp = input->red_4_hp;
  // red_5_hp
  output->red_5_hp = input->red_5_hp;
  // red_7_hp
  output->red_7_hp = input->red_7_hp;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_1_hp
  output->blue_1_hp = input->blue_1_hp;
  // blue_2_hp
  output->blue_2_hp = input->blue_2_hp;
  // blue_3_hp
  output->blue_3_hp = input->blue_3_hp;
  // blue_4_hp
  output->blue_4_hp = input->blue_4_hp;
  // blue_5_hp
  output->blue_5_hp = input->blue_5_hp;
  // blue_7_hp
  output->blue_7_hp = input->blue_7_hp;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  // rfid_status
  output->rfid_status = input->rfid_status;
  return true;
}

referee_msg__msg__Referee *
referee_msg__msg__Referee__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  referee_msg__msg__Referee * msg = (referee_msg__msg__Referee *)allocator.allocate(sizeof(referee_msg__msg__Referee), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(referee_msg__msg__Referee));
  bool success = referee_msg__msg__Referee__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
referee_msg__msg__Referee__destroy(referee_msg__msg__Referee * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    referee_msg__msg__Referee__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
referee_msg__msg__Referee__Sequence__init(referee_msg__msg__Referee__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  referee_msg__msg__Referee * data = NULL;

  if (size) {
    data = (referee_msg__msg__Referee *)allocator.zero_allocate(size, sizeof(referee_msg__msg__Referee), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = referee_msg__msg__Referee__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        referee_msg__msg__Referee__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
referee_msg__msg__Referee__Sequence__fini(referee_msg__msg__Referee__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      referee_msg__msg__Referee__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

referee_msg__msg__Referee__Sequence *
referee_msg__msg__Referee__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  referee_msg__msg__Referee__Sequence * array = (referee_msg__msg__Referee__Sequence *)allocator.allocate(sizeof(referee_msg__msg__Referee__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = referee_msg__msg__Referee__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
referee_msg__msg__Referee__Sequence__destroy(referee_msg__msg__Referee__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    referee_msg__msg__Referee__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
referee_msg__msg__Referee__Sequence__are_equal(const referee_msg__msg__Referee__Sequence * lhs, const referee_msg__msg__Referee__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!referee_msg__msg__Referee__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
referee_msg__msg__Referee__Sequence__copy(
  const referee_msg__msg__Referee__Sequence * input,
  referee_msg__msg__Referee__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(referee_msg__msg__Referee);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    referee_msg__msg__Referee * data =
      (referee_msg__msg__Referee *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!referee_msg__msg__Referee__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          referee_msg__msg__Referee__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!referee_msg__msg__Referee__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
