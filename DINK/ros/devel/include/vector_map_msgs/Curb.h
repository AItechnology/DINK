// Generated by gencpp from file vector_map_msgs/Curb.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_CURB_H
#define VECTOR_MAP_MSGS_MESSAGE_CURB_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vector_map_msgs
{
template <class ContainerAllocator>
struct Curb_
{
  typedef Curb_<ContainerAllocator> Type;

  Curb_()
    : id(0)
    , lid(0)
    , height(0.0)
    , width(0.0)
    , dir(0)
    , linkid(0)  {
    }
  Curb_(const ContainerAllocator& _alloc)
    : id(0)
    , lid(0)
    , height(0.0)
    , width(0.0)
    , dir(0)
    , linkid(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _lid_type;
  _lid_type lid;

   typedef double _height_type;
  _height_type height;

   typedef double _width_type;
  _width_type width;

   typedef int32_t _dir_type;
  _dir_type dir;

   typedef int32_t _linkid_type;
  _linkid_type linkid;



  enum {
    RIGHT = 0u,
    LEFT = 1u,
  };


  typedef boost::shared_ptr< ::vector_map_msgs::Curb_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::Curb_<ContainerAllocator> const> ConstPtr;

}; // struct Curb_

typedef ::vector_map_msgs::Curb_<std::allocator<void> > Curb;

typedef boost::shared_ptr< ::vector_map_msgs::Curb > CurbPtr;
typedef boost::shared_ptr< ::vector_map_msgs::Curb const> CurbConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::Curb_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::Curb_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'vector_map_msgs': ['/home/dink/DINK/ros/src/data/packages/vector_map_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::Curb_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::Curb_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::Curb_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::Curb_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::Curb_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::Curb_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::Curb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d06e56ec0e640d50ee97b6e7c75f16f";
  }

  static const char* value(const ::vector_map_msgs::Curb_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d06e56ec0e640d5ULL;
  static const uint64_t static_value2 = 0x0ee97b6e7c75f16fULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::Curb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/Curb";
  }

  static const char* value(const ::vector_map_msgs::Curb_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::Curb_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# dir\n\
uint8 RIGHT=0\n\
uint8 LEFT=1\n\
\n\
# Ver 1.00\n\
int32 id\n\
int32 lid\n\
float64 height\n\
float64 width\n\
int32 dir\n\
int32 linkid\n\
";
  }

  static const char* value(const ::vector_map_msgs::Curb_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::Curb_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.lid);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.dir);
      stream.next(m.linkid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Curb_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::Curb_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::Curb_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "lid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lid);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "dir: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dir);
    s << indent << "linkid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.linkid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_CURB_H
