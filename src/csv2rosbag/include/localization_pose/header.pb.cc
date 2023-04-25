// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: header.proto

#include "header.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_error_5fcode_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_error_5fcode_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_StatusPb;
}  // namespace protobuf_error_5fcode_2eproto
namespace apollo {
namespace common {
class HeaderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Header>
      _instance;
} _Header_default_instance_;
}  // namespace common
}  // namespace apollo
namespace protobuf_header_2eproto {
static void InitDefaultsHeader() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::common::_Header_default_instance_;
    new (ptr) ::apollo::common::Header();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::common::Header::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Header =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsHeader}, {
      &protobuf_error_5fcode_2eproto::scc_info_StatusPb.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Header.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, timestamp_sec_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, module_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, sequence_num_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, lidar_timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, camera_timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, radar_timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::Header, frame_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::apollo::common::Header)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::apollo::common::_Header_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "header.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014header.proto\022\rapollo.common\032\020error_cod"
      "e.proto\"\342\001\n\006Header\022\025\n\rtimestamp_sec\030\001 \001("
      "\001\022\023\n\013module_name\030\002 \001(\t\022\024\n\014sequence_num\030\003"
      " \001(\r\022\027\n\017lidar_timestamp\030\004 \001(\004\022\030\n\020camera_"
      "timestamp\030\005 \001(\004\022\027\n\017radar_timestamp\030\006 \001(\004"
      "\022\017\n\007version\030\007 \001(\r\022\'\n\006status\030\010 \001(\0132\027.apol"
      "lo.common.StatusPb\022\020\n\010frame_id\030\t \001(\tb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 284);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "header.proto", &protobuf_RegisterTypes);
  ::protobuf_error_5fcode_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_header_2eproto
namespace apollo {
namespace common {

// ===================================================================

void Header::InitAsDefaultInstance() {
  ::apollo::common::_Header_default_instance_._instance.get_mutable()->status_ = const_cast< ::apollo::common::StatusPb*>(
      ::apollo::common::StatusPb::internal_default_instance());
}
void Header::clear_status() {
  if (GetArenaNoVirtual() == NULL && status_ != NULL) {
    delete status_;
  }
  status_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Header::kTimestampSecFieldNumber;
const int Header::kModuleNameFieldNumber;
const int Header::kSequenceNumFieldNumber;
const int Header::kLidarTimestampFieldNumber;
const int Header::kCameraTimestampFieldNumber;
const int Header::kRadarTimestampFieldNumber;
const int Header::kVersionFieldNumber;
const int Header::kStatusFieldNumber;
const int Header::kFrameIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Header::Header()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_header_2eproto::scc_info_Header.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.Header)
}
Header::Header(const Header& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  module_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.module_name().size() > 0) {
    module_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.module_name_);
  }
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.frame_id().size() > 0) {
    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
  if (from.has_status()) {
    status_ = new ::apollo::common::StatusPb(*from.status_);
  } else {
    status_ = NULL;
  }
  ::memcpy(&timestamp_sec_, &from.timestamp_sec_,
    static_cast<size_t>(reinterpret_cast<char*>(&radar_timestamp_) -
    reinterpret_cast<char*>(&timestamp_sec_)) + sizeof(radar_timestamp_));
  // @@protoc_insertion_point(copy_constructor:apollo.common.Header)
}

void Header::SharedCtor() {
  module_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&radar_timestamp_) -
      reinterpret_cast<char*>(&status_)) + sizeof(radar_timestamp_));
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:apollo.common.Header)
  SharedDtor();
}

void Header::SharedDtor() {
  module_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  frame_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete status_;
}

void Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  ::protobuf_header_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_header_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Header& Header::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_header_2eproto::scc_info_Header.base);
  return *internal_default_instance();
}


