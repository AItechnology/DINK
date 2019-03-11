// Generated by gencpp from file dink_for_msgs/IndicatorCmd.msg
// DO NOT EDIT!


#ifndef dink_for_MSGS_MESSAGE_INDICATORCMD_H
#define dink_for_MSGS_MESSAGE_INDICATORCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dink_for_msgs
{
template <class ContainerAllocator>
struct IndicatorCmd_
{
  typedef IndicatorCmd_<ContainerAllocator> Type;

  IndicatorCmd_()
    : header()
    , l(0)
    , r(0)  {
    }
  IndicatorCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , l(0)
    , r(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _l_type;
  _l_type l;

   typedef int32_t _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> const> ConstPtr;

}; // struct IndicatorCmd_

typedef ::dink_for_msgs::IndicatorCmd_<std::allocator<void> > IndicatorCmd;

typedef boost::shared_ptr< ::dink_for_msgs::IndicatorCmd > IndicatorCmdPtr;
typedef boost::shared_ptr< ::dink_for_msgs::IndicatorCmd const> IndicatorCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dink_for_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'dink_for_msgs': ['/home/dink/DINK/ros/src/msgs/dink_for_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f01795e0c1fa842f366906ad189e0f0a";
  }

  static const char* value(const ::dink_for_msgs::IndicatorCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf01795e0c1fa842fULL;
  static const uint64_t static_value2 = 0x366906ad189e0f0aULL;
};

template<class ContainerAllocator>
struct DataType< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dink_for_msgs/IndicatorCmd";
  }

  static const char* value(const ::dink_for_msgs::IndicatorCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 l\n\
int32 r\n\
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

  static const char* value(const ::dink_for_msgs::IndicatorCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.l);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IndicatorCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dink_for_msgs::IndicatorCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dink_for_msgs::IndicatorCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "l: ";
    Printer<int32_t>::stream(s, indent + "  ", v.l);
    s << indent << "r: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // dink_for_MSGS_MESSAGE_INDICATORCMD_H
