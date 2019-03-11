# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from perception_msgs/LaneModels.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import perception_msgs.msg
import std_msgs.msg

class LaneModels(genpy.Message):
  _md5sum = "0c7a9d0cc35a8e5d0d677034bfc4d18b"
  _type = "perception_msgs/LaneModels"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Lane Models Message
# Contains multiple lanes detected by the sensor

std_msgs/Header header

perception_msgs/Lane left_lane
perception_msgs/Lane right_lane

perception_msgs/Lane[] additional_lanes

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

================================================================================
MSG: perception_msgs/Lane
# Lane Definition Message
# Contains information on a single lane marker

uint8 quality                 # Visual quality of lane marker
uint8 LANE_QUALITY_INVALID = 0
uint8 LANE_QUALITY_UNKNOWN = 1
uint8 LANE_QUALITY_NOT_AVAILABLE = 2
uint8 LANE_QUALITY_0 = 3
uint8 LANE_QUALITY_1 = 4
uint8 LANE_QUALITY_2 = 5
uint8 LANE_QUALITY_3 = 6
uint8 LANE_QUALITY_4 = 7
uint8 LANE_QUALITY_5 = 8
uint8 LANE_QUALITY_6 = 9
uint8 LANE_QUALITY_7 = 10
uint8 LANE_QUALITY_8 = 11
uint8 LANE_QUALITY_9 = 12
uint8 LANE_QUALITY_KIND_COUNT = 13

uint8 marker_kind             # Solid, dashed, ...
uint8 LANE_MARKER_INVALID = 0
uint8 LANE_MARKER_UNKNOWN = 1
uint8 LANE_MARKER_NOT_AVAILABLE = 2
uint8 LANE_MARKER_NONE = 3
uint8 LANE_MARKER_SOLID = 4
uint8 LANE_MARKER_DASHED = 5
uint8 LANE_MARKER_VIRTUAL = 6
uint8 LANE_MARKER_DOTS = 7
uint8 LANE_MARKER_ROAD_EDGE = 8
uint8 LANE_MARKER_DOUBLE_LINE = 9
uint8 LANE_MARKER_KIND_COUNT = 10

uint8 curve_model_kind        # Order of equation
uint8 LANE_CURVE_MODEL_INVALID = 0
uint8 LANE_CURVE_MODEL_UNKNOWN = 1
uint8 LANE_CURVE_MODEL_NOT_AVAILABLE = 2
uint8 LANE_CURVE_MODEL_LINEAR = 3
uint8 LANE_CURVE_MODEL_PARABOLIC = 4
uint8 LANE_CURVE_MODEL_3D = 5
uint8 LANE_CURVE_MODEL_KIND_COUNT = 6

float64 marker_offset         # Lateral distance from sensor to marker (m)
float64 heading_angle         # Angle of marker relative to sensor (rad)
float64 curvature             # Curvature of the lane marker at the camera (1/m)
float64 curvature_derivative  # Amount curvature changes as you move away from the camera (1/m^2)

float64 marker_width          # Width of the painted marker (not distance between lane markers) (m)

float64 view_range            # Physical view range of the lane mark (m)