void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.Header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  module_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && status_ != NULL) {
    delete status_;
  }
  status_ = NULL;
  ::memset(&timestamp_sec_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&radar_timestamp_) -
      reinterpret_cast<char*>(&timestamp_sec_)) + sizeof(radar_timestamp_));
  _internal_metadata_.Clear();
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.Header)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double timestamp_sec = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_sec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string module_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_module_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->module_name().data(), static_cast<int>(this->module_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "apollo.common.Header.module_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sequence_num = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sequence_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 lidar_timestamp = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &lidar_timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 camera_timestamp = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &camera_timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 radar_timestamp = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &radar_timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 version = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .apollo.common.StatusPb status = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_status()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string frame_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->frame_id().data(), static_cast<int>(this->frame_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "apollo.common.Header.frame_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.common.Header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.Header)
  return false;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.Header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double timestamp_sec = 1;
  if (this->timestamp_sec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->timestamp_sec(), output);
  }

  // string module_name = 2;
  if (this->module_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->module_name().data(), static_cast<int>(this->module_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.Header.module_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->module_name(), output);
  }

  // uint32 sequence_num = 3;
  if (this->sequence_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->sequence_num(), output);
  }

  // uint64 lidar_timestamp = 4;
  if (this->lidar_timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->lidar_timestamp(), output);
  }

  // uint64 camera_timestamp = 5;
  if (this->camera_timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->camera_timestamp(), output);
  }

  // uint64 radar_timestamp = 6;
  if (this->radar_timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->radar_timestamp(), output);
  }

  // uint32 version = 7;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->version(), output);
  }

  // .apollo.common.StatusPb status = 8;
  if (this->has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_status(), output);
  }

  // string frame_id = 9;
  if (this->frame_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.Header.frame_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->frame_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.common.Header)
}

::google::protobuf::uint8* Header::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.Header)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double timestamp_sec = 1;
  if (this->timestamp_sec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->timestamp_sec(), target);
  }

  // string module_name = 2;
  if (this->module_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->module_name().data(), static_cast<int>(this->module_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.Header.module_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->module_name(), target);
  }

  // uint32 sequence_num = 3;
  if (this->sequence_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->sequence_num(), target);
  }

  // uint64 lidar_timestamp = 4;
  if (this->lidar_timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->lidar_timestamp(), target);
  }

  // uint64 camera_timestamp = 5;
  if (this->camera_timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->camera_timestamp(), target);
  }

  // uint64 radar_timestamp = 6;
  if (this->radar_timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->radar_timestamp(), target);
  }

  // uint32 version = 7;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->version(), target);
  }

  // .apollo.common.StatusPb status = 8;
  if (this->has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_status(), deterministic, target);
  }

  // string frame_id = 9;
  if (this->frame_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.Header.frame_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->frame_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.Header)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string module_name = 2;
  if (this->module_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->module_name());
  }

  // string frame_id = 9;
  if (this->frame_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->frame_id());
  }

  // .apollo.common.StatusPb status = 8;
  if (this->has_status()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *status_);
  }

  // double timestamp_sec = 1;
  if (this->timestamp_sec() != 0) {
    total_size += 1 + 8;
  }

  // uint64 lidar_timestamp = 4;
  if (this->lidar_timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->lidar_timestamp());
  }

  // uint64 camera_timestamp = 5;
  if (this->camera_timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->camera_timestamp());
  }

  // uint32 sequence_num = 3;
  if (this->sequence_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->sequence_num());
  }

  // uint32 version = 7;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->version());
  }

  // uint64 radar_timestamp = 6;
  if (this->radar_timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->radar_timestamp());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Header* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Header>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.Header)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.module_name().size() > 0) {

    module_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.module_name_);
  }
  if (from.frame_id().size() > 0) {

    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
  if (from.has_status()) {
    mutable_status()->::apollo::common::StatusPb::MergeFrom(from.status());
  }
  if (from.timestamp_sec() != 0) {
    set_timestamp_sec(from.timestamp_sec());
  }
  if (from.lidar_timestamp() != 0) {
    set_lidar_timestamp(from.lidar_timestamp());
  }
  if (from.camera_timestamp() != 0) {
    set_camera_timestamp(from.camera_timestamp());
  }
  if (from.sequence_num() != 0) {
    set_sequence_num(from.sequence_num());
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
  if (from.radar_timestamp() != 0) {
    set_radar_timestamp(from.radar_timestamp());
  }
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::Swap(Header* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Header::InternalSwap(Header* other) {
  using std::swap;
  module_name_.Swap(&other->module_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  frame_id_.Swap(&other->frame_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(status_, other->status_);
  swap(timestamp_sec_, other->timestamp_sec_);
  swap(lidar_timestamp_, other->lidar_timestamp_);
  swap(camera_timestamp_, other->camera_timestamp_);
  swap(sequence_num_, other->sequence_num_);
  swap(version_, other->version_);
  swap(radar_timestamp_, other->radar_timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_header_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_header_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace apollo
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::apollo::common::Header* Arena::CreateMaybeMessage< ::apollo::common::Header >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::common::Header >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
