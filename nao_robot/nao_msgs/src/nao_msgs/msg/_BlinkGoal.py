"""autogenerated by genpy from nao_msgs/BlinkGoal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import std_msgs.msg

class BlinkGoal(genpy.Message):
  _md5sum = "5e5d3c2ba9976dc121a0bb6ef7c66d79"
  _type = "nao_msgs/BlinkGoal"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Goal: colours to use for blinking, plus blinking rate mean and sd
# Result: true if robot is still blinking (call was pre-empted by another user)
# Feedback: last blinked colour
std_msgs/ColorRGBA[] colors
std_msgs/ColorRGBA bg_color
duration blink_duration
float32 blink_rate_mean
float32 blink_rate_sd

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

"""
  __slots__ = ['colors','bg_color','blink_duration','blink_rate_mean','blink_rate_sd']
  _slot_types = ['std_msgs/ColorRGBA[]','std_msgs/ColorRGBA','duration','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       colors,bg_color,blink_duration,blink_rate_mean,blink_rate_sd

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BlinkGoal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.colors is None:
        self.colors = []
      if self.bg_color is None:
        self.bg_color = std_msgs.msg.ColorRGBA()
      if self.blink_duration is None:
        self.blink_duration = genpy.Duration()
      if self.blink_rate_mean is None:
        self.blink_rate_mean = 0.
      if self.blink_rate_sd is None:
        self.blink_rate_sd = 0.
    else:
      self.colors = []
      self.bg_color = std_msgs.msg.ColorRGBA()
      self.blink_duration = genpy.Duration()
      self.blink_rate_mean = 0.
      self.blink_rate_sd = 0.

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
      length = len(self.colors)
      buff.write(_struct_I.pack(length))
      for val1 in self.colors:
        _x = val1
        buff.write(_struct_4f.pack(_x.r, _x.g, _x.b, _x.a))
      _x = self
      buff.write(_struct_4f2i2f.pack(_x.bg_color.r, _x.bg_color.g, _x.bg_color.b, _x.bg_color.a, _x.blink_duration.secs, _x.blink_duration.nsecs, _x.blink_rate_mean, _x.blink_rate_sd))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.colors is None:
        self.colors = None
      if self.bg_color is None:
        self.bg_color = std_msgs.msg.ColorRGBA()
      if self.blink_duration is None:
        self.blink_duration = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.colors = []
      for i in range(0, length):
        val1 = std_msgs.msg.ColorRGBA()
        _x = val1
        start = end
        end += 16
        (_x.r, _x.g, _x.b, _x.a,) = _struct_4f.unpack(str[start:end])
        self.colors.append(val1)
      _x = self
      start = end
      end += 32
      (_x.bg_color.r, _x.bg_color.g, _x.bg_color.b, _x.bg_color.a, _x.blink_duration.secs, _x.blink_duration.nsecs, _x.blink_rate_mean, _x.blink_rate_sd,) = _struct_4f2i2f.unpack(str[start:end])
      self.blink_duration.canon()
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
      length = len(self.colors)
      buff.write(_struct_I.pack(length))
      for val1 in self.colors:
        _x = val1
        buff.write(_struct_4f.pack(_x.r, _x.g, _x.b, _x.a))
      _x = self
      buff.write(_struct_4f2i2f.pack(_x.bg_color.r, _x.bg_color.g, _x.bg_color.b, _x.bg_color.a, _x.blink_duration.secs, _x.blink_duration.nsecs, _x.blink_rate_mean, _x.blink_rate_sd))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.colors is None:
        self.colors = None
      if self.bg_color is None:
        self.bg_color = std_msgs.msg.ColorRGBA()
      if self.blink_duration is None:
        self.blink_duration = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.colors = []
      for i in range(0, length):
        val1 = std_msgs.msg.ColorRGBA()
        _x = val1
        start = end
        end += 16
        (_x.r, _x.g, _x.b, _x.a,) = _struct_4f.unpack(str[start:end])
        self.colors.append(val1)
      _x = self
      start = end
      end += 32
      (_x.bg_color.r, _x.bg_color.g, _x.bg_color.b, _x.bg_color.a, _x.blink_duration.secs, _x.blink_duration.nsecs, _x.blink_rate_mean, _x.blink_rate_sd,) = _struct_4f2i2f.unpack(str[start:end])
      self.blink_duration.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4f = struct.Struct("<4f")
_struct_4f2i2f = struct.Struct("<4f2i2f")
