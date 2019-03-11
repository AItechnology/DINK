// Generated by gencpp from file custom_msgs/GnssSensorSample.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_GNSSSENSORSAMPLE_H
#define CUSTOM_MSGS_MESSAGE_GNSSSENSORSAMPLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float64.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Vector3.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct GnssSensorSample_
{
  typedef GnssSensorSample_<ContainerAllocator> Type;

  GnssSensorSample_()
    : itow()
    , fix()
    , latitude(0.0)
    , longitude(0.0)
    , hEll(0.0)
    , hMsl(0.0)
    , vel()
    , hAcc(0.0)
    , vAcc(0.0)
    , sAcc(0.0)
    , pDop(0.0)
    , hDop(0.0)
    , vDop(0.0)
    , numSat(0.0)
    , heading(0.0)
    , headingAcc(0.0)  {
    }
  GnssSensorSample_(const ContainerAllocator& _alloc)
    : itow(_alloc)
    , fix(_alloc)
    , latitude(0.0)
    , longitude(0.0)
    , hEll(0.0)
    , hMsl(0.0)
    , vel(_alloc)
    , hAcc(0.0)
    , vAcc(0.0)
    , sAcc(0.0)
    , pDop(0.0)
    , hDop(0.0)
    , vDop(0.0)
    , numSat(0.0)
    , heading(0.0)
    , headingAcc(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Float64_<ContainerAllocator>  _itow_type;
  _itow_type itow;

   typedef  ::std_msgs::Float64_<ContainerAllocator>  _fix_type;
  _fix_type fix;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _hEll_type;
  _hEll_type hEll;

   typedef double _hMsl_type;
  _hMsl_type hMsl;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _vel_type;
  _vel_type vel;

   typedef double _hAcc_type;
  _hAcc_type hAcc;

   typedef double _vAcc_type;
  _vAcc_type vAcc;

   typedef double _sAcc_type;
  _sAcc_type sAcc;

   typedef double _pDop_type;
  _pDop_type pDop;

   typedef double _hDop_type;
  _hDop_type hDop;

   typedef double _vDop_type;
  _vDop_type vDop;

   typedef double _numSat_type;
  _numSat_type numSat;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _headingAcc_type;
  _headingAcc_type headingAcc;





  typedef boost::shared_ptr< ::custom_msgs::GnssSensorSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::GnssSensorSample_<ContainerAllocator> const> ConstPtr;

}; // struct GnssSensorSample_

typedef ::custom_msgs::GnssSensorSample_<std::allocator<void> > GnssSensorSample;

typedef boost::shared_ptr< ::custom_msgs::GnssSensorSample > GnssSensorSamplePtr;
typedef boost::shared_ptr< ::custom_msgs::GnssSensorSample const> GnssSensorSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::GnssSensorSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace custom_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'custom_msgs': ['/home/dink/DINK/ros/src/sensing/drivers/imu/packages/xsens/src/custom_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::GnssSensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::GnssSensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::GnssSensorSample_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae4c67b6a1b5c4f7d7a22900ef78225d";
  }

  static const char* value(const ::custom_msgs::GnssSensorSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae4c67b6a1b5c4f7ULL;
  static const uint64_t static_value2 = 0xd7a22900ef78225dULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/GnssSensorSample";
  }

  static const char* value(const ::custom_msgs::GnssSensorSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data a GNSS unit\n\
# Supported for MTi Devices with FW 1.4 and above.\n\
\n\
std_msgs/Float64 itow\n\
std_msgs/Float64 fix\n\
\n\
float64 latitude\n\
float64 longitude\n\
float64 hEll\n\
float64 hMsl\n\
\n\
# ENU velocity\n\
geometry_msgs/Vector3 vel\n\
\n\
float64 hAcc\n\
float64 vAcc\n\
float64 sAcc\n\
\n\
float64 pDop\n\
float64 hDop\n\
float64 vDop\n\
\n\
float64 numSat\n\
float64 heading\n\
float64 headingAcc\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Float64\n\
float64 data\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::custom_msgs::GnssSensorSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.itow);
      stream.next(m.fix);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.hEll);
      stream.next(m.hMsl);
      stream.next(m.vel);
      stream.next(m.hAcc);
      stream.next(m.vAcc);
      stream.next(m.sAcc);
      stream.next(m.pDop);
      stream.next(m.hDop);
      stream.next(m.vDop);
      stream.next(m.numSat);
      stream.next(m.heading);
      stream.next(m.headingAcc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GnssSensorSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::GnssSensorSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::GnssSensorSample_<ContainerAllocator>& v)
  {
    s << indent << "itow: ";
    s << std::endl;
    Printer< ::std_msgs::Float64_<ContainerAllocator> >::stream(s, indent + "  ", v.itow);
    s << indent << "fix: ";
    s << std::endl;
    Printer< ::std_msgs::Float64_<ContainerAllocator> >::stream(s, indent + "  ", v.fix);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "hEll: ";
    Printer<double>::stream(s, indent + "  ", v.hEll);
    s << indent << "hMsl: ";
    Printer<double>::stream(s, indent + "  ", v.hMsl);
    s << indent << "vel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.vel);
    s << indent << "hAcc: ";
    Printer<double>::stream(s, indent + "  ", v.hAcc);
    s << indent << "vAcc: ";
    Printer<double>::stream(s, indent + "  ", v.vAcc);
    s << indent << "sAcc: ";
    Printer<double>::stream(s, indent + "  ", v.sAcc);
    s << indent << "pDop: ";
    Printer<double>::stream(s, indent + "  ", v.pDop);
    s << indent << "hDop: ";
    Printer<double>::stream(s, indent + "  ", v.hDop);
    s << indent << "vDop: ";
    Printer<double>::stream(s, indent + "  ", v.vDop);
    s << indent << "numSat: ";
    Printer<double>::stream(s, indent + "  ", v.numSat);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "headingAcc: ";
    Printer<double>::stream(s, indent + "  ", v.headingAcc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_GNSSSENSORSAMPLE_H
