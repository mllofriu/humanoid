"""autogenerated by genpy from nao_msgs/FadeRGB.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import std_msgs.msg

class FadeRGB(genpy.Message):
  _md5sum = "0df8c8fbe7f1de5f2168d6117ffced08"
  _type = "nao_msgs/FadeRGB"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#Message to fade leds
string led_name
std_msgs/ColorRGBA color
duration fade_duration

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

"""
  __slots__ = ['led_name','color','fade_duration']
  _slot_types = ['string','std_msgs/ColorRGBA','duration']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       led_name,color,fade_duration

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FadeRGB, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.led_name is None:
        self.led_name = ''
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      if self.fade_duration is None:
        self.fade_duration = genpy.Duration()
    else:
      self.led_name = ''
      self.color = std_msgs.msg.ColorRGBA()
      self.fade_duration = genpy.Duration()

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
      _x = self.led_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4f2i.pack(_x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.fade_duration.secs, _x.fade_duration.nsecs))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      if self.fade_duration is None:
        self.fade_duration = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.led_name = str[start:end].decode('utf-8')
      else:
        self.led_name = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.fade_duration.secs, _x.fade_duration.nsecs,) = _struct_4f2i.unpack(str[start:end])
      self.fade_duration.canon()
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
      _x = self.led_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4f2i.pack(_x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.fade_duration.secs, _x.fade_duration.nsecs))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.color is None:
        self.color = std_msgs.msg.ColorRGBA()
      if self.fade_duration is None:
        self.fade_duration = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.led_name = str[start:end].decode('utf-8')
      else:
        self.led_name = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.color.r, _x.color.g, _x.color.b, _x.color.a, _x.fade_duration.secs, _x.fade_duration.nsecs,) = _struct_4f2i.unpack(str[start:end])
      self.fade_duration.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4f2i = struct.Struct("<4f2i")
