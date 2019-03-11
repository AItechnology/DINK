// Generated by gencpp from file platform_comm_msgs/UserInputMedia.msg
// DO NOT EDIT!


#ifndef PLATFORM_COMM_MSGS_MESSAGE_USERINPUTMEDIA_H
#define PLATFORM_COMM_MSGS_MESSAGE_USERINPUTMEDIA_H


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
struct UserInputMedia_
{
  typedef UserInputMedia_<ContainerAllocator> Type;

  UserInputMedia_()
    : header()
    , btn_vol_up(false)
    , btn_vol_down(false)
    , btn_mute(false)
    , btn_next(false)
    , btn_prev(false)
    , btn_next_hang_up(false)
    , btn_prev_answer(false)
    , btn_hang_up(false)
    , btn_answer(false)
    , btn_play(false)
    , btn_pause(false)
    , btn_play_pause(false)
    , btn_mode(false)  {
    }
  UserInputMedia_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , btn_vol_up(false)
    , btn_vol_down(false)
    , btn_mute(false)
    , btn_next(false)
    , btn_prev(false)
    , btn_next_hang_up(false)
    , btn_prev_answer(false)
    , btn_hang_up(false)
    , btn_answer(false)
    , btn_play(false)
    , btn_pause(false)
    , btn_play_pause(false)
    , btn_mode(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _btn_vol_up_type;
  _btn_vol_up_type btn_vol_up;

   typedef uint8_t _btn_vol_down_type;
  _btn_vol_down_type btn_vol_down;

   typedef uint8_t _btn_mute_type;
  _btn_mute_type btn_mute;

   typedef uint8_t _btn_next_type;
  _btn_next_type btn_next;

   typedef uint8_t _btn_prev_type;
  _btn_prev_type btn_prev;

   typedef uint8_t _btn_next_hang_up_type;
  _btn_next_hang_up_type btn_next_hang_up;

   typedef uint8_t _btn_prev_answer_type;
  _btn_prev_answer_type btn_prev_answer;

   typedef uint8_t _btn_hang_up_type;
  _btn_hang_up_type btn_hang_up;

   typedef uint8_t _btn_answer_type;
  _btn_answer_type btn_answer;

   typedef uint8_t _btn_play_type;
  _btn_play_type btn_play;

   typedef uint8_t _btn_pause_type;
  _btn_pause_type btn_pause;

   typedef uint8_t _btn_play_pause_type;
  _btn_play_pause_type btn_play_pause;

   typedef uint8_t _btn_mode_type;
  _btn_mode_type btn_mode;





  typedef boost::shared_ptr< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> const> ConstPtr;

}; // struct UserInputMedia_

typedef ::platform_comm_msgs::UserInputMedia_<std::allocator<void> > UserInputMedia;

typedef boost::shared_ptr< ::platform_comm_msgs::UserInputMedia > UserInputMediaPtr;
typedef boost::shared_ptr< ::platform_comm_msgs::UserInputMedia const> UserInputMediaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc8e2078d79a82d9d486b8f55a126c7f";
  }

  static const char* value(const ::platform_comm_msgs::UserInputMedia_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc8e2078d79a82d9ULL;
  static const uint64_t static_value2 = 0xd486b8f55a126c7fULL;
};

template<class ContainerAllocator>
struct DataType< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
{
  static const char* value()
  {
    return "platform_comm_msgs/UserInputMedia";
  }

  static const char* value(const ::platform_comm_msgs::UserInputMedia_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# User input (e.g. button presses) related to media controls\n\
Header header\n\
\n\
bool btn_vol_up\n\
bool btn_vol_down\n\
bool btn_mute\n\
bool btn_next\n\
bool btn_prev\n\
bool btn_next_hang_up\n\
bool btn_prev_answer\n\
bool btn_hang_up\n\
bool btn_answer\n\
bool btn_play\n\
bool btn_pause\n\
bool btn_play_pause\n\
bool btn_mode\n\
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

  static const char* value(const ::platform_comm_msgs::UserInputMedia_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.btn_vol_up);
      stream.next(m.btn_vol_down);
      stream.next(m.btn_mute);
      stream.next(m.btn_next);
      stream.next(m.btn_prev);
      stream.next(m.btn_next_hang_up);
      stream.next(m.btn_prev_answer);
      stream.next(m.btn_hang_up);
      stream.next(m.btn_answer);
      stream.next(m.btn_play);
      stream.next(m.btn_pause);
      stream.next(m.btn_play_pause);
      stream.next(m.btn_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UserInputMedia_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::platform_comm_msgs::UserInputMedia_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::platform_comm_msgs::UserInputMedia_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "btn_vol_up: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_vol_up);
    s << indent << "btn_vol_down: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_vol_down);
    s << indent << "btn_mute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_mute);
    s << indent << "btn_next: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_next);
    s << indent << "btn_prev: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_prev);
    s << indent << "btn_next_hang_up: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_next_hang_up);
    s << indent << "btn_prev_answer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_prev_answer);
    s << indent << "btn_hang_up: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_hang_up);
    s << indent << "btn_answer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_answer);
    s << indent << "btn_play: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_play);
    s << indent << "btn_pause: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_pause);
    s << indent << "btn_play_pause: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_play_pause);
    s << indent << "btn_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.btn_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLATFORM_COMM_MSGS_MESSAGE_USERINPUTMEDIA_H
