// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_cpp_interface:action/Fib.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__BUILDER_HPP_
#define SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_cpp_interface/action/detail/fib__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_Goal_order
{
public:
  Init_Fib_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_cpp_interface::action::Fib_Goal order(::sensor_cpp_interface::action::Fib_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_Goal>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_Goal_order();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_Result_sequence
{
public:
  Init_Fib_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_cpp_interface::action::Fib_Result sequence(::sensor_cpp_interface::action::Fib_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_Result>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_Result_sequence();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_Feedback_partial_sequence
{
public:
  Init_Fib_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_cpp_interface::action::Fib_Feedback partial_sequence(::sensor_cpp_interface::action::Fib_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_Feedback>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_Feedback_partial_sequence();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_SendGoal_Request_goal
{
public:
  explicit Init_Fib_SendGoal_Request_goal(::sensor_cpp_interface::action::Fib_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sensor_cpp_interface::action::Fib_SendGoal_Request goal(::sensor_cpp_interface::action::Fib_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_SendGoal_Request msg_;
};

class Init_Fib_SendGoal_Request_goal_id
{
public:
  Init_Fib_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fib_SendGoal_Request_goal goal_id(::sensor_cpp_interface::action::Fib_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fib_SendGoal_Request_goal(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_SendGoal_Request>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_SendGoal_Request_goal_id();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_SendGoal_Response_stamp
{
public:
  explicit Init_Fib_SendGoal_Response_stamp(::sensor_cpp_interface::action::Fib_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sensor_cpp_interface::action::Fib_SendGoal_Response stamp(::sensor_cpp_interface::action::Fib_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_SendGoal_Response msg_;
};

class Init_Fib_SendGoal_Response_accepted
{
public:
  Init_Fib_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fib_SendGoal_Response_stamp accepted(::sensor_cpp_interface::action::Fib_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fib_SendGoal_Response_stamp(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_SendGoal_Response>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_SendGoal_Response_accepted();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_GetResult_Request_goal_id
{
public:
  Init_Fib_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_cpp_interface::action::Fib_GetResult_Request goal_id(::sensor_cpp_interface::action::Fib_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_GetResult_Request>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_GetResult_Request_goal_id();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_GetResult_Response_result
{
public:
  explicit Init_Fib_GetResult_Response_result(::sensor_cpp_interface::action::Fib_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sensor_cpp_interface::action::Fib_GetResult_Response result(::sensor_cpp_interface::action::Fib_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_GetResult_Response msg_;
};

class Init_Fib_GetResult_Response_status
{
public:
  Init_Fib_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fib_GetResult_Response_result status(::sensor_cpp_interface::action::Fib_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fib_GetResult_Response_result(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_GetResult_Response>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_GetResult_Response_status();
}

}  // namespace sensor_cpp_interface


namespace sensor_cpp_interface
{

namespace action
{

namespace builder
{

class Init_Fib_FeedbackMessage_feedback
{
public:
  explicit Init_Fib_FeedbackMessage_feedback(::sensor_cpp_interface::action::Fib_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sensor_cpp_interface::action::Fib_FeedbackMessage feedback(::sensor_cpp_interface::action::Fib_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_FeedbackMessage msg_;
};

class Init_Fib_FeedbackMessage_goal_id
{
public:
  Init_Fib_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fib_FeedbackMessage_feedback goal_id(::sensor_cpp_interface::action::Fib_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fib_FeedbackMessage_feedback(msg_);
  }

private:
  ::sensor_cpp_interface::action::Fib_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_cpp_interface::action::Fib_FeedbackMessage>()
{
  return sensor_cpp_interface::action::builder::Init_Fib_FeedbackMessage_goal_id();
}

}  // namespace sensor_cpp_interface

#endif  // SENSOR_CPP_INTERFACE__ACTION__DETAIL__FIB__BUILDER_HPP_
