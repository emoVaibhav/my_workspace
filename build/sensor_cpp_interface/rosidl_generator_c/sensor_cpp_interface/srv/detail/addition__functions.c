// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_cpp_interface:srv/Addition.idl
// generated code does not contain a copyright notice
#include "sensor_cpp_interface/srv/detail/addition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
sensor_cpp_interface__srv__Addition_Request__init(sensor_cpp_interface__srv__Addition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
sensor_cpp_interface__srv__Addition_Request__fini(sensor_cpp_interface__srv__Addition_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
sensor_cpp_interface__srv__Addition_Request__are_equal(const sensor_cpp_interface__srv__Addition_Request * lhs, const sensor_cpp_interface__srv__Addition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
sensor_cpp_interface__srv__Addition_Request__copy(
  const sensor_cpp_interface__srv__Addition_Request * input,
  sensor_cpp_interface__srv__Addition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

sensor_cpp_interface__srv__Addition_Request *
sensor_cpp_interface__srv__Addition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_cpp_interface__srv__Addition_Request * msg = (sensor_cpp_interface__srv__Addition_Request *)allocator.allocate(sizeof(sensor_cpp_interface__srv__Addition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_cpp_interface__srv__Addition_Request));
  bool success = sensor_cpp_interface__srv__Addition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_cpp_interface__srv__Addition_Request__destroy(sensor_cpp_interface__srv__Addition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_cpp_interface__srv__Addition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_cpp_interface__srv__Addition_Request__Sequence__init(sensor_cpp_interface__srv__Addition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_cpp_interface__srv__Addition_Request * data = NULL;

  if (size) {
    data = (sensor_cpp_interface__srv__Addition_Request *)allocator.zero_allocate(size, sizeof(sensor_cpp_interface__srv__Addition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_cpp_interface__srv__Addition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_cpp_interface__srv__Addition_Request__fini(&data[i - 1]);
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
sensor_cpp_interface__srv__Addition_Request__Sequence__fini(sensor_cpp_interface__srv__Addition_Request__Sequence * array)
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
      sensor_cpp_interface__srv__Addition_Request__fini(&array->data[i]);
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

sensor_cpp_interface__srv__Addition_Request__Sequence *
sensor_cpp_interface__srv__Addition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_cpp_interface__srv__Addition_Request__Sequence * array = (sensor_cpp_interface__srv__Addition_Request__Sequence *)allocator.allocate(sizeof(sensor_cpp_interface__srv__Addition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_cpp_interface__srv__Addition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_cpp_interface__srv__Addition_Request__Sequence__destroy(sensor_cpp_interface__srv__Addition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_cpp_interface__srv__Addition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_cpp_interface__srv__Addition_Request__Sequence__are_equal(const sensor_cpp_interface__srv__Addition_Request__Sequence * lhs, const sensor_cpp_interface__srv__Addition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_cpp_interface__srv__Addition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_cpp_interface__srv__Addition_Request__Sequence__copy(
  const sensor_cpp_interface__srv__Addition_Request__Sequence * input,
  sensor_cpp_interface__srv__Addition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_cpp_interface__srv__Addition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_cpp_interface__srv__Addition_Request * data =
      (sensor_cpp_interface__srv__Addition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_cpp_interface__srv__Addition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_cpp_interface__srv__Addition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_cpp_interface__srv__Addition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sensor_cpp_interface__srv__Addition_Response__init(sensor_cpp_interface__srv__Addition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
sensor_cpp_interface__srv__Addition_Response__fini(sensor_cpp_interface__srv__Addition_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
sensor_cpp_interface__srv__Addition_Response__are_equal(const sensor_cpp_interface__srv__Addition_Response * lhs, const sensor_cpp_interface__srv__Addition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
sensor_cpp_interface__srv__Addition_Response__copy(
  const sensor_cpp_interface__srv__Addition_Response * input,
  sensor_cpp_interface__srv__Addition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

sensor_cpp_interface__srv__Addition_Response *
sensor_cpp_interface__srv__Addition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_cpp_interface__srv__Addition_Response * msg = (sensor_cpp_interface__srv__Addition_Response *)allocator.allocate(sizeof(sensor_cpp_interface__srv__Addition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_cpp_interface__srv__Addition_Response));
  bool success = sensor_cpp_interface__srv__Addition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_cpp_interface__srv__Addition_Response__destroy(sensor_cpp_interface__srv__Addition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_cpp_interface__srv__Addition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_cpp_interface__srv__Addition_Response__Sequence__init(sensor_cpp_interface__srv__Addition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_cpp_interface__srv__Addition_Response * data = NULL;

  if (size) {
    data = (sensor_cpp_interface__srv__Addition_Response *)allocator.zero_allocate(size, sizeof(sensor_cpp_interface__srv__Addition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_cpp_interface__srv__Addition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_cpp_interface__srv__Addition_Response__fini(&data[i - 1]);
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
sensor_cpp_interface__srv__Addition_Response__Sequence__fini(sensor_cpp_interface__srv__Addition_Response__Sequence * array)
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
      sensor_cpp_interface__srv__Addition_Response__fini(&array->data[i]);
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

sensor_cpp_interface__srv__Addition_Response__Sequence *
sensor_cpp_interface__srv__Addition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_cpp_interface__srv__Addition_Response__Sequence * array = (sensor_cpp_interface__srv__Addition_Response__Sequence *)allocator.allocate(sizeof(sensor_cpp_interface__srv__Addition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_cpp_interface__srv__Addition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_cpp_interface__srv__Addition_Response__Sequence__destroy(sensor_cpp_interface__srv__Addition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_cpp_interface__srv__Addition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_cpp_interface__srv__Addition_Response__Sequence__are_equal(const sensor_cpp_interface__srv__Addition_Response__Sequence * lhs, const sensor_cpp_interface__srv__Addition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_cpp_interface__srv__Addition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_cpp_interface__srv__Addition_Response__Sequence__copy(
  const sensor_cpp_interface__srv__Addition_Response__Sequence * input,
  sensor_cpp_interface__srv__Addition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_cpp_interface__srv__Addition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_cpp_interface__srv__Addition_Response * data =
      (sensor_cpp_interface__srv__Addition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_cpp_interface__srv__Addition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_cpp_interface__srv__Addition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_cpp_interface__srv__Addition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
