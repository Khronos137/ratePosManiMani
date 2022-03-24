// Generated by gencpp from file robotis_controller_msgs/SetModuleRequest.msg
// DO NOT EDIT!


#ifndef ROBOTIS_CONTROLLER_MSGS_MESSAGE_SETMODULEREQUEST_H
#define ROBOTIS_CONTROLLER_MSGS_MESSAGE_SETMODULEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotis_controller_msgs
{
template <class ContainerAllocator>
struct SetModuleRequest_
{
  typedef SetModuleRequest_<ContainerAllocator> Type;

  SetModuleRequest_()
    : module_name()  {
    }
  SetModuleRequest_(const ContainerAllocator& _alloc)
    : module_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _module_name_type;
  _module_name_type module_name;





  typedef boost::shared_ptr< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetModuleRequest_

typedef ::robotis_controller_msgs::SetModuleRequest_<std::allocator<void> > SetModuleRequest;

typedef boost::shared_ptr< ::robotis_controller_msgs::SetModuleRequest > SetModuleRequestPtr;
typedef boost::shared_ptr< ::robotis_controller_msgs::SetModuleRequest const> SetModuleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator1> & lhs, const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.module_name == rhs.module_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator1> & lhs, const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotis_controller_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de9d5cb4606cf9ecb083691bbb6f5b15";
  }

  static const char* value(const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde9d5cb4606cf9ecULL;
  static const uint64_t static_value2 = 0xb083691bbb6f5b15ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotis_controller_msgs/SetModuleRequest";
  }

  static const char* value(const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string module_name\n"
;
  }

  static const char* value(const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.module_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetModuleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotis_controller_msgs::SetModuleRequest_<ContainerAllocator>& v)
  {
    s << indent << "module_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.module_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIS_CONTROLLER_MSGS_MESSAGE_SETMODULEREQUEST_H
