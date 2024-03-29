// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error_code.proto

#include "error_code.pb.h"

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

namespace apollo {
namespace common {
class StatusPbDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StatusPb>
      _instance;
} _StatusPb_default_instance_;
}  // namespace common
}  // namespace apollo
namespace protobuf_error_5fcode_2eproto {
static void InitDefaultsStatusPb() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::common::_StatusPb_default_instance_;
    new (ptr) ::apollo::common::StatusPb();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::common::StatusPb::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_StatusPb =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsStatusPb}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_StatusPb.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::StatusPb, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::StatusPb, error_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::common::StatusPb, msg_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::apollo::common::StatusPb)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::apollo::common::_StatusPb_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "error_code.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n\020error_code.proto\022\rapollo.common\"E\n\010Sta"
      "tusPb\022,\n\nerror_code\030\001 \001(\0162\030.apollo.commo"
      "n.ErrorCode\022\013\n\003msg\030\002 \001(\t*\231\010\n\tErrorCode\022\006"
      "\n\002OK\020\000\022\022\n\rCONTROL_ERROR\020\350\007\022\027\n\022CONTROL_IN"
      "IT_ERROR\020\351\007\022\032\n\025CONTROL_COMPUTE_ERROR\020\352\007\022"
      "\030\n\023CONTROL_ESTOP_ERROR\020\353\007\022\032\n\025PERFECT_CON"
      "TROL_ERROR\020\354\007\022\021\n\014CANBUS_ERROR\020\320\017\022\032\n\025CAN_"
      "CLIENT_ERROR_BASE\020\264\020\022(\n#CAN_CLIENT_ERROR"
      "_OPEN_DEVICE_FAILED\020\265\020\022\037\n\032CAN_CLIENT_ERR"
      "OR_FRAME_NUM\020\266\020\022!\n\034CAN_CLIENT_ERROR_SEND"
      "_FAILED\020\267\020\022!\n\034CAN_CLIENT_ERROR_RECV_FAIL"
      "ED\020\270\020\022\027\n\022LOCALIZATION_ERROR\020\270\027\022\033\n\026LOCALI"
      "ZATION_ERROR_MSG\020\234\030\022\035\n\030LOCALIZATION_ERRO"
      "R_LIDAR\020\200\031\022\035\n\030LOCALIZATION_ERROR_INTEG\020\344"
      "\031\022\034\n\027LOCALIZATION_ERROR_GNSS\020\310\032\022\025\n\020PERCE"
      "PTION_ERROR\020\240\037\022\030\n\023PERCEPTION_ERROR_TF\020\241\037"
      "\022\035\n\030PERCEPTION_ERROR_PROCESS\020\242\037\022\025\n\020PERCE"
      "PTION_FATAL\020\243\037\022\032\n\025PERCEPTION_ERROR_NONE\020"
      "\244\037\022\035\n\030PERCEPTION_ERROR_UNKNOWN\020\245\037\022\025\n\020PRE"
      "DICTION_ERROR\020\210\'\022\023\n\016PLANNING_ERROR\020\360.\022\035\n"
      "\030PLANNING_ERROR_NOT_READY\020\361.\022\025\n\020HDMAP_DA"
      "TA_ERROR\020\3306\022\022\n\rROUTING_ERROR\020\300>\022\032\n\025ROUTI"
      "NG_ERROR_REQUEST\020\301>\022\033\n\026ROUTING_ERROR_RES"
      "PONSE\020\302>\022\034\n\027ROUTING_ERROR_NOT_READY\020\303>\022\021"
      "\n\014END_OF_INPUT\020\250F\022\025\n\020HTTP_LOGIC_ERROR\020\220N"
      "\022\027\n\022HTTP_RUNTIME_ERROR\020\221N\022\027\n\022RELATIVE_MA"
      "P_ERROR\020\370U\022\033\n\026RELATIVE_MAP_NOT_READY\020\371U\022"
      "\026\n\021DRIVER_ERROR_GNSS\020\340]\022\032\n\025DRIVER_ERROR_"
      "VELODYNE\020\310e\022\027\n\022STORYTELLING_ERROR\020\260mb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1164);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "error_code.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_error_5fcode_2eproto
