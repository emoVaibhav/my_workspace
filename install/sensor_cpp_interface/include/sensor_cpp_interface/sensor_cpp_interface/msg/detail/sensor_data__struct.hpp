// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_cpp_interface:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_cpp_interface__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__sensor_cpp_interface__msg__SensorData __declspec(deprecated)
#endif

namespace sensor_cpp_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->val = 0l;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->val = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _val_type =
    int32_t;
  _val_type val;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__val(
    const int32_t & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_cpp_interface::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_cpp_interface::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_cpp_interface::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_cpp_interface::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_cpp_interface__msg__SensorData
    std::shared_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_cpp_interface__msg__SensorData
    std::shared_ptr<sensor_cpp_interface::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  sensor_cpp_interface::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_cpp_interface

#endif  // SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
