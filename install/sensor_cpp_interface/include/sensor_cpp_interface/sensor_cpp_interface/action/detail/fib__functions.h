// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensor_cpp_interface:action/Fib.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__FUNCTIONS_H_
#define SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensor_cpp_interface/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_cpp_interface/action/detail/fib__struct.h"

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_Goal
 * )) before or use
 * sensor_cpp_interface__action__Fib_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Goal__init(sensor_cpp_interface__action__Fib_Goal * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Goal__fini(sensor_cpp_interface__action__Fib_Goal * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_Goal *
sensor_cpp_interface__action__Fib_Goal__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Goal__destroy(sensor_cpp_interface__action__Fib_Goal * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Goal__are_equal(const sensor_cpp_interface__action__Fib_Goal * lhs, const sensor_cpp_interface__action__Fib_Goal * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Goal__copy(
  const sensor_cpp_interface__action__Fib_Goal * input,
  sensor_cpp_interface__action__Fib_Goal * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Goal__Sequence__init(sensor_cpp_interface__action__Fib_Goal__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Goal__Sequence__fini(sensor_cpp_interface__action__Fib_Goal__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_Goal__Sequence *
sensor_cpp_interface__action__Fib_Goal__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Goal__Sequence__destroy(sensor_cpp_interface__action__Fib_Goal__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Goal__Sequence__are_equal(const sensor_cpp_interface__action__Fib_Goal__Sequence * lhs, const sensor_cpp_interface__action__Fib_Goal__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Goal__Sequence__copy(
  const sensor_cpp_interface__action__Fib_Goal__Sequence * input,
  sensor_cpp_interface__action__Fib_Goal__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_Result
 * )) before or use
 * sensor_cpp_interface__action__Fib_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Result__init(sensor_cpp_interface__action__Fib_Result * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Result__fini(sensor_cpp_interface__action__Fib_Result * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_Result *
sensor_cpp_interface__action__Fib_Result__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Result__destroy(sensor_cpp_interface__action__Fib_Result * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Result__are_equal(const sensor_cpp_interface__action__Fib_Result * lhs, const sensor_cpp_interface__action__Fib_Result * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Result__copy(
  const sensor_cpp_interface__action__Fib_Result * input,
  sensor_cpp_interface__action__Fib_Result * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Result__Sequence__init(sensor_cpp_interface__action__Fib_Result__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Result__Sequence__fini(sensor_cpp_interface__action__Fib_Result__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_Result__Sequence *
sensor_cpp_interface__action__Fib_Result__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Result__Sequence__destroy(sensor_cpp_interface__action__Fib_Result__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Result__Sequence__are_equal(const sensor_cpp_interface__action__Fib_Result__Sequence * lhs, const sensor_cpp_interface__action__Fib_Result__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Result__Sequence__copy(
  const sensor_cpp_interface__action__Fib_Result__Sequence * input,
  sensor_cpp_interface__action__Fib_Result__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_Feedback
 * )) before or use
 * sensor_cpp_interface__action__Fib_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Feedback__init(sensor_cpp_interface__action__Fib_Feedback * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Feedback__fini(sensor_cpp_interface__action__Fib_Feedback * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_Feedback *
sensor_cpp_interface__action__Fib_Feedback__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Feedback__destroy(sensor_cpp_interface__action__Fib_Feedback * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Feedback__are_equal(const sensor_cpp_interface__action__Fib_Feedback * lhs, const sensor_cpp_interface__action__Fib_Feedback * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Feedback__copy(
  const sensor_cpp_interface__action__Fib_Feedback * input,
  sensor_cpp_interface__action__Fib_Feedback * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Feedback__Sequence__init(sensor_cpp_interface__action__Fib_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Feedback__Sequence__fini(sensor_cpp_interface__action__Fib_Feedback__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_Feedback__Sequence *
sensor_cpp_interface__action__Fib_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_Feedback__Sequence__destroy(sensor_cpp_interface__action__Fib_Feedback__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Feedback__Sequence__are_equal(const sensor_cpp_interface__action__Fib_Feedback__Sequence * lhs, const sensor_cpp_interface__action__Fib_Feedback__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_Feedback__Sequence__copy(
  const sensor_cpp_interface__action__Fib_Feedback__Sequence * input,
  sensor_cpp_interface__action__Fib_Feedback__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_SendGoal_Request
 * )) before or use
 * sensor_cpp_interface__action__Fib_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Request__init(sensor_cpp_interface__action__Fib_SendGoal_Request * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Request__fini(sensor_cpp_interface__action__Fib_SendGoal_Request * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_SendGoal_Request *
sensor_cpp_interface__action__Fib_SendGoal_Request__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Request__destroy(sensor_cpp_interface__action__Fib_SendGoal_Request * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Request__are_equal(const sensor_cpp_interface__action__Fib_SendGoal_Request * lhs, const sensor_cpp_interface__action__Fib_SendGoal_Request * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Request__copy(
  const sensor_cpp_interface__action__Fib_SendGoal_Request * input,
  sensor_cpp_interface__action__Fib_SendGoal_Request * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__init(sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__fini(sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence *
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__destroy(sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__are_equal(const sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * lhs, const sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence__copy(
  const sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * input,
  sensor_cpp_interface__action__Fib_SendGoal_Request__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_SendGoal_Response
 * )) before or use
 * sensor_cpp_interface__action__Fib_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Response__init(sensor_cpp_interface__action__Fib_SendGoal_Response * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Response__fini(sensor_cpp_interface__action__Fib_SendGoal_Response * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_SendGoal_Response *
sensor_cpp_interface__action__Fib_SendGoal_Response__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Response__destroy(sensor_cpp_interface__action__Fib_SendGoal_Response * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Response__are_equal(const sensor_cpp_interface__action__Fib_SendGoal_Response * lhs, const sensor_cpp_interface__action__Fib_SendGoal_Response * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Response__copy(
  const sensor_cpp_interface__action__Fib_SendGoal_Response * input,
  sensor_cpp_interface__action__Fib_SendGoal_Response * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__init(sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__fini(sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence *
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__destroy(sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__are_equal(const sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * lhs, const sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence__copy(
  const sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * input,
  sensor_cpp_interface__action__Fib_SendGoal_Response__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_GetResult_Request
 * )) before or use
 * sensor_cpp_interface__action__Fib_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Request__init(sensor_cpp_interface__action__Fib_GetResult_Request * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Request__fini(sensor_cpp_interface__action__Fib_GetResult_Request * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_GetResult_Request *
sensor_cpp_interface__action__Fib_GetResult_Request__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Request__destroy(sensor_cpp_interface__action__Fib_GetResult_Request * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Request__are_equal(const sensor_cpp_interface__action__Fib_GetResult_Request * lhs, const sensor_cpp_interface__action__Fib_GetResult_Request * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Request__copy(
  const sensor_cpp_interface__action__Fib_GetResult_Request * input,
  sensor_cpp_interface__action__Fib_GetResult_Request * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__init(sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__fini(sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence *
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__destroy(sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__are_equal(const sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * lhs, const sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Request__Sequence__copy(
  const sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * input,
  sensor_cpp_interface__action__Fib_GetResult_Request__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_GetResult_Response
 * )) before or use
 * sensor_cpp_interface__action__Fib_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Response__init(sensor_cpp_interface__action__Fib_GetResult_Response * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Response__fini(sensor_cpp_interface__action__Fib_GetResult_Response * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_GetResult_Response *
sensor_cpp_interface__action__Fib_GetResult_Response__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Response__destroy(sensor_cpp_interface__action__Fib_GetResult_Response * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Response__are_equal(const sensor_cpp_interface__action__Fib_GetResult_Response * lhs, const sensor_cpp_interface__action__Fib_GetResult_Response * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Response__copy(
  const sensor_cpp_interface__action__Fib_GetResult_Response * input,
  sensor_cpp_interface__action__Fib_GetResult_Response * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__init(sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__fini(sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence *
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__destroy(sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__are_equal(const sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * lhs, const sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_GetResult_Response__Sequence__copy(
  const sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * input,
  sensor_cpp_interface__action__Fib_GetResult_Response__Sequence * output);

/// Initialize action/Fib message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_cpp_interface__action__Fib_FeedbackMessage
 * )) before or use
 * sensor_cpp_interface__action__Fib_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_FeedbackMessage__init(sensor_cpp_interface__action__Fib_FeedbackMessage * msg);

/// Finalize action/Fib message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_FeedbackMessage__fini(sensor_cpp_interface__action__Fib_FeedbackMessage * msg);

/// Create action/Fib message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_cpp_interface__action__Fib_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_FeedbackMessage *
sensor_cpp_interface__action__Fib_FeedbackMessage__create();

/// Destroy action/Fib message.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_FeedbackMessage__destroy(sensor_cpp_interface__action__Fib_FeedbackMessage * msg);

/// Check for action/Fib message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_FeedbackMessage__are_equal(const sensor_cpp_interface__action__Fib_FeedbackMessage * lhs, const sensor_cpp_interface__action__Fib_FeedbackMessage * rhs);

/// Copy a action/Fib message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_FeedbackMessage__copy(
  const sensor_cpp_interface__action__Fib_FeedbackMessage * input,
  sensor_cpp_interface__action__Fib_FeedbackMessage * output);

/// Initialize array of action/Fib messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_cpp_interface__action__Fib_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__init(sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__fini(sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * array);

/// Create array of action/Fib messages.
/**
 * It allocates the memory for the array and calls
 * sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence *
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Fib messages.
/**
 * It calls
 * sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
void
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__destroy(sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * array);

/// Check for action/Fib message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__are_equal(const sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * lhs, const sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Fib messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_cpp_interface
bool
sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence__copy(
  const sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * input,
  sensor_cpp_interface__action__Fib_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__FUNCTIONS_H_
