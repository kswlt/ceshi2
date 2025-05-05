// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from referee_msg:msg/Referee.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "referee_msg/msg/detail/referee__struct.h"
#include "referee_msg/msg/detail/referee__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool referee_msg__msg__referee__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("referee_msg.msg._referee.Referee", full_classname_dest, 32) == 0);
  }
  referee_msg__msg__Referee * ros_message = _ros_message;
  {  // remain_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // game_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // game_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_progress");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_progress = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stage_remain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage_remain_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stage_remain_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coin_remaining_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "coin_remaining_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coin_remaining_num = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bullet_remaining_num_17mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_remaining_num_17mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bullet_remaining_num_17mm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_1_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_1_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_1_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_2_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_2_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_2_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_3_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_3_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_3_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_4_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_4_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_4_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_5_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_5_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_5_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_7_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_7_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_7_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_1_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_1_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_1_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_2_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_2_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_2_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_3_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_3_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_3_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_4_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_4_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_4_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_5_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_5_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_5_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_7_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_7_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_7_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rfid_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfid_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rfid_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * referee_msg__msg__referee__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Referee */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("referee_msg.msg._referee");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Referee");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  referee_msg__msg__Referee * ros_message = (referee_msg__msg__Referee *)raw_ros_message;
  {  // remain_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remain_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_progress
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_progress);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stage_remain_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stage_remain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage_remain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coin_remaining_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coin_remaining_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coin_remaining_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bullet_remaining_num_17mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bullet_remaining_num_17mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_remaining_num_17mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_1_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_1_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_1_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_2_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_2_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_2_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_3_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_3_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_3_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_4_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_4_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_4_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_5_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_5_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_5_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_7_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_7_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_7_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_1_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_1_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_1_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_2_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_2_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_2_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_3_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_3_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_3_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_4_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_4_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_4_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_5_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_5_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_5_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_7_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_7_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_7_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfid_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rfid_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rfid_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
