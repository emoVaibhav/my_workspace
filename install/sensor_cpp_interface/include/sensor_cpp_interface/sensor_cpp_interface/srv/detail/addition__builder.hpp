// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_cpp_interface:srv/Addition.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__BUILDER_HPP_
#define SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_cpp_interface/srv/detail/addition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_cpp_interface
{

namespace srv
{

namespace builder
{

class Init_Addition_Request_b
{
public:
  explicit Init_Addition_Request_b(::sensor_cpp_interface::srv::Addition_Request & msg)
  : msg_(msg)
  {}
  ::sensor_cpp_interface::srv::Addition_Request b(::sensor_cpp_interface::srv::Addition_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::srv::Addition_Request msg_;
};

class Init_Addition_Request_a
{
public:
  Init_Addition_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Addition_Request_b a(::sensor_cpp_interface::srv::Addition_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Addition_Request_b(msg_);
  }

private:
  ::sensor_cpp_interface::srv::Addition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::srv::Addition_Request>()
{
  return sensor_cpp_interface::srv::builder::Init_Addition_Request_a();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace srv
{

namespace builder
{

class Init_Addition_Response_sum
{
public:
  Init_Addition_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_cpp_interface::srv::Addition_Response sum(::sensor_cpp_interface::srv::Addition_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::srv::Addition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::srv::Addition_Response>()
{
  return sensor_cpp_interface::srv::builder::Init_Addition_Response_sum();
}

}  // namespace sensor_cpp_interface

#endif  // SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__BUILDER_HPP_
