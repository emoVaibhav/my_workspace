// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_cpp_interface:srv/Addition.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__STRUCT_H_
#define SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Addition in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__srv__Addition_Request
{
  int64_t a;
  int64_t b;
} sensor_cpp_interface__srv__Addition_Request;

// Struct for a sequence of sensor_cpp_interface__srv__Addition_Request.
typedef struct sensor_cpp_interface__srv__Addition_Request__Sequence
{
  sensor_cpp_interface__srv__Addition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__srv__Addition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Addition in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__srv__Addition_Response
{
  int64_t sum;
} sensor_cpp_interface__srv__Addition_Response;

// Struct for a sequence of sensor_cpp_interface__srv__Addition_Response.
typedef struct sensor_cpp_interface__srv__Addition_Response__Sequence
{
  sensor_cpp_interface__srv__Addition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__srv__Addition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__STRUCT_H_
