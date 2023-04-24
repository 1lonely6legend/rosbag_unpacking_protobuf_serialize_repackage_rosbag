# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: header.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import error_code_pb2 as error__code__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='header.proto',
  package='apollo.common',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x0cheader.proto\x12\rapollo.common\x1a\x10\x65rror_code.proto\"\xe2\x01\n\x06Header\x12\x15\n\rtimestamp_sec\x18\x01 \x01(\x01\x12\x13\n\x0bmodule_name\x18\x02 \x01(\t\x12\x14\n\x0csequence_num\x18\x03 \x01(\r\x12\x17\n\x0flidar_timestamp\x18\x04 \x01(\x04\x12\x18\n\x10\x63\x61mera_timestamp\x18\x05 \x01(\x04\x12\x17\n\x0fradar_timestamp\x18\x06 \x01(\x04\x12\x0f\n\x07version\x18\x07 \x01(\r\x12\'\n\x06status\x18\x08 \x01(\x0b\x32\x17.apollo.common.StatusPb\x12\x10\n\x08\x66rame_id\x18\t \x01(\tb\x06proto3')
  ,
  dependencies=[error__code__pb2.DESCRIPTOR,])




_HEADER = _descriptor.Descriptor(
  name='Header',
  full_name='apollo.common.Header',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='timestamp_sec', full_name='apollo.common.Header.timestamp_sec', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='module_name', full_name='apollo.common.Header.module_name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequence_num', full_name='apollo.common.Header.sequence_num', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='lidar_timestamp', full_name='apollo.common.Header.lidar_timestamp', index=3,
      number=4, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='camera_timestamp', full_name='apollo.common.Header.camera_timestamp', index=4,
      number=5, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='radar_timestamp', full_name='apollo.common.Header.radar_timestamp', index=5,
      number=6, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='version', full_name='apollo.common.Header.version', index=6,
      number=7, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status', full_name='apollo.common.Header.status', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='frame_id', full_name='apollo.common.Header.frame_id', index=8,
      number=9, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=50,
  serialized_end=276,
)

_HEADER.fields_by_name['status'].message_type = error__code__pb2._STATUSPB
DESCRIPTOR.message_types_by_name['Header'] = _HEADER
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Header = _reflection.GeneratedProtocolMessageType('Header', (_message.Message,), dict(
  DESCRIPTOR = _HEADER,
  __module__ = 'header_pb2'
  # @@protoc_insertion_point(class_scope:apollo.common.Header)
  ))
_sym_db.RegisterMessage(Header)


# @@protoc_insertion_point(module_scope)