"""
  __slots__ = ['header','left_lane','right_lane','additional_lanes']
  _slot_types = ['std_msgs/Header','perception_msgs/Lane','perception_msgs/Lane','perception_msgs/Lane[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,left_lane,right_lane,additional_lanes

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LaneModels, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.left_lane is None:
        self.left_lane = perception_msgs.msg.Lane()
      if self.right_lane is None:
        self.right_lane = perception_msgs.msg.Lane()
      if self.additional_lanes is None:
        self.additional_lanes = []
    else:
      self.header = std_msgs.msg.Header()
      self.left_lane = perception_msgs.msg.Lane()
      self.right_lane = perception_msgs.msg.Lane()
      self.additional_lanes = []

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
      _x = self
      buff.write(_get_struct_3B6d3B6d().pack(_x.left_lane.quality, _x.left_lane.marker_kind, _x.left_lane.curve_model_kind, _x.left_lane.marker_offset, _x.left_lane.heading_angle, _x.left_lane.curvature, _x.left_lane.curvature_derivative, _x.left_lane.marker_width, _x.left_lane.view_range, _x.right_lane.quality, _x.right_lane.marker_kind, _x.right_lane.curve_model_kind, _x.right_lane.marker_offset, _x.right_lane.heading_angle, _x.right_lane.curvature, _x.right_lane.curvature_derivative, _x.right_lane.marker_width, _x.right_lane.view_range))
      length = len(self.additional_lanes)
      buff.write(_struct_I.pack(length))
      for val1 in self.additional_lanes:
        _x = val1
        buff.write(_get_struct_3B6d().pack(_x.quality, _x.marker_kind, _x.curve_model_kind, _x.marker_offset, _x.heading_angle, _x.curvature, _x.curvature_derivative, _x.marker_width, _x.view_range))
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
      if self.left_lane is None:
        self.left_lane = perception_msgs.msg.Lane()
      if self.right_lane is None:
        self.right_lane = perception_msgs.msg.Lane()
      if self.additional_lanes is None:
        self.additional_lanes = None
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
      _x = self
      start = end
      end += 102
      (_x.left_lane.quality, _x.left_lane.marker_kind, _x.left_lane.curve_model_kind, _x.left_lane.marker_offset, _x.left_lane.heading_angle, _x.left_lane.curvature, _x.left_lane.curvature_derivative, _x.left_lane.marker_width, _x.left_lane.view_range, _x.right_lane.quality, _x.right_lane.marker_kind, _x.right_lane.curve_model_kind, _x.right_lane.marker_offset, _x.right_lane.heading_angle, _x.right_lane.curvature, _x.right_lane.curvature_derivative, _x.right_lane.marker_width, _x.right_lane.view_range,) = _get_struct_3B6d3B6d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.additional_lanes = []
      for i in range(0, length):
        val1 = perception_msgs.msg.Lane()
        _x = val1
        start = end
        end += 51
        (_x.quality, _x.marker_kind, _x.curve_model_kind, _x.marker_offset, _x.heading_angle, _x.curvature, _x.curvature_derivative, _x.marker_width, _x.view_range,) = _get_struct_3B6d().unpack(str[start:end])
        self.additional_lanes.append(val1)
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
      _x = self
      buff.write(_get_struct_3B6d3B6d().pack(_x.left_lane.quality, _x.left_lane.marker_kind, _x.left_lane.curve_model_kind, _x.left_lane.marker_offset, _x.left_lane.heading_angle, _x.left_lane.curvature, _x.left_lane.curvature_derivative, _x.left_lane.marker_width, _x.left_lane.view_range, _x.right_lane.quality, _x.right_lane.marker_kind, _x.right_lane.curve_model_kind, _x.right_lane.marker_offset, _x.right_lane.heading_angle, _x.right_lane.curvature, _x.right_lane.curvature_derivative, _x.right_lane.marker_width, _x.right_lane.view_range))
      length = len(self.additional_lanes)
      buff.write(_struct_I.pack(length))
      for val1 in self.additional_lanes:
        _x = val1
        buff.write(_get_struct_3B6d().pack(_x.quality, _x.marker_kind, _x.curve_model_kind, _x.marker_offset, _x.heading_angle, _x.curvature, _x.curvature_derivative, _x.marker_width, _x.view_range))
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
      if self.left_lane is None:
        self.left_lane = perception_msgs.msg.Lane()
      if self.right_lane is None:
        self.right_lane = perception_msgs.msg.Lane()
      if self.additional_lanes is None:
        self.additional_lanes = None
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
      _x = self
      start = end
      end += 102
      (_x.left_lane.quality, _x.left_lane.marker_kind, _x.left_lane.curve_model_kind, _x.left_lane.marker_offset, _x.left_lane.heading_angle, _x.left_lane.curvature, _x.left_lane.curvature_derivative, _x.left_lane.marker_width, _x.left_lane.view_range, _x.right_lane.quality, _x.right_lane.marker_kind, _x.right_lane.curve_model_kind, _x.right_lane.marker_offset, _x.right_lane.heading_angle, _x.right_lane.curvature, _x.right_lane.curvature_derivative, _x.right_lane.marker_width, _x.right_lane.view_range,) = _get_struct_3B6d3B6d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.additional_lanes = []
      for i in range(0, length):
        val1 = perception_msgs.msg.Lane()
        _x = val1
        start = end
        end += 51
        (_x.quality, _x.marker_kind, _x.curve_model_kind, _x.marker_offset, _x.heading_angle, _x.curvature, _x.curvature_derivative, _x.marker_width, _x.view_range,) = _get_struct_3B6d().unpack(str[start:end])
        self.additional_lanes.append(val1)
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
_struct_3B6d3B6d = None
def _get_struct_3B6d3B6d():
    global _struct_3B6d3B6d
    if _struct_3B6d3B6d is None:
        _struct_3B6d3B6d = struct.Struct("<3B6d3B6d")
    return _struct_3B6d3B6d
_struct_3B6d = None
def _get_struct_3B6d():
    global _struct_3B6d
    if _struct_3B6d is None:
        _struct_3B6d = struct.Struct("<3B6d")
    return _struct_3B6d
