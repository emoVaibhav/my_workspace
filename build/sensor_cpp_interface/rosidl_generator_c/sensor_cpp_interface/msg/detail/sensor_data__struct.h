// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_cpp_interface:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorData in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__msg__SensorData
{
  rosidl_runtime_c__String name;
  int32_t val;
} sensor_cpp_interface__msg__SensorData;

// Struct for a sequence of sensor_cpp_interface__msg__SensorData.
typedef struct sensor_cpp_interface__msg__SensorData__Sequence
{
  sensor_cpp_interface__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
