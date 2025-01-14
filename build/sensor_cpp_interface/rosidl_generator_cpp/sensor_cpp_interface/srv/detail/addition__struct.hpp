// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_cpp_interface:srv/Addition.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__STRUCT_HPP_
#define SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_cpp_interface__srv__Addition_Request __attribute__((deprecated))
#else
# define DEPRECATED__sensor_cpp_interface__srv__Addition_Request __declspec(deprecated)
#endif

namespace sensor_cpp_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Addition_Request_
{
  using Type = Addition_Request_<ContainerAllocator>;

  explicit Addition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit Addition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_cpp_interface__srv__Addition_Request
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_cpp_interface__srv__Addition_Request
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Addition_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Addition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Addition_Request_

// alias to use template instance with default allocator
using Addition_Request =
  sensor_cpp_interface::srv::Addition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_cpp_interface


#ifndef _WIN32
# define DEPRECATED__sensor_cpp_interface__srv__Addition_Response __attribute__((deprecated))
#else
# define DEPRECATED__sensor_cpp_interface__srv__Addition_Response __declspec(deprecated)
#endif

namespace sensor_cpp_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Addition_Response_
{
  using Type = Addition_Response_<ContainerAllocator>;

  explicit Addition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit Addition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_cpp_interface__srv__Addition_Response
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_cpp_interface__srv__Addition_Response
    std::shared_ptr<sensor_cpp_interface::srv::Addition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Addition_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Addition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Addition_Response_

// alias to use template instance with default allocator
using Addition_Response =
  sensor_cpp_interface::srv::Addition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_cpp_interface

namespace sensor_cpp_interface
{

namespace srv
{

struct Addition
{
  using Request = sensor_cpp_interface::srv::Addition_Request;
  using Response = sensor_cpp_interface::srv::Addition_Response;
};

}  // namespace srv

}  // namespace sensor_cpp_interface

#endif  // SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__STRUCT_HPP_