namespace apollo {
namespace common {
const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor() {
  protobuf_error_5fcode_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_error_5fcode_2eproto::file_level_enum_descriptors[0];
}
bool ErrorCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 2000:
    case 2100:
    case 2101:
    case 2102:
    case 2103:
    case 2104:
    case 3000:
    case 3100:
    case 3200:
    case 3300:
    case 3400:
    case 4000:
    case 4001:
    case 4002:
    case 4003:
    case 4004:
    case 4005:
    case 5000:
    case 6000:
    case 6001:
    case 7000:
    case 8000:
    case 8001:
    case 8002:
    case 8003:
    case 9000:
    case 10000:
    case 10001:
    case 11000:
    case 11001:
    case 12000:
    case 13000:
    case 14000:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void StatusPb::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StatusPb::kErrorCodeFieldNumber;
const int StatusPb::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StatusPb::StatusPb()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_error_5fcode_2eproto::scc_info_StatusPb.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.StatusPb)
}
StatusPb::StatusPb(const StatusPb& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg().size() > 0) {
    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  error_code_ = from.error_code_;
  // @@protoc_insertion_point(copy_constructor:apollo.common.StatusPb)
}

void StatusPb::SharedCtor() {
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
}

StatusPb::~StatusPb() {
  // @@protoc_insertion_point(destructor:apollo.common.StatusPb)
  SharedDtor();
}

void StatusPb::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void StatusPb::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* StatusPb::descriptor() {
  ::protobuf_error_5fcode_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_error_5fcode_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const StatusPb& StatusPb::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_error_5fcode_2eproto::scc_info_StatusPb.base);
  return *internal_default_instance();
}


void StatusPb::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.StatusPb)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
  _internal_metadata_.Clear();
}

bool StatusPb::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.StatusPb)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .apollo.common.ErrorCode error_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_error_code(static_cast< ::apollo::common::ErrorCode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), static_cast<int>(this->msg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "apollo.common.StatusPb.msg"));
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
  // @@protoc_insertion_point(parse_success:apollo.common.StatusPb)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.StatusPb)
  return false;
#undef DO_
}

void StatusPb::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.StatusPb)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .apollo.common.ErrorCode error_code = 1;
  if (this->error_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->error_code(), output);
  }

  // string msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.StatusPb.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->msg(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.common.StatusPb)
}

::google::protobuf::uint8* StatusPb::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.StatusPb)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .apollo.common.ErrorCode error_code = 1;
  if (this->error_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->error_code(), target);
  }

  // string msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "apollo.common.StatusPb.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.StatusPb)
  return target;
}

size_t StatusPb::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.StatusPb)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string msg = 2;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // .apollo.common.ErrorCode error_code = 1;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->error_code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StatusPb::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.StatusPb)
  GOOGLE_DCHECK_NE(&from, this);
  const StatusPb* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StatusPb>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.StatusPb)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.StatusPb)
    MergeFrom(*source);
  }
}

void StatusPb::MergeFrom(const StatusPb& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.StatusPb)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.error_code() != 0) {
    set_error_code(from.error_code());
  }
}

void StatusPb::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.StatusPb)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatusPb::CopyFrom(const StatusPb& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.StatusPb)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatusPb::IsInitialized() const {
  return true;
}

void StatusPb::Swap(StatusPb* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StatusPb::InternalSwap(StatusPb* other) {
  using std::swap;
  msg_.Swap(&other->msg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(error_code_, other->error_code_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata StatusPb::GetMetadata() const {
  protobuf_error_5fcode_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_error_5fcode_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace apollo
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::apollo::common::StatusPb* Arena::CreateMaybeMessage< ::apollo::common::StatusPb >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::common::StatusPb >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
