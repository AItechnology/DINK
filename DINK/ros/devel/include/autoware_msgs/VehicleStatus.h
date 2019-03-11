// Generated by gencpp from file dink_for_msgs/VehicleStatus.msg
// DO NOT EDIT!


#ifndef dink_for_MSGS_MESSAGE_VEHICLESTATUS_H
#define dink_for_MSGS_MESSAGE_VEHICLESTATUS_H


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
struct VehicleStatus_
{
  typedef VehicleStatus_<ContainerAllocator> Type;

  VehicleStatus_()
    : header()
    , tm()
    , drivemode(0)
    , steeringmode(0)
    , gearshift(0)
    , speed(0.0)
    , drivepedal(0)
    , brakepedal(0)
    , angle(0.0)
    , lamp(0)
    , light(0)  {
    }
  VehicleStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tm(_alloc)
    , drivemode(0)
    , steeringmode(0)
    , gearshift(0)
    , speed(0.0)
    , drivepedal(0)
    , brakepedal(0)
    , angle(0.0)
    , lamp(0)
    , light(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tm_type;
  _tm_type tm;

   typedef int32_t _drivemode_type;
  _drivemode_type drivemode;

   typedef int32_t _steeringmode_type;
  _steeringmode_type steeringmode;

   typedef int32_t _gearshift_type;
  _gearshift_type gearshift;

   typedef double _speed_type;
  _speed_type speed;

   typedef int32_t _drivepedal_type;
  _drivepedal_type drivepedal;

   typedef int32_t _brakepedal_type;
  _brakepedal_type brakepedal;

   typedef double _angle_type;
  _angle_type angle;

   typedef int32_t _lamp_type;
  _lamp_type lamp;

   typedef int32_t _light_type;
  _light_type light;



  enum {
    MODE_MANUAL = 0,
    MODE_AUTO = 1,
    LAMP_LEFT = 1,
    LAMP_RIGHT = 2,
    LAMP_HAZARD = 3,
  };


  typedef boost::shared_ptr< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleStatus_

typedef ::dink_for_msgs::VehicleStatus_<std::allocator<void> > VehicleStatus;

typedef boost::shared_ptr< ::dink_for_msgs::VehicleStatus > VehicleStatusPtr;
typedef boost::shared_ptr< ::dink_for_msgs::VehicleStatus const> VehicleStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dink_for_msgs::VehicleStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77768c58b46a9120bd1fae64c52b3a77";
  }

  static const char* value(const ::dink_for_msgs::VehicleStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77768c58b46a9120ULL;
  static const uint64_t static_value2 = 0xbd1fae64c52b3a77ULL;
};

template<class ContainerAllocator>
struct DataType< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dink_for_msgs/VehicleStatus";
  }

  static const char* value(const ::dink_for_msgs::VehicleStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string tm\n\
\n\
# Powertrain\n\
int32 drivemode\n\
int32 steeringmode\n\
int32 MODE_MANUAL=0\n\
int32 MODE_AUTO=1\n\
\n\
int32 gearshift\n\
\n\
float64 speed\n\
int32 drivepedal\n\
int32 brakepedal\n\
\n\
float64 angle\n\
\n\
# Body\n\
int32 lamp\n\
int32 LAMP_LEFT=1\n\
int32 LAMP_RIGHT=2\n\
int32 LAMP_HAZARD=3\n\
\n\
int32 light\n\
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

  static const char* value(const ::dink_for_msgs::VehicleStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tm);
      stream.next(m.drivemode);
      stream.next(m.steeringmode);
      stream.next(m.gearshift);
      stream.next(m.speed);
      stream.next(m.drivepedal);
      stream.next(m.brakepedal);
      stream.next(m.angle);
      stream.next(m.lamp);
      stream.next(m.light);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dink_for_msgs::VehicleStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dink_for_msgs::VehicleStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tm: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tm);
    s << indent << "drivemode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drivemode);
    s << indent << "steeringmode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.steeringmode);
    s << indent << "gearshift: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gearshift);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "drivepedal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drivepedal);
    s << indent << "brakepedal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.brakepedal);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "lamp: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lamp);
    s << indent << "light: ";
    Printer<int32_t>::stream(s, indent + "  ", v.light);
  }
};

} // namespace message_operations
} // namespace ros

#endif // dink_for_MSGS_MESSAGE_VEHICLESTATUS_H
