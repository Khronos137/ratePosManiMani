# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from manipulator_h_base_module_msgs/GetKinematicsPoseRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetKinematicsPoseRequest(genpy.Message):
  _md5sum = "967d0b0c0d858ded8a6a69abbce0c981"
  _type = "manipulator_h_base_module_msgs/GetKinematicsPoseRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string    group_name
"""
  __slots__ = ['group_name']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       group_name

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetKinematicsPoseRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.group_name is None:
        self.group_name = ''
    else:
      self.group_name = ''

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
      _x = self.group_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.group_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.group_name = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.group_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.group_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.group_name = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from manipulator_h_base_module_msgs/GetKinematicsPoseResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class GetKinematicsPoseResponse(genpy.Message):
  _md5sum = "9875670870ab7d344c5b4fd121c9797f"
  _type = "manipulator_h_base_module_msgs/GetKinematicsPoseResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Pose group_pose


================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['group_pose']
  _slot_types = ['geometry_msgs/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       group_pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetKinematicsPoseResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.group_pose is None:
        self.group_pose = geometry_msgs.msg.Pose()
    else:
      self.group_pose = geometry_msgs.msg.Pose()

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
      buff.write(_get_struct_7d().pack(_x.group_pose.position.x, _x.group_pose.position.y, _x.group_pose.position.z, _x.group_pose.orientation.x, _x.group_pose.orientation.y, _x.group_pose.orientation.z, _x.group_pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.group_pose is None:
        self.group_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.group_pose.position.x, _x.group_pose.position.y, _x.group_pose.position.z, _x.group_pose.orientation.x, _x.group_pose.orientation.y, _x.group_pose.orientation.z, _x.group_pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_7d().pack(_x.group_pose.position.x, _x.group_pose.position.y, _x.group_pose.position.z, _x.group_pose.orientation.x, _x.group_pose.orientation.y, _x.group_pose.orientation.z, _x.group_pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.group_pose is None:
        self.group_pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.group_pose.position.x, _x.group_pose.position.y, _x.group_pose.position.z, _x.group_pose.orientation.x, _x.group_pose.orientation.y, _x.group_pose.orientation.z, _x.group_pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
class GetKinematicsPose(object):
  _type          = 'manipulator_h_base_module_msgs/GetKinematicsPose'
  _md5sum = 'c2979cd8d11a927f690f4eed0badc3ee'
  _request_class  = GetKinematicsPoseRequest
  _response_class = GetKinematicsPoseResponse
