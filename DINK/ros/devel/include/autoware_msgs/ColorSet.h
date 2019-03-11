// Generated by gencpp from file dink_for_msgs/ColorSet.msg
// DO NOT EDIT!


#ifndef dink_for_MSGS_MESSAGE_COLORSET_H
#define dink_for_MSGS_MESSAGE_COLORSET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dink_for_msgs/ValueSet.h>
#include <dink_for_msgs/ValueSet.h>
#include <dink_for_msgs/ValueSet.h>

namespace dink_for_msgs
{
template <class ContainerAllocator>
struct ColorSet_
{
  typedef ColorSet_<ContainerAllocator> Type;

  ColorSet_()
    : Hue()
    , Sat()
    , Val()  {
    }
  ColorSet_(const ContainerAllocator& _alloc)
    : Hue(_alloc)
    , Sat(_alloc)
    , Val(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dink_for_msgs::ValueSet_<ContainerAllocator>  _Hue_type;
  _Hue_type Hue;

   typedef  ::dink_for_msgs::ValueSet_<ContainerAllocator>  _Sat_type;
  _Sat_type Sat;

   typedef  ::dink_for_msgs::ValueSet_<ContainerAllocator>  _Val_type;
  _Val_type Val;





  typedef boost::shared_ptr< ::dink_for_msgs::ColorSet_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dink_for_msgs::ColorSet_<ContainerAllocator> const> ConstPtr;

}; // struct ColorSet_

typedef ::dink_for_msgs::ColorSet_<std::allocator<void> > ColorSet;

typedef boost::shared_ptr< ::dink_for_msgs::ColorSet > ColorSetPtr;
typedef boost::shared_ptr< ::dink_for_msgs::ColorSet const> ColorSetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dink_for_msgs::ColorSet_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dink_for_msgs::ColorSet_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dink_for_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'dink_for_msgs': ['/home/dink/DINK/ros/src/msgs/dink_for_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_msgs::ColorSet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::ColorSet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::ColorSet_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c934ba71e28648240ca7f87de508588d";
  }

  static const char* value(const ::dink_for_msgs::ColorSet_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc934ba71e2864824ULL;
  static const uint64_t static_value2 = 0x0ca7f87de508588dULL;
};

template<class ContainerAllocator>
struct DataType< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dink_for_msgs/ColorSet";
  }

  static const char* value(const ::dink_for_msgs::ColorSet_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ValueSet Hue\n\
ValueSet Sat\n\
ValueSet Val\n\
\n\
================================================================================\n\
MSG: dink_for_msgs/ValueSet\n\
int32 center\n\
int32 range\n\
";
  }

  static const char* value(const ::dink_for_msgs::ColorSet_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Hue);
      stream.next(m.Sat);
      stream.next(m.Val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ColorSet_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dink_for_msgs::ColorSet_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dink_for_msgs::ColorSet_<ContainerAllocator>& v)
  {
    s << indent << "Hue: ";
    s << std::endl;
    Printer< ::dink_for_msgs::ValueSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Hue);
    s << indent << "Sat: ";
    s << std::endl;
    Printer< ::dink_for_msgs::ValueSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Sat);
    s << indent << "Val: ";
    s << std::endl;
    Printer< ::dink_for_msgs::ValueSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // dink_for_MSGS_MESSAGE_COLORSET_H
