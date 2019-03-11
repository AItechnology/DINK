// Generated by gencpp from file dink_for_config_msgs/ConfigWaypointFollower.msg
// DO NOT EDIT!


#ifndef dink_for_CONFIG_MSGS_MESSAGE_CONFIGWAYPOINTFOLLOWER_H
#define dink_for_CONFIG_MSGS_MESSAGE_CONFIGWAYPOINTFOLLOWER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dink_for_config_msgs
{
template <class ContainerAllocator>
struct ConfigWaypointFollower_
{
  typedef ConfigWaypointFollower_<ContainerAllocator> Type;

  ConfigWaypointFollower_()
    : header()
    , param_flag(0)
    , velocity(0.0)
    , lookahead_distance(0.0)
    , lookahead_ratio(0.0)
    , minimum_lookahead_distance(0.0)
    , displacement_threshold(0.0)
    , relative_angle_threshold(0.0)  {
    }
  ConfigWaypointFollower_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , param_flag(0)
    , velocity(0.0)
    , lookahead_distance(0.0)
    , lookahead_ratio(0.0)
    , minimum_lookahead_distance(0.0)
    , displacement_threshold(0.0)
    , relative_angle_threshold(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _param_flag_type;
  _param_flag_type param_flag;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _lookahead_distance_type;
  _lookahead_distance_type lookahead_distance;

   typedef float _lookahead_ratio_type;
  _lookahead_ratio_type lookahead_ratio;

   typedef float _minimum_lookahead_distance_type;
  _minimum_lookahead_distance_type minimum_lookahead_distance;

   typedef float _displacement_threshold_type;
  _displacement_threshold_type displacement_threshold;

   typedef float _relative_angle_threshold_type;
  _relative_angle_threshold_type relative_angle_threshold;





  typedef boost::shared_ptr< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigWaypointFollower_

typedef ::dink_for_config_msgs::ConfigWaypointFollower_<std::allocator<void> > ConfigWaypointFollower;

typedef boost::shared_ptr< ::dink_for_config_msgs::ConfigWaypointFollower > ConfigWaypointFollowerPtr;
typedef boost::shared_ptr< ::dink_for_config_msgs::ConfigWaypointFollower const> ConfigWaypointFollowerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dink_for_config_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dink_for_config_msgs': ['/home/dink/DINK/ros/src/msgs/dink_for_config_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a96d66ec56e0a5b1d46eff2062a223b3";
  }

  static const char* value(const ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa96d66ec56e0a5b1ULL;
  static const uint64_t static_value2 = 0xd46eff2062a223b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dink_for_config_msgs/ConfigWaypointFollower";
  }

  static const char* value(const ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 param_flag\n\
float32 velocity\n\
float32 lookahead_distance\n\
float32 lookahead_ratio\n\
float32 minimum_lookahead_distance\n\
float32 displacement_threshold\n\
float32 relative_angle_threshold\n\
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

  static const char* value(const ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.param_flag);
      stream.next(m.velocity);
      stream.next(m.lookahead_distance);
      stream.next(m.lookahead_ratio);
      stream.next(m.minimum_lookahead_distance);
      stream.next(m.displacement_threshold);
      stream.next(m.relative_angle_threshold);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigWaypointFollower_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dink_for_config_msgs::ConfigWaypointFollower_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "param_flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.param_flag);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "lookahead_distance: ";
    Printer<float>::stream(s, indent + "  ", v.lookahead_distance);
    s << indent << "lookahead_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.lookahead_ratio);
    s << indent << "minimum_lookahead_distance: ";
    Printer<float>::stream(s, indent + "  ", v.minimum_lookahead_distance);
    s << indent << "displacement_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.displacement_threshold);
    s << indent << "relative_angle_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.relative_angle_threshold);
  }
};

} // namespace message_operations
} // namespace ros

#endif // dink_for_CONFIG_MSGS_MESSAGE_CONFIGWAYPOINTFOLLOWER_H
