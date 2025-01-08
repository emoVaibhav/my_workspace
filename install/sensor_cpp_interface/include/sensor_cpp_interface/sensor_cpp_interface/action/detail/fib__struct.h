// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_cpp_interface:action/Fib.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__STRUCT_H_
#define SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_Goal
{
  int32_t order;
} sensor_cpp_interface__action__Fib_Goal;

// Struct for a sequence of sensor_cpp_interface__action__Fib_Goal.
typedef struct sensor_cpp_interface__action__Fib_Goal__Sequence
{
  sensor_cpp_interface__action__Fib_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} sensor_cpp_interface__action__Fib_Result;

// Struct for a sequence of sensor_cpp_interface__action__Fib_Result.
typedef struct sensor_cpp_interface__action__Fib_Result__Sequence
{
  sensor_cpp_interface__action__Fib_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} sensor_cpp_interface__action__Fib_Feedback;

// Struct for a sequence of sensor_cpp_interface__action__Fib_Feedback.
typedef struct sensor_cpp_interface__action__Fib_Feedback__Sequence
{
  sensor_cpp_interface__action__Fib_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sensor_cpp_interface/action/detail/fib__struct.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sensor_cpp_interface__action__Fib_Goal goal;
} sensor_cpp_interface__action__Fib_SendGoal_Request;

// Struct for a sequence of sensor_cpp_interface__action__Fib_SendGoal_Request.
typedef struct sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence
{
  sensor_cpp_interface__action__Fib_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sensor_cpp_interface__action__Fib_SendGoal_Response;

// Struct for a sequence of sensor_cpp_interface__action__Fib_SendGoal_Response.
typedef struct sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence
{
  sensor_cpp_interface__action__Fib_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sensor_cpp_interface__action__Fib_GetResult_Request;

// Struct for a sequence of sensor_cpp_interface__action__Fib_GetResult_Request.
typedef struct sensor_cpp_interface__action__Fib_GetResult_Request__Sequence
{
  sensor_cpp_interface__action__Fib_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sensor_cpp_interface/action/detail/fib__struct.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_GetResult_Response
{
  int8_t status;
  sensor_cpp_interface__action__Fib_Result result;
} sensor_cpp_interface__action__Fib_GetResult_Response;

// Struct for a sequence of sensor_cpp_interface__action__Fib_GetResult_Response.
typedef struct sensor_cpp_interface__action__Fib_GetResult_Response__Sequence
{
  sensor_cpp_interface__action__Fib_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sensor_cpp_interface/action/detail/fib__struct.h"

/// Struct defined in action/Fib in the package sensor_cpp_interface.
typedef struct sensor_cpp_interface__action__Fib_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sensor_cpp_interface__action__Fib_Feedback feedback;
} sensor_cpp_interface__action__Fib_FeedbackMessage;

// Struct for a sequence of sensor_cpp_interface__action__Fib_FeedbackMessage.
typedef struct sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence
{
  sensor_cpp_interface__action__Fib_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__STRUCT_H_
