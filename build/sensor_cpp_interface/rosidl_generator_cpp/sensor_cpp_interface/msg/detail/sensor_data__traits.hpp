// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_cpp_interface:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_cpp_interface/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_cpp_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sensor_cpp_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_cpp_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_cpp_interface::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_cpp_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_cpp_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_cpp_interface::msg::SensorData & msg)
{
  return sensor_cpp_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_cpp_interface::msg::SensorData>()
{
  return "sensor_cpp_interface::msg::SensorData";
}

template<>
inline const char * name<sensor_cpp_interface::msg::SensorData>()
{
  return "sensor_cpp_interface/msg/SensorData";
}

template<>
struct has_fixed_size<sensor_cpp_interface::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_cpp_interface::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_cpp_interface::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_CPP_INTERFACE__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
