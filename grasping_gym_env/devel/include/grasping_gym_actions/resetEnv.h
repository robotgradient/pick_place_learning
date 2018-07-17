// Generated by gencpp from file grasping_gym_actions/resetEnv.msg
// DO NOT EDIT!


#ifndef GRASPING_GYM_ACTIONS_MESSAGE_RESETENV_H
#define GRASPING_GYM_ACTIONS_MESSAGE_RESETENV_H

#include <ros/service_traits.h>


#include <grasping_gym_actions/resetEnvRequest.h>
#include <grasping_gym_actions/resetEnvResponse.h>


namespace grasping_gym_actions
{

struct resetEnv
{

typedef resetEnvRequest Request;
typedef resetEnvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct resetEnv
} // namespace grasping_gym_actions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::grasping_gym_actions::resetEnv > {
  static const char* value()
  {
    return "088e9c4476fc19677acf3a00f86ee390";
  }

  static const char* value(const ::grasping_gym_actions::resetEnv&) { return value(); }
};

template<>
struct DataType< ::grasping_gym_actions::resetEnv > {
  static const char* value()
  {
    return "grasping_gym_actions/resetEnv";
  }

  static const char* value(const ::grasping_gym_actions::resetEnv&) { return value(); }
};


// service_traits::MD5Sum< ::grasping_gym_actions::resetEnvRequest> should match 
// service_traits::MD5Sum< ::grasping_gym_actions::resetEnv > 
template<>
struct MD5Sum< ::grasping_gym_actions::resetEnvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::grasping_gym_actions::resetEnv >::value();
  }
  static const char* value(const ::grasping_gym_actions::resetEnvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::grasping_gym_actions::resetEnvRequest> should match 
// service_traits::DataType< ::grasping_gym_actions::resetEnv > 
template<>
struct DataType< ::grasping_gym_actions::resetEnvRequest>
{
  static const char* value()
  {
    return DataType< ::grasping_gym_actions::resetEnv >::value();
  }
  static const char* value(const ::grasping_gym_actions::resetEnvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::grasping_gym_actions::resetEnvResponse> should match 
// service_traits::MD5Sum< ::grasping_gym_actions::resetEnv > 
template<>
struct MD5Sum< ::grasping_gym_actions::resetEnvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::grasping_gym_actions::resetEnv >::value();
  }
  static const char* value(const ::grasping_gym_actions::resetEnvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::grasping_gym_actions::resetEnvResponse> should match 
// service_traits::DataType< ::grasping_gym_actions::resetEnv > 
template<>
struct DataType< ::grasping_gym_actions::resetEnvResponse>
{
  static const char* value()
  {
    return DataType< ::grasping_gym_actions::resetEnv >::value();
  }
  static const char* value(const ::grasping_gym_actions::resetEnvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GRASPING_GYM_ACTIONS_MESSAGE_RESETENV_H
