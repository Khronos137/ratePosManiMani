// Generated by gencpp from file manipulator_h_base_module_msgs/GetKinematicsPose.msg
// DO NOT EDIT!


#ifndef MANIPULATOR_H_BASE_MODULE_MSGS_MESSAGE_GETKINEMATICSPOSE_H
#define MANIPULATOR_H_BASE_MODULE_MSGS_MESSAGE_GETKINEMATICSPOSE_H

#include <ros/service_traits.h>


#include <manipulator_h_base_module_msgs/GetKinematicsPoseRequest.h>
#include <manipulator_h_base_module_msgs/GetKinematicsPoseResponse.h>


namespace manipulator_h_base_module_msgs
{

struct GetKinematicsPose
{

typedef GetKinematicsPoseRequest Request;
typedef GetKinematicsPoseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetKinematicsPose
} // namespace manipulator_h_base_module_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPose > {
  static const char* value()
  {
    return "c2979cd8d11a927f690f4eed0badc3ee";
  }

  static const char* value(const ::manipulator_h_base_module_msgs::GetKinematicsPose&) { return value(); }
};

template<>
struct DataType< ::manipulator_h_base_module_msgs::GetKinematicsPose > {
  static const char* value()
  {
    return "manipulator_h_base_module_msgs/GetKinematicsPose";
  }

  static const char* value(const ::manipulator_h_base_module_msgs::GetKinematicsPose&) { return value(); }
};


// service_traits::MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPoseRequest> should match
// service_traits::MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPose >
template<>
struct MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPoseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPose >::value();
  }
  static const char* value(const ::manipulator_h_base_module_msgs::GetKinematicsPoseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::manipulator_h_base_module_msgs::GetKinematicsPoseRequest> should match
// service_traits::DataType< ::manipulator_h_base_module_msgs::GetKinematicsPose >
template<>
struct DataType< ::manipulator_h_base_module_msgs::GetKinematicsPoseRequest>
{
  static const char* value()
  {
    return DataType< ::manipulator_h_base_module_msgs::GetKinematicsPose >::value();
  }
  static const char* value(const ::manipulator_h_base_module_msgs::GetKinematicsPoseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPoseResponse> should match
// service_traits::MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPose >
template<>
struct MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPoseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::manipulator_h_base_module_msgs::GetKinematicsPose >::value();
  }
  static const char* value(const ::manipulator_h_base_module_msgs::GetKinematicsPoseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::manipulator_h_base_module_msgs::GetKinematicsPoseResponse> should match
// service_traits::DataType< ::manipulator_h_base_module_msgs::GetKinematicsPose >
template<>
struct DataType< ::manipulator_h_base_module_msgs::GetKinematicsPoseResponse>
{
  static const char* value()
  {
    return DataType< ::manipulator_h_base_module_msgs::GetKinematicsPose >::value();
  }
  static const char* value(const ::manipulator_h_base_module_msgs::GetKinematicsPoseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MANIPULATOR_H_BASE_MODULE_MSGS_MESSAGE_GETKINEMATICSPOSE_H
