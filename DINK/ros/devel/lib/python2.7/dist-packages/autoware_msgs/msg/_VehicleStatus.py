# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dink_for_msgs/VehicleStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class VehicleStatus(genpy.Message):
  _md5sum = "77768c58b46a9120bd1fae64c52b3a77"
  _type = "dink_for_msgs/VehicleStatus"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
string tm

# Powertrain
int32 drivemode
int32 steeringmode
int32 MODE_MANUAL=0
int32 MODE_AUTO=1

int32 gearshift

float64 speed
int32 drivepedal
int32 brakepedal

float64 angle

# Body
int32 lamp
int32 LAMP_LEFT=1
int32 LAMP_RIGHT=2
int32 LAMP_HAZARD=3

int32 light

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  # Pseudo-constants
  MODE_MANUAL = 0
  MODE_AUTO = 1
  LAMP_LEFT = 1
  LAMP_RIGHT = 2
  LAMP_HAZARD = 3

  __slots__ = ['header','tm','drivemode','steeringmode','gearshift','speed','drivepedal','brakepedal','angle','lamp','light']
  _slot_types = ['std_msgs/Header','string','int32','int32','int32','float64','int32','int32','float64','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,tm,drivemode,steeringmode,gearshift,speed,drivepedal,brakepedal,angle,lamp,light

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VehicleStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.tm is None:
        self.tm = ''
      if self.drivemode is None:
        self.drivemode = 0
      if self.steeringmode is None:
        self.steeringmode = 0
      if self.gearshift is None:
        self.gearshift = 0
      if self.speed is None:
        self.speed = 0.
      if self.drivepedal is None:
        self.drivepedal = 0
      if self.brakepedal is None:
        self.brakepedal = 0
      if self.angle is None:
        self.angle = 0.
      if self.lamp is None:
        self.lamp = 0
      if self.light is None:
        self.light = 0
    else:
      self.header = std_msgs.msg.Header()
      self.tm = ''
      self.drivemode = 0
      self.steeringmode = 0
      self.gearshift = 0
      self.speed = 0.
      self.drivepedal = 0
      self.brakepedal = 0
      self.angle = 0.
      self.lamp = 0
      self.light = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.tm
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3id2id2i().pack(_x.drivemode, _x.steeringmode, _x.gearshift, _x.speed, _x.drivepedal, _x.brakepedal, _x.angle, _x.lamp, _x.light))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tm = str[start:end].decode('utf-8')
      else:
        self.tm = str[start:end]
      _x = self
      start = end
      end += 44
      (_x.drivemode, _x.steeringmode, _x.gearshift, _x.speed, _x.drivepedal, _x.brakepedal, _x.angle, _x.lamp, _x.light,) = _get_struct_3id2id2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.tm
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3id2id2i().pack(_x.drivemode, _x.steeringmode, _x.gearshift, _x.speed, _x.drivepedal, _x.brakepedal, _x.angle, _x.lamp, _x.light))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tm = str[start:end].decode('utf-8')
      else:
        self.tm = str[start:end]
      _x = self
      start = end
      end += 44
      (_x.drivemode, _x.steeringmode, _x.gearshift, _x.speed, _x.drivepedal, _x.brakepedal, _x.angle, _x.lamp, _x.light,) = _get_struct_3id2id2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3id2id2i = None
def _get_struct_3id2id2i():
    global _struct_3id2id2i
    if _struct_3id2id2i is None:
        _struct_3id2id2i = struct.Struct("<3id2id2i")
    return _struct_3id2id2i
