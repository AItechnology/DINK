# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from module_comm_msgs/PointOfInterestStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PointOfInterestStatus(genpy.Message):
  _md5sum = "3747ebda6c320e19738cf7561a6a689b"
  _type = "module_comm_msgs/PointOfInterestStatus"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Point of Interest Status Message
# Contains the distance, heading, a localized position of a point of interest

uint64 guid        # Unique Id for this point

float32 distance   # Great circle distance (meters)
float32 heading    # Heading (radians)
float32 x_position # Distance in front of the vehicle (meters)
float32 y_position # Distance to the left of the vehicle (meters)

string params      # List of parameter:value pairs

"""
  __slots__ = ['guid','distance','heading','x_position','y_position','params']
  _slot_types = ['uint64','float32','float32','float32','float32','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       guid,distance,heading,x_position,y_position,params

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PointOfInterestStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.guid is None:
        self.guid = 0
      if self.distance is None:
        self.distance = 0.
      if self.heading is None:
        self.heading = 0.
      if self.x_position is None:
        self.x_position = 0.
      if self.y_position is None:
        self.y_position = 0.
      if self.params is None:
        self.params = ''
    else:
      self.guid = 0
      self.distance = 0.
      self.heading = 0.
      self.x_position = 0.
      self.y_position = 0.
      self.params = ''

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
      buff.write(_get_struct_Q4f().pack(_x.guid, _x.distance, _x.heading, _x.x_position, _x.y_position))
      _x = self.params
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.guid, _x.distance, _x.heading, _x.x_position, _x.y_position,) = _get_struct_Q4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.params = str[start:end].decode('utf-8')
      else:
        self.params = str[start:end]
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
      buff.write(_get_struct_Q4f().pack(_x.guid, _x.distance, _x.heading, _x.x_position, _x.y_position))
      _x = self.params
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.guid, _x.distance, _x.heading, _x.x_position, _x.y_position,) = _get_struct_Q4f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.params = str[start:end].decode('utf-8')
      else:
        self.params = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Q4f = None
def _get_struct_Q4f():
    global _struct_Q4f
    if _struct_Q4f is None:
        _struct_Q4f = struct.Struct("<Q4f")
    return _struct_Q4f
