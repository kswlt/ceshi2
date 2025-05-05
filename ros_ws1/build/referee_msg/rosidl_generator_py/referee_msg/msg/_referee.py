# generated from rosidl_generator_py/resource/_idl.py.em
# with input from referee_msg:msg/Referee.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Referee(type):
    """Metaclass of message 'Referee'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('referee_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'referee_msg.msg.Referee')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__referee
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__referee
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__referee
            cls._TYPE_SUPPORT = module.type_support_msg__msg__referee
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__referee

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Referee(metaclass=Metaclass_Referee):
    """Message class 'Referee'."""

    __slots__ = [
        '_remain_hp',
        '_max_hp',
        '_game_type',
        '_game_progress',
        '_stage_remain_time',
        '_coin_remaining_num',
        '_bullet_remaining_num_17mm',
        '_red_1_hp',
        '_red_2_hp',
        '_red_3_hp',
        '_red_4_hp',
        '_red_5_hp',
        '_red_7_hp',
        '_red_outpost_hp',
        '_red_base_hp',
        '_blue_1_hp',
        '_blue_2_hp',
        '_blue_3_hp',
        '_blue_4_hp',
        '_blue_5_hp',
        '_blue_7_hp',
        '_blue_outpost_hp',
        '_blue_base_hp',
        '_rfid_status',
    ]

    _fields_and_field_types = {
        'remain_hp': 'uint16',
        'max_hp': 'uint16',
        'game_type': 'uint8',
        'game_progress': 'uint8',
        'stage_remain_time': 'uint16',
        'coin_remaining_num': 'uint16',
        'bullet_remaining_num_17mm': 'uint16',
        'red_1_hp': 'uint16',
        'red_2_hp': 'uint16',
        'red_3_hp': 'uint16',
        'red_4_hp': 'uint16',
        'red_5_hp': 'uint16',
        'red_7_hp': 'uint16',
        'red_outpost_hp': 'uint16',
        'red_base_hp': 'uint16',
        'blue_1_hp': 'uint16',
        'blue_2_hp': 'uint16',
        'blue_3_hp': 'uint16',
        'blue_4_hp': 'uint16',
        'blue_5_hp': 'uint16',
        'blue_7_hp': 'uint16',
        'blue_outpost_hp': 'uint16',
        'blue_base_hp': 'uint16',
        'rfid_status': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.remain_hp = kwargs.get('remain_hp', int())
        self.max_hp = kwargs.get('max_hp', int())
        self.game_type = kwargs.get('game_type', int())
        self.game_progress = kwargs.get('game_progress', int())
        self.stage_remain_time = kwargs.get('stage_remain_time', int())
        self.coin_remaining_num = kwargs.get('coin_remaining_num', int())
        self.bullet_remaining_num_17mm = kwargs.get('bullet_remaining_num_17mm', int())
        self.red_1_hp = kwargs.get('red_1_hp', int())
        self.red_2_hp = kwargs.get('red_2_hp', int())
        self.red_3_hp = kwargs.get('red_3_hp', int())
        self.red_4_hp = kwargs.get('red_4_hp', int())
        self.red_5_hp = kwargs.get('red_5_hp', int())
        self.red_7_hp = kwargs.get('red_7_hp', int())
        self.red_outpost_hp = kwargs.get('red_outpost_hp', int())
        self.red_base_hp = kwargs.get('red_base_hp', int())
        self.blue_1_hp = kwargs.get('blue_1_hp', int())
        self.blue_2_hp = kwargs.get('blue_2_hp', int())
        self.blue_3_hp = kwargs.get('blue_3_hp', int())
        self.blue_4_hp = kwargs.get('blue_4_hp', int())
        self.blue_5_hp = kwargs.get('blue_5_hp', int())
        self.blue_7_hp = kwargs.get('blue_7_hp', int())
        self.blue_outpost_hp = kwargs.get('blue_outpost_hp', int())
        self.blue_base_hp = kwargs.get('blue_base_hp', int())
        self.rfid_status = kwargs.get('rfid_status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.remain_hp != other.remain_hp:
            return False
        if self.max_hp != other.max_hp:
            return False
        if self.game_type != other.game_type:
            return False
        if self.game_progress != other.game_progress:
            return False
        if self.stage_remain_time != other.stage_remain_time:
            return False
        if self.coin_remaining_num != other.coin_remaining_num:
            return False
        if self.bullet_remaining_num_17mm != other.bullet_remaining_num_17mm:
            return False
        if self.red_1_hp != other.red_1_hp:
            return False
        if self.red_2_hp != other.red_2_hp:
            return False
        if self.red_3_hp != other.red_3_hp:
            return False
        if self.red_4_hp != other.red_4_hp:
            return False
        if self.red_5_hp != other.red_5_hp:
            return False
        if self.red_7_hp != other.red_7_hp:
            return False
        if self.red_outpost_hp != other.red_outpost_hp:
            return False
        if self.red_base_hp != other.red_base_hp:
            return False
        if self.blue_1_hp != other.blue_1_hp:
            return False
        if self.blue_2_hp != other.blue_2_hp:
            return False
        if self.blue_3_hp != other.blue_3_hp:
            return False
        if self.blue_4_hp != other.blue_4_hp:
            return False
        if self.blue_5_hp != other.blue_5_hp:
            return False
        if self.blue_7_hp != other.blue_7_hp:
            return False
        if self.blue_outpost_hp != other.blue_outpost_hp:
            return False
        if self.blue_base_hp != other.blue_base_hp:
            return False
        if self.rfid_status != other.rfid_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def remain_hp(self):
        """Message field 'remain_hp'."""
        return self._remain_hp

    @remain_hp.setter
    def remain_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remain_hp' field must be an unsigned integer in [0, 65535]"
        self._remain_hp = value

    @builtins.property
    def max_hp(self):
        """Message field 'max_hp'."""
        return self._max_hp

    @max_hp.setter
    def max_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_hp' field must be an unsigned integer in [0, 65535]"
        self._max_hp = value

    @builtins.property
    def game_type(self):
        """Message field 'game_type'."""
        return self._game_type

    @game_type.setter
    def game_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_type' field must be an unsigned integer in [0, 255]"
        self._game_type = value

    @builtins.property
    def game_progress(self):
        """Message field 'game_progress'."""
        return self._game_progress

    @game_progress.setter
    def game_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_progress' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_progress' field must be an unsigned integer in [0, 255]"
        self._game_progress = value

    @builtins.property
    def stage_remain_time(self):
        """Message field 'stage_remain_time'."""
        return self._stage_remain_time

    @stage_remain_time.setter
    def stage_remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stage_remain_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'stage_remain_time' field must be an unsigned integer in [0, 65535]"
        self._stage_remain_time = value

    @builtins.property
    def coin_remaining_num(self):
        """Message field 'coin_remaining_num'."""
        return self._coin_remaining_num

    @coin_remaining_num.setter
    def coin_remaining_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coin_remaining_num' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'coin_remaining_num' field must be an unsigned integer in [0, 65535]"
        self._coin_remaining_num = value

    @builtins.property
    def bullet_remaining_num_17mm(self):
        """Message field 'bullet_remaining_num_17mm'."""
        return self._bullet_remaining_num_17mm

    @bullet_remaining_num_17mm.setter
    def bullet_remaining_num_17mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_remaining_num_17mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bullet_remaining_num_17mm' field must be an unsigned integer in [0, 65535]"
        self._bullet_remaining_num_17mm = value

    @builtins.property
    def red_1_hp(self):
        """Message field 'red_1_hp'."""
        return self._red_1_hp

    @red_1_hp.setter
    def red_1_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_1_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_1_hp' field must be an unsigned integer in [0, 65535]"
        self._red_1_hp = value

    @builtins.property
    def red_2_hp(self):
        """Message field 'red_2_hp'."""
        return self._red_2_hp

    @red_2_hp.setter
    def red_2_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_2_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_2_hp' field must be an unsigned integer in [0, 65535]"
        self._red_2_hp = value

    @builtins.property
    def red_3_hp(self):
        """Message field 'red_3_hp'."""
        return self._red_3_hp

    @red_3_hp.setter
    def red_3_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_3_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_3_hp' field must be an unsigned integer in [0, 65535]"
        self._red_3_hp = value

    @builtins.property
    def red_4_hp(self):
        """Message field 'red_4_hp'."""
        return self._red_4_hp

    @red_4_hp.setter
    def red_4_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_4_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_4_hp' field must be an unsigned integer in [0, 65535]"
        self._red_4_hp = value

    @builtins.property
    def red_5_hp(self):
        """Message field 'red_5_hp'."""
        return self._red_5_hp

    @red_5_hp.setter
    def red_5_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_5_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_5_hp' field must be an unsigned integer in [0, 65535]"
        self._red_5_hp = value

    @builtins.property
    def red_7_hp(self):
        """Message field 'red_7_hp'."""
        return self._red_7_hp

    @red_7_hp.setter
    def red_7_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_7_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_7_hp' field must be an unsigned integer in [0, 65535]"
        self._red_7_hp = value

    @builtins.property
    def red_outpost_hp(self):
        """Message field 'red_outpost_hp'."""
        return self._red_outpost_hp

    @red_outpost_hp.setter
    def red_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._red_outpost_hp = value

    @builtins.property
    def red_base_hp(self):
        """Message field 'red_base_hp'."""
        return self._red_base_hp

    @red_base_hp.setter
    def red_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_base_hp' field must be an unsigned integer in [0, 65535]"
        self._red_base_hp = value

    @builtins.property
    def blue_1_hp(self):
        """Message field 'blue_1_hp'."""
        return self._blue_1_hp

    @blue_1_hp.setter
    def blue_1_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_1_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_1_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_1_hp = value

    @builtins.property
    def blue_2_hp(self):
        """Message field 'blue_2_hp'."""
        return self._blue_2_hp

    @blue_2_hp.setter
    def blue_2_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_2_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_2_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_2_hp = value

    @builtins.property
    def blue_3_hp(self):
        """Message field 'blue_3_hp'."""
        return self._blue_3_hp

    @blue_3_hp.setter
    def blue_3_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_3_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_3_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_3_hp = value

    @builtins.property
    def blue_4_hp(self):
        """Message field 'blue_4_hp'."""
        return self._blue_4_hp

    @blue_4_hp.setter
    def blue_4_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_4_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_4_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_4_hp = value

    @builtins.property
    def blue_5_hp(self):
        """Message field 'blue_5_hp'."""
        return self._blue_5_hp

    @blue_5_hp.setter
    def blue_5_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_5_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_5_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_5_hp = value

    @builtins.property
    def blue_7_hp(self):
        """Message field 'blue_7_hp'."""
        return self._blue_7_hp

    @blue_7_hp.setter
    def blue_7_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_7_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_7_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_7_hp = value

    @builtins.property
    def blue_outpost_hp(self):
        """Message field 'blue_outpost_hp'."""
        return self._blue_outpost_hp

    @blue_outpost_hp.setter
    def blue_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_outpost_hp = value

    @builtins.property
    def blue_base_hp(self):
        """Message field 'blue_base_hp'."""
        return self._blue_base_hp

    @blue_base_hp.setter
    def blue_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_base_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_base_hp = value

    @builtins.property
    def rfid_status(self):
        """Message field 'rfid_status'."""
        return self._rfid_status

    @rfid_status.setter
    def rfid_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rfid_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rfid_status' field must be an unsigned integer in [0, 4294967295]"
        self._rfid_status = value
