// Generated by gencpp from file dink_for_msgs/ImageObjRanged.msg
// DO NOT EDIT!


#ifndef dink_for_MSGS_MESSAGE_IMAGEOBJRANGED_H
#define dink_for_MSGS_MESSAGE_IMAGEOBJRANGED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <dink_for_msgs/ImageRectRanged.h>

namespace dink_for_msgs
{
template <class ContainerAllocator>
struct ImageObjRanged_
{
  typedef ImageObjRanged_<ContainerAllocator> Type;

  ImageObjRanged_()
    : header()
    , type()
    , obj()  {
    }
  ImageObjRanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(_alloc)
    , obj(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector< ::dink_for_msgs::ImageRectRanged_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dink_for_msgs::ImageRectRanged_<ContainerAllocator> >::other >  _obj_type;
  _obj_type obj;





  typedef boost::shared_ptr< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> const> ConstPtr;

}; // struct ImageObjRanged_

typedef ::dink_for_msgs::ImageObjRanged_<std::allocator<void> > ImageObjRanged;

typedef boost::shared_ptr< ::dink_for_msgs::ImageObjRanged > ImageObjRangedPtr;
typedef boost::shared_ptr< ::dink_for_msgs::ImageObjRanged const> ImageObjRangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "165d0348acd5a3d4df2930a42768b95f";
  }

  static const char* value(const ::dink_for_msgs::ImageObjRanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x165d0348acd5a3d4ULL;
  static const uint64_t static_value2 = 0xdf2930a42768b95fULL;
};

template<class ContainerAllocator>
struct DataType< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dink_for_msgs/ImageObjRanged";
  }

  static const char* value(const ::dink_for_msgs::ImageObjRanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string type\n\
ImageRectRanged[] obj\n\
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
\n\
================================================================================\n\
MSG: dink_for_msgs/ImageRectRanged\n\
ImageRect rect\n\
float32 range\n\
float32 min_height\n\
float32 max_height\n\
\n\
================================================================================\n\
MSG: dink_for_msgs/ImageRect\n\
int32 x\n\
int32 y\n\
int32 height\n\
int32 width\n\
float32 score\n\
";
  }

  static const char* value(const ::dink_for_msgs::ImageObjRanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.obj);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageObjRanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dink_for_msgs::ImageObjRanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dink_for_msgs::ImageObjRanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "obj[]" << std::endl;
    for (size_t i = 0; i < v.obj.size(); ++i)
    {
      s << indent << "  obj[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dink_for_msgs::ImageRectRanged_<ContainerAllocator> >::stream(s, indent + "    ", v.obj[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // dink_for_MSGS_MESSAGE_IMAGEOBJRANGED_H
