// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_cpp_interface:srv/Addition.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__TRAITS_HPP_
#define SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_cpp_interface/srv/detail/addition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_cpp_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_cpp_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_cpp_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_cpp_interface::srv::Addition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_cpp_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_cpp_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_cpp_interface::srv::Addition_Request & msg)
{
  return sensor_cpp_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_cpp_interface::srv::Addition_Request>()
{
  return "sensor_cpp_interface::srv::Addition_Request";
}

template<>
inline const char * name<sensor_cpp_interface::srv::Addition_Request>()
{
  return "sensor_cpp_interface/srv/Addition_Request";
}

template<>
struct has_fixed_size<sensor_cpp_interface::srv::Addition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_cpp_interface::srv::Addition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_cpp_interface::srv::Addition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sensor_cpp_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_cpp_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_cpp_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_cpp_interface::srv::Addition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_cpp_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_cpp_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_cpp_interface::srv::Addition_Response & msg)
{
  return sensor_cpp_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_cpp_interface::srv::Addition_Response>()
{
  return "sensor_cpp_interface::srv::Addition_Response";
}

template<>
inline const char * name<sensor_cpp_interface::srv::Addition_Response>()
{
  return "sensor_cpp_interface/srv/Addition_Response";
}

template<>
struct has_fixed_size<sensor_cpp_interface::srv::Addition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_cpp_interface::srv::Addition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_cpp_interface::srv::Addition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_cpp_interface::srv::Addition>()
{
  return "sensor_cpp_interface::srv::Addition";
}

template<>
inline const char * name<sensor_cpp_interface::srv::Addition>()
{
  return "sensor_cpp_interface/srv/Addition";
}

template<>
struct has_fixed_size<sensor_cpp_interface::srv::Addition>
  : std::integral_constant<
    bool,
    has_fixed_size<sensor_cpp_interface::srv::Addition_Request>::value &&
    has_fixed_size<sensor_cpp_interface::srv::Addition_Response>::value
  >
{
};

template<>
struct has_bounded_size<sensor_cpp_interface::srv::Addition>
  : std::integral_constant<
    bool,
    has_bounded_size<sensor_cpp_interface::srv::Addition_Request>::value &&
    has_bounded_size<sensor_cpp_interface::srv::Addition_Response>::value
  >
{
};

template<>
struct is_service<sensor_cpp_interface::srv::Addition>
  : std::true_type
{
};

template<>
struct is_service_request<sensor_cpp_interface::srv::Addition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sensor_cpp_interface::srv::Addition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_CPP_INTERFACE__SRV__DETAIL__ADDITION__TRAITS_HPP_
