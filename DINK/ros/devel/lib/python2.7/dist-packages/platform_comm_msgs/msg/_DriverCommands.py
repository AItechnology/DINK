# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from platform_comm_msgs/DriverCommands.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DriverCommands(genpy.Message):
  _md5sum = "612c1e59d97aa5ea3be1c2ad2b26dbc7"
  _type = "platform_comm_msgs/DriverCommands"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Driver Commands Message
# Contains commands from the driver to the autonomy system

uint8 msg_counter   # Increments each time a command is sent
                    # An acknowledge message should be published with this value

uint16 engage       # Engage auto
uint16 disengage    # Disengage auto
uint16 speed_up     # Increase speed set point
uint16 slow_down    # Decrease speed set point
uint16 further      # Increase distance set point
uint16 closer       # Decrease distance set point
uint16 right_turn   # Right turn signal
uint16 left_turn    # Left turn signal

"""
  __slots__ = ['msg_counter','engage','disengage','speed_up','slow_down','further','closer','right_turn','left_turn']
  _slot_types = ['uint8','uint16','uint16','uint16','uint16','uint16','uint16','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       msg_counter,engage,disengage,speed_up,slow_down,further,closer,right_turn,left_turn

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DriverCommands, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.msg_counter is None:
        self.msg_counter = 0
      if self.engage is None:
        self.engage = 0
      if self.disengage is None:
        self.disengage = 0
      if self.speed_up is None:
        self.speed_up = 0
      if self.slow_down is None:
        self.slow_down = 0
      if self.further is None:
        self.further = 0
      if self.closer is None:
        self.closer = 0
      if self.right_turn is None:
        self.right_turn = 0
      if self.left_turn is None:
        self.left_turn = 0
    else:
      self.msg_counter = 0
      self.engage = 0
      self.disengage = 0
      self.speed_up = 0
      self.slow_down = 0
      self.further = 0
      self.closer = 0
      self.right_turn = 0
      self.left_turn = 0

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
      buff.write(_get_struct_B8H().pack(_x.msg_counter, _x.engage, _x.disengage, _x.speed_up, _x.slow_down, _x.further, _x.closer, _x.right_turn, _x.left_turn))
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
      end += 17
      (_x.msg_counter, _x.engage, _x.disengage, _x.speed_up, _x.slow_down, _x.further, _x.closer, _x.right_turn, _x.left_turn,) = _get_struct_B8H().unpack(str[start:end])
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
      buff.write(_get_struct_B8H().pack(_x.msg_counter, _x.engage, _x.disengage, _x.speed_up, _x.slow_down, _x.further, _x.closer, _x.right_turn, _x.left_turn))
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
      end += 17
      (_x.msg_counter, _x.engage, _x.disengage, _x.speed_up, _x.slow_down, _x.further, _x.closer, _x.right_turn, _x.left_turn,) = _get_struct_B8H().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B8H = None
def _get_struct_B8H():
    global _struct_B8H
    if _struct_B8H is None:
        _struct_B8H = struct.Struct("<B8H")
    return _struct_B8H
