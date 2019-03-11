// Generated by gencpp from file tf_server/TF_detectResponse.msg
// DO NOT EDIT!


#ifndef TF_SERVER_MESSAGE_TF_DETECTRESPONSE_H
#define TF_SERVER_MESSAGE_TF_DETECTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf_server
{
template <class ContainerAllocator>
struct TF_detectResponse_
{
  typedef TF_detectResponse_<ContainerAllocator> Type;

  TF_detectResponse_()
    : res(0)  {
    }
  TF_detectResponse_(const ContainerAllocator& _alloc)
    : res(0)  {
  (void)_alloc;
    }



   typedef int8_t _res_type;
  _res_type res;





  typedef boost::shared_ptr< ::tf_server::TF_detectResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf_server::TF_detectResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TF_detectResponse_

typedef ::tf_server::TF_detectResponse_<std::allocator<void> > TF_detectResponse;

typedef boost::shared_ptr< ::tf_server::TF_detectResponse > TF_detectResponsePtr;
typedef boost::shared_ptr< ::tf_server::TF_detectResponse const> TF_detectResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf_server::TF_detectResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf_server::TF_detectResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf_server

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'tf_server': ['/home/dink/DINK/ros/src/tf_server/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf_server::TF_detectResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_server::TF_detectResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_server::TF_detectResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_server::TF_detectResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_server::TF_detectResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_server::TF_detectResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf_server::TF_detectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d19846d0d7a810f348cbbd2911abcef";
  }

  static const char* value(const ::tf_server::TF_detectResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d19846d0d7a810fULL;
  static const uint64_t static_value2 = 0x348cbbd2911abcefULL;
};

template<class ContainerAllocator>
struct DataType< ::tf_server::TF_detectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf_server/TF_detectResponse";
  }

  static const char* value(const ::tf_server::TF_detectResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf_server::TF_detectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 res\n\
";
  }

  static const char* value(const ::tf_server::TF_detectResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf_server::TF_detectResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.res);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TF_detectResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf_server::TF_detectResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf_server::TF_detectResponse_<ContainerAllocator>& v)
  {
    s << indent << "res: ";
    Printer<int8_t>::stream(s, indent + "  ", v.res);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF_SERVER_MESSAGE_TF_DETECTRESPONSE_H
