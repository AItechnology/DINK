; Auto-generated. Do not edit!


(cl:in-package module_comm_msgs-msg)


;//! \htmlinclude Direction.msg.html

(cl:defclass <Direction> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (direction
    :reader direction
    :initarg :direction
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Direction (<Direction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Direction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Direction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name module_comm_msgs-msg:<Direction> is deprecated: use module_comm_msgs-msg:Direction instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Direction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader module_comm_msgs-msg:header-val is deprecated.  Use module_comm_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <Direction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader module_comm_msgs-msg:direction-val is deprecated.  Use module_comm_msgs-msg:direction instead.")
  (direction m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Direction>)))
    "Constants for message type '<Direction>"
  '((:BACKWARD . -1)
    (:ZERO . 0)
    (:FORWARD . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Direction)))
    "Constants for message type 'Direction"
  '((:BACKWARD . -1)
    (:ZERO . 0)
    (:FORWARD . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Direction>) ostream)
  "Serializes a message object of type '<Direction>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'direction)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Direction>) istream)
  "Deserializes a message object of type '<Direction>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'direction) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Direction>)))
  "Returns string type for a message object of type '<Direction>"
  "module_comm_msgs/Direction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Direction)))
  "Returns string type for a message object of type 'Direction"
  "module_comm_msgs/Direction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Direction>)))
  "Returns md5sum for a message object of type '<Direction>"
  "be51359feea72effac0609673308da52")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Direction)))
  "Returns md5sum for a message object of type 'Direction"
  "be51359feea72effac0609673308da52")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Direction>)))
  "Returns full string definition for message of type '<Direction>"
  (cl:format cl:nil "# Simple vehicle direction~%Header header~%~%int8 BACKWARD=-1~%int8 ZERO=0~%int8 FORWARD=1~%~%int8 direction~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Direction)))
  "Returns full string definition for message of type 'Direction"
  (cl:format cl:nil "# Simple vehicle direction~%Header header~%~%int8 BACKWARD=-1~%int8 ZERO=0~%int8 FORWARD=1~%~%int8 direction~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Direction>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Direction>))
  "Converts a ROS message object to a list"
  (cl:list 'Direction
    (cl:cons ':header (header msg))
    (cl:cons ':direction (direction msg))
))
