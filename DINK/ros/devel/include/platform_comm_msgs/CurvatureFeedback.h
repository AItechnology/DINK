// Generated by gencpp from file platform_comm_msgs/CurvatureFeedback.msg
// DO NOT EDIT!


#ifndef PLATFORM_COMM_MSGS_MESSAGE_CURVATUREFEEDBACK_H
#define PLATFORM_COMM_MSGS_MESSAGE_CURVATUREFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace platform_comm_msgs
{
template <class ContainerAllocator>
struct CurvatureFeedback_
{
  typedef CurvatureFeedback_<ContainerAllocator> Type;

  CurvatureFeedback_()
    : header()
    , curvature(0.0)  {
    }
  CurvatureFeedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , curvature(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _curvature_type;
  _curvature_type curvature;





  typedef boost::shared_ptr< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct CurvatureFeedback_

typedef ::platform_comm_msgs::CurvatureFeedback_<std::allocator<void> > CurvatureFeedback;

typedef boost::shared_ptr< ::platform_comm_msgs::CurvatureFeedback > CurvatureFeedbackPtr;
typedef boost::shared_ptr< ::platform_comm_msgs::CurvatureFeedback const> CurvatureFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace platform_comm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'platform_comm_msgs': ['/home/dink/DINK/ros/src/msgs/platform_automation_msgs/platform_comm_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c011af0547a17c89a2ebf5e6e57bd57";
  }

  static const char* value(const ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c011af0547a17c8ULL;
  static const uint64_t static_value2 = 0x9a2ebf5e6e57bd57ULL;
};

template<class ContainerAllocator>
struct DataType< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "platform_comm_msgs/CurvatureFeedback";
  }

  static const char* value(const ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Current Curvature Feedback\n\
# Curvature based on steering sensor feedback\n\
\n\
std_msgs/Header header\n\
\n\
float32 curvature           # Measured steering curvature (1/m)\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.curvature);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CurvatureFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::platform_comm_msgs::CurvatureFeedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "curvature: ";
    Printer<float>::stream(s, indent + "  ", v.curvature);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLATFORM_COMM_MSGS_MESSAGE_CURVATUREFEEDBACK_H
