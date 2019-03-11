; Auto-generated. Do not edit!


(cl:in-package vector_map_server-srv)


;//! \htmlinclude GetRoadSign-request.msg.html

(cl:defclass <GetRoadSign-request> (roslisp-msg-protocol:ros-message)
  ((pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:PoseStamped
    :initform (cl:make-instance 'geometry_msgs-msg:PoseStamped))
   (waypoints
    :reader waypoints
    :initarg :waypoints
    :type dink_for_msgs-msg:Lane
    :initform (cl:make-instance 'dink_for_msgs-msg:Lane)))
)

(cl:defclass GetRoadSign-request (<GetRoadSign-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetRoadSign-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetRoadSign-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name vector_map_server-srv:<GetRoadSign-request> is deprecated: use vector_map_server-srv:GetRoadSign-request instead.")))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <GetRoadSign-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vector_map_server-srv:pose-val is deprecated.  Use vector_map_server-srv:pose instead.")
  (pose m))

(cl:ensure-generic-function 'waypoints-val :lambda-list '(m))
(cl:defmethod waypoints-val ((m <GetRoadSign-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vector_map_server-srv:waypoints-val is deprecated.  Use vector_map_server-srv:waypoints instead.")
  (waypoints m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetRoadSign-request>) ostream)
  "Serializes a message object of type '<GetRoadSign-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'waypoints) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetRoadSign-request>) istream)
  "Deserializes a message object of type '<GetRoadSign-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'waypoints) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetRoadSign-request>)))
  "Returns string type for a service object of type '<GetRoadSign-request>"
  "vector_map_server/GetRoadSignRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetRoadSign-request)))
  "Returns string type for a service object of type 'GetRoadSign-request"
  "vector_map_server/GetRoadSignRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetRoadSign-request>)))
  "Returns md5sum for a message object of type '<GetRoadSign-request>"
  "5ce91e827936b2d56bf755db6f1853d0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetRoadSign-request)))
  "Returns md5sum for a message object of type 'GetRoadSign-request"
  "5ce91e827936b2d56bf755db6f1853d0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetRoadSign-request>)))
  "Returns full string definition for message of type '<GetRoadSign-request>"
  (cl:format cl:nil "geometry_msgs/PoseStamped pose~%dink_for_msgs/Lane waypoints~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: dink_for_msgs/Lane~%Header header~%int32 increment~%int32 lane_id~%Waypoint[] waypoints~%~%uint32 lane_index~%float32 cost~%float32 closest_object_distance~%float32 closest_object_velocity~%bool is_blocked~%~%================================================================================~%MSG: dink_for_msgs/Waypoint~%# global id~%int32 gid ~%# local id~%int32 lid~%geometry_msgs/PoseStamped pose~%geometry_msgs/TwistStamped twist~%DTLane dtlane~%int32 change_flag~%WaypointState wpstate~%~%uint32 lane_id~%uint32 left_lane_id~%uint32 right_lane_id~%uint32 stop_line_id~%float32 cost~%float32 time_cost~%~%# Lane Direction~%# FORWARD				= 0~%# FORWARD_LEFT	 		= 1~%# FORWARD_RIGHT			= 2~%# BACKWARD				= 3 ~%# BACKWARD_LEFT			= 4~%# BACKWARD_RIGHT		= 5~%# STANDSTILL	 		= 6~%uint32 direction~%================================================================================~%MSG: geometry_msgs/TwistStamped~%# A twist with reference coordinate frame and timestamp~%Header header~%Twist twist~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: dink_for_msgs/DTLane~%float64 dist~%float64 dir~%float64 apara~%float64 r~%float64 slope~%float64 cant~%float64 lw~%float64 rw~%~%================================================================================~%MSG: dink_for_msgs/WaypointState~%int32 aid~%uint8 NULLSTATE=0~%uint8 lanechange_state~%~%uint8 steering_state~%uint8 STR_LEFT=1~%uint8 STR_RIGHT=2~%uint8 STR_STRAIGHT=3~%~%uint8 accel_state~%uint8 stopline_state~%  uint8 TYPE_NULL=0~%  uint8 TYPE_STOPLINE=1~%  uint8 TYPE_STOP=2~%# 1 is stopline, 2 is stop which 2 can only be released manually.~%uint64 event_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetRoadSign-request)))
  "Returns full string definition for message of type 'GetRoadSign-request"
  (cl:format cl:nil "geometry_msgs/PoseStamped pose~%dink_for_msgs/Lane waypoints~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: dink_for_msgs/Lane~%Header header~%int32 increment~%int32 lane_id~%Waypoint[] waypoints~%~%uint32 lane_index~%float32 cost~%float32 closest_object_distance~%float32 closest_object_velocity~%bool is_blocked~%~%================================================================================~%MSG: dink_for_msgs/Waypoint~%# global id~%int32 gid ~%# local id~%int32 lid~%geometry_msgs/PoseStamped pose~%geometry_msgs/TwistStamped twist~%DTLane dtlane~%int32 change_flag~%WaypointState wpstate~%~%uint32 lane_id~%uint32 left_lane_id~%uint32 right_lane_id~%uint32 stop_line_id~%float32 cost~%float32 time_cost~%~%# Lane Direction~%# FORWARD				= 0~%# FORWARD_LEFT	 		= 1~%# FORWARD_RIGHT			= 2~%# BACKWARD				= 3 ~%# BACKWARD_LEFT			= 4~%# BACKWARD_RIGHT		= 5~%# STANDSTILL	 		= 6~%uint32 direction~%================================================================================~%MSG: geometry_msgs/TwistStamped~%# A twist with reference coordinate frame and timestamp~%Header header~%Twist twist~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: dink_for_msgs/DTLane~%float64 dist~%float64 dir~%float64 apara~%float64 r~%float64 slope~%float64 cant~%float64 lw~%float64 rw~%~%================================================================================~%MSG: dink_for_msgs/WaypointState~%int32 aid~%uint8 NULLSTATE=0~%uint8 lanechange_state~%~%uint8 steering_state~%uint8 STR_LEFT=1~%uint8 STR_RIGHT=2~%uint8 STR_STRAIGHT=3~%~%uint8 accel_state~%uint8 stopline_state~%  uint8 TYPE_NULL=0~%  uint8 TYPE_STOPLINE=1~%  uint8 TYPE_STOP=2~%# 1 is stopline, 2 is stop which 2 can only be released manually.~%uint64 event_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetRoadSign-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'waypoints))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetRoadSign-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetRoadSign-request
    (cl:cons ':pose (pose msg))
    (cl:cons ':waypoints (waypoints msg))
))
;//! \htmlinclude GetRoadSign-response.msg.html

(cl:defclass <GetRoadSign-response> (roslisp-msg-protocol:ros-message)
  ((objects
    :reader objects
    :initarg :objects
    :type vector_map_msgs-msg:RoadSignArray
    :initform (cl:make-instance 'vector_map_msgs-msg:RoadSignArray)))
)

(cl:defclass GetRoadSign-response (<GetRoadSign-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetRoadSign-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetRoadSign-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name vector_map_server-srv:<GetRoadSign-response> is deprecated: use vector_map_server-srv:GetRoadSign-response instead.")))

(cl:ensure-generic-function 'objects-val :lambda-list '(m))
(cl:defmethod objects-val ((m <GetRoadSign-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vector_map_server-srv:objects-val is deprecated.  Use vector_map_server-srv:objects instead.")
  (objects m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetRoadSign-response>) ostream)
  "Serializes a message object of type '<GetRoadSign-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'objects) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetRoadSign-response>) istream)
  "Deserializes a message object of type '<GetRoadSign-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'objects) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetRoadSign-response>)))
  "Returns string type for a service object of type '<GetRoadSign-response>"
  "vector_map_server/GetRoadSignResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetRoadSign-response)))
  "Returns string type for a service object of type 'GetRoadSign-response"
  "vector_map_server/GetRoadSignResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetRoadSign-response>)))
  "Returns md5sum for a message object of type '<GetRoadSign-response>"
  "5ce91e827936b2d56bf755db6f1853d0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetRoadSign-response)))
  "Returns md5sum for a message object of type 'GetRoadSign-response"
  "5ce91e827936b2d56bf755db6f1853d0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetRoadSign-response>)))
  "Returns full string definition for message of type '<GetRoadSign-response>"
  (cl:format cl:nil "vector_map_msgs/RoadSignArray objects~%~%~%================================================================================~%MSG: vector_map_msgs/RoadSignArray~%Header header~%RoadSign[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: vector_map_msgs/RoadSign~%# Ver 1.00~%int32 id~%int32 vid~%int32 plid~%int32 type # differ from specification~%int32 linkid~%~%## Optional specification~%int32 TYPE_NULL = 0~%int32 TYPE_STOP = 1~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetRoadSign-response)))
  "Returns full string definition for message of type 'GetRoadSign-response"
  (cl:format cl:nil "vector_map_msgs/RoadSignArray objects~%~%~%================================================================================~%MSG: vector_map_msgs/RoadSignArray~%Header header~%RoadSign[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: vector_map_msgs/RoadSign~%# Ver 1.00~%int32 id~%int32 vid~%int32 plid~%int32 type # differ from specification~%int32 linkid~%~%## Optional specification~%int32 TYPE_NULL = 0~%int32 TYPE_STOP = 1~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetRoadSign-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'objects))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetRoadSign-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetRoadSign-response
    (cl:cons ':objects (objects msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetRoadSign)))
  'GetRoadSign-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetRoadSign)))
  'GetRoadSign-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetRoadSign)))
  "Returns string type for a service object of type '<GetRoadSign>"
  "vector_map_server/GetRoadSign")