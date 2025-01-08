// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_cpp_interface:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_cpp_interface/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_cpp_interface
{

namespace msg
{

namespace builder
{

class Init_SensorData_val
{
public:
  explicit Init_SensorData_val(::sensor_cpp_interface::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::sensor_cpp_interface::msg::SensorData val(::sensor_cpp_interface::msg::SensorData::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::msg::SensorData msg_;
};

class Init_SensorData_name
{
public:
  Init_SensorData_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_val name(::sensor_cpp_interface::msg::SensorData::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SensorData_val(msg_);
  }

private:
  ::sensor_cpp_interface::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::msg::SensorData>()
{
  return sensor_cpp_interface::msg::builder::Init_SensorData_name();
}

}  // namespace sensor_cpp_interface

#endif  // SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
