; Auto-generated. Do not edit!


(cl:in-package perception_msgs-msg)


;//! \htmlinclude CipvTrack.msg.html

(cl:defclass <CipvTrack> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (is_valid
    :reader is_valid
    :initarg :is_valid
    :type cl:boolean
    :initform cl:nil)
   (track
    :reader track
    :initarg :track
    :type radar_msgs-msg:RadarTrack
    :initform (cl:make-instance 'radar_msgs-msg:RadarTrack)))
)

(cl:defclass CipvTrack (<CipvTrack>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CipvTrack>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CipvTrack)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name perception_msgs-msg:<CipvTrack> is deprecated: use perception_msgs-msg:CipvTrack instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <CipvTrack>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader perception_msgs-msg:header-val is deprecated.  Use perception_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'is_valid-val :lambda-list '(m))
(cl:defmethod is_valid-val ((m <CipvTrack>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader perception_msgs-msg:is_valid-val is deprecated.  Use perception_msgs-msg:is_valid instead.")
  (is_valid m))

(cl:ensure-generic-function 'track-val :lambda-list '(m))
(cl:defmethod track-val ((m <CipvTrack>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader perception_msgs-msg:track-val is deprecated.  Use perception_msgs-msg:track instead.")
  (track m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CipvTrack>) ostream)
  "Serializes a message object of type '<CipvTrack>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_valid) 1 0)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'track) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CipvTrack>) istream)
  "Deserializes a message object of type '<CipvTrack>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'is_valid) (cl:not (cl:zerop (cl:read-byte istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'track) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CipvTrack>)))
  "Returns string type for a message object of type '<CipvTrack>"
  "perception_msgs/CipvTrack")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CipvTrack)))
  "Returns string type for a message object of type 'CipvTrack"
  "perception_msgs/CipvTrack")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CipvTrack>)))
  "Returns md5sum for a message object of type '<CipvTrack>"
  "db9a76b43a89517bb97bfea8c670557e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CipvTrack)))
  "Returns md5sum for a message object of type 'CipvTrack"
  "db9a76b43a89517bb97bfea8c670557e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CipvTrack>)))
  "Returns full string definition for message of type '<CipvTrack>"
  (cl:format cl:nil "# Closest In-Path Vehicle Radar Track~%~%std_msgs/Header header~%~%bool is_valid                   # Whether or not the track is a valid CIPV~%radar_msgs/RadarTrack track     # The CIPV track~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: radar_msgs/RadarTrack~%# All variables below are relative to the radar's frame of reference.~%# This message is not meant to be used alone but as part of a stamped or array message.~%~%uint16 track_id                             # The ID of this track generated by the radar. If~%                                            # the radar does not generate IDs, this is intended as~%                                            # a sequential identifier for each track in a scan.~%~%geometry_msgs/Polygon track_shape           # The shape and position of the detection. This polygon~%                                            # encompasses a 2D plane which approximates the size and~%                                            # shape of the detection based on the distance from the~%                                            # radar, the detection angle, the width of all detections~%                                            # grouped into this track, and the height of the radar's~%                                            # vertical field of view at the detection distance.~%~%geometry_msgs/Vector3 linear_velocity       # Only the x and y components are valid.~%geometry_msgs/Vector3 linear_acceleration   # Only the x component is valid.~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CipvTrack)))
  "Returns full string definition for message of type 'CipvTrack"
  (cl:format cl:nil "# Closest In-Path Vehicle Radar Track~%~%std_msgs/Header header~%~%bool is_valid                   # Whether or not the track is a valid CIPV~%radar_msgs/RadarTrack track     # The CIPV track~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: radar_msgs/RadarTrack~%# All variables below are relative to the radar's frame of reference.~%# This message is not meant to be used alone but as part of a stamped or array message.~%~%uint16 track_id                             # The ID of this track generated by the radar. If~%                                            # the radar does not generate IDs, this is intended as~%                                            # a sequential identifier for each track in a scan.~%~%geometry_msgs/Polygon track_shape           # The shape and position of the detection. This polygon~%                                            # encompasses a 2D plane which approximates the size and~%                                            # shape of the detection based on the distance from the~%                                            # radar, the detection angle, the width of all detections~%                                            # grouped into this track, and the height of the radar's~%                                            # vertical field of view at the detection distance.~%~%geometry_msgs/Vector3 linear_velocity       # Only the x and y components are valid.~%geometry_msgs/Vector3 linear_acceleration   # Only the x component is valid.~%~%================================================================================~%MSG: geometry_msgs/Polygon~%#A specification of a polygon where the first and last points are assumed to be connected~%Point32[] points~%~%================================================================================~%MSG: geometry_msgs/Point32~%# This contains the position of a point in free space(with 32 bits of precision).~%# It is recommeded to use Point wherever possible instead of Point32.  ~%# ~%# This recommendation is to promote interoperability.  ~%#~%# This message is designed to take up less space when sending~%# lots of points at once, as in the case of a PointCloud.  ~%~%float32 x~%float32 y~%float32 z~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CipvTrack>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'track))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CipvTrack>))
  "Converts a ROS message object to a list"
  (cl:list 'CipvTrack
    (cl:cons ':header (header msg))
    (cl:cons ':is_valid (is_valid msg))
    (cl:cons ':track (track msg))
))
