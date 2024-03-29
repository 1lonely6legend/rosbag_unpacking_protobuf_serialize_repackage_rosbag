// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: localization_status.proto

#ifndef PROTOBUF_INCLUDED_localization_5fstatus_2eproto
#define PROTOBUF_INCLUDED_localization_5fstatus_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_localization_5fstatus_2eproto 

namespace protobuf_localization_5fstatus_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_localization_5fstatus_2eproto
namespace apollo {
namespace localization {
class MsfSensorMsgStatus;
class MsfSensorMsgStatusDefaultTypeInternal;
extern MsfSensorMsgStatusDefaultTypeInternal _MsfSensorMsgStatus_default_instance_;
class MsfStatus;
class MsfStatusDefaultTypeInternal;
extern MsfStatusDefaultTypeInternal _MsfStatus_default_instance_;
}  // namespace localization
}  // namespace apollo
namespace google {
namespace protobuf {
template<> ::apollo::localization::MsfSensorMsgStatus* Arena::CreateMaybeMessage<::apollo::localization::MsfSensorMsgStatus>(Arena*);
template<> ::apollo::localization::MsfStatus* Arena::CreateMaybeMessage<::apollo::localization::MsfStatus>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace apollo {
namespace localization {

enum LocalLidarStatus {
  MSF_LOCAL_LIDAR_NORMAL = 0,
  MSF_LOCAL_LIDAR_MAP_MISSING = 1,
  MSF_LOCAL_LIDAR_EXTRINSICS_MISSING = 2,
  MSF_LOCAL_LIDAR_MAP_LOADING_FAILED = 3,
  MSF_LOCAL_LIDAR_NO_OUTPUT = 4,
  MSF_LOCAL_LIDAR_OUT_OF_MAP = 5,
  MSF_LOCAL_LIDAR_NOT_GOOD = 6,
  MSF_LOCAL_LIDAR_UNDEFINED_STATUS = 7,
  LocalLidarStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LocalLidarStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LocalLidarStatus_IsValid(int value);
const LocalLidarStatus LocalLidarStatus_MIN = MSF_LOCAL_LIDAR_NORMAL;
const LocalLidarStatus LocalLidarStatus_MAX = MSF_LOCAL_LIDAR_UNDEFINED_STATUS;
const int LocalLidarStatus_ARRAYSIZE = LocalLidarStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* LocalLidarStatus_descriptor();
inline const ::std::string& LocalLidarStatus_Name(LocalLidarStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    LocalLidarStatus_descriptor(), value);
}
inline bool LocalLidarStatus_Parse(
    const ::std::string& name, LocalLidarStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LocalLidarStatus>(
    LocalLidarStatus_descriptor(), name, value);
}
enum LocalLidarQuality {
  MSF_LOCAL_LIDAR_VERY_GOOD = 0,
  MSF_LOCAL_LIDAR_GOOD = 1,
  MSF_LOCAL_LIDAR_NOT_BAD = 2,
  MSF_LOCAL_LIDAR_BAD = 3,
  LocalLidarQuality_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LocalLidarQuality_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LocalLidarQuality_IsValid(int value);
const LocalLidarQuality LocalLidarQuality_MIN = MSF_LOCAL_LIDAR_VERY_GOOD;
const LocalLidarQuality LocalLidarQuality_MAX = MSF_LOCAL_LIDAR_BAD;
const int LocalLidarQuality_ARRAYSIZE = LocalLidarQuality_MAX + 1;

const ::google::protobuf::EnumDescriptor* LocalLidarQuality_descriptor();
inline const ::std::string& LocalLidarQuality_Name(LocalLidarQuality value) {
  return ::google::protobuf::internal::NameOfEnum(
    LocalLidarQuality_descriptor(), value);
}
inline bool LocalLidarQuality_Parse(
    const ::std::string& name, LocalLidarQuality* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LocalLidarQuality>(
    LocalLidarQuality_descriptor(), name, value);
}
enum LocalLidarConsistency {
  MSF_LOCAL_LIDAR_CONSISTENCY_00 = 0,
  MSF_LOCAL_LIDAR_CONSISTENCY_01 = 1,
  MSF_LOCAL_LIDAR_CONSISTENCY_02 = 2,
  MSF_LOCAL_LIDAR_CONSISTENCY_03 = 3,
  LocalLidarConsistency_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LocalLidarConsistency_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LocalLidarConsistency_IsValid(int value);
const LocalLidarConsistency LocalLidarConsistency_MIN = MSF_LOCAL_LIDAR_CONSISTENCY_00;
const LocalLidarConsistency LocalLidarConsistency_MAX = MSF_LOCAL_LIDAR_CONSISTENCY_03;
const int LocalLidarConsistency_ARRAYSIZE = LocalLidarConsistency_MAX + 1;

const ::google::protobuf::EnumDescriptor* LocalLidarConsistency_descriptor();
inline const ::std::string& LocalLidarConsistency_Name(LocalLidarConsistency value) {
  return ::google::protobuf::internal::NameOfEnum(
    LocalLidarConsistency_descriptor(), value);
}
inline bool LocalLidarConsistency_Parse(
    const ::std::string& name, LocalLidarConsistency* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LocalLidarConsistency>(
    LocalLidarConsistency_descriptor(), name, value);
}
enum GnssConsistency {
  MSF_GNSS_CONSISTENCY_00 = 0,
  MSF_GNSS_CONSISTENCY_01 = 1,
  MSF_GNSS_CONSISTENCY_02 = 2,
  MSF_GNSS_CONSISTENCY_03 = 3,
  GnssConsistency_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GnssConsistency_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GnssConsistency_IsValid(int value);
const GnssConsistency GnssConsistency_MIN = MSF_GNSS_CONSISTENCY_00;
const GnssConsistency GnssConsistency_MAX = MSF_GNSS_CONSISTENCY_03;
const int GnssConsistency_ARRAYSIZE = GnssConsistency_MAX + 1;

const ::google::protobuf::EnumDescriptor* GnssConsistency_descriptor();
inline const ::std::string& GnssConsistency_Name(GnssConsistency value) {
  return ::google::protobuf::internal::NameOfEnum(
    GnssConsistency_descriptor(), value);
}
inline bool GnssConsistency_Parse(
    const ::std::string& name, GnssConsistency* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GnssConsistency>(
    GnssConsistency_descriptor(), name, value);
}
enum GnssPositionType {
  NONE = 0,
  FIXEDPOS = 1,
  FIXEDHEIGHT = 2,
  FLOATCONV = 4,
  WIDELANE = 5,
  NARROWLANE = 6,
  DOPPLER_VELOCITY = 8,
  SINGLE = 16,
  PSRDIFF = 17,
  WAAS = 18,
  PROPOGATED = 19,
  OMNISTAR = 20,
  L1_FLOAT = 32,
  IONOFREE_FLOAT = 33,
  NARROW_FLOAT = 34,
  L1_INT = 48,
  WIDE_INT = 49,
  NARROW_INT = 50,
  RTK_DIRECT_INS = 51,
  INS_SBAS = 52,
  INS_PSRSP = 53,
  INS_PSRDIFF = 54,
  INS_RTKFLOAT = 55,
  INS_RTKFIXED = 56,
  INS_OMNISTAR = 57,
  INS_OMNISTAR_HP = 58,
  INS_OMNISTAR_XP = 59,
  OMNISTAR_HP = 64,
  OMNISTAR_XP = 65,
  PPP_CONVERGING = 68,
  PPP = 69,
  INS_PPP_Converging = 73,
  INS_PPP = 74,
  MSG_LOSS = 91,
  GnssPositionType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GnssPositionType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GnssPositionType_IsValid(int value);
const GnssPositionType GnssPositionType_MIN = NONE;
const GnssPositionType GnssPositionType_MAX = MSG_LOSS;
const int GnssPositionType_ARRAYSIZE = GnssPositionType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GnssPositionType_descriptor();
inline const ::std::string& GnssPositionType_Name(GnssPositionType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GnssPositionType_descriptor(), value);
}
inline bool GnssPositionType_Parse(
    const ::std::string& name, GnssPositionType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GnssPositionType>(
    GnssPositionType_descriptor(), name, value);
}
enum ImuMsgDelayStatus {
  IMU_DELAY_NORMAL = 0,
  IMU_DELAY_1 = 1,
  IMU_DELAY_2 = 2,
  IMU_DELAY_3 = 3,
  IMU_DELAY_ABNORMAL = 4,
  ImuMsgDelayStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ImuMsgDelayStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ImuMsgDelayStatus_IsValid(int value);
const ImuMsgDelayStatus ImuMsgDelayStatus_MIN = IMU_DELAY_NORMAL;
const ImuMsgDelayStatus ImuMsgDelayStatus_MAX = IMU_DELAY_ABNORMAL;
const int ImuMsgDelayStatus_ARRAYSIZE = ImuMsgDelayStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* ImuMsgDelayStatus_descriptor();
inline const ::std::string& ImuMsgDelayStatus_Name(ImuMsgDelayStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    ImuMsgDelayStatus_descriptor(), value);
}
inline bool ImuMsgDelayStatus_Parse(
    const ::std::string& name, ImuMsgDelayStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ImuMsgDelayStatus>(
    ImuMsgDelayStatus_descriptor(), name, value);
}
enum ImuMsgMissingStatus {
  IMU_MISSING_NORMAL = 0,
  IMU_MISSING_1 = 1,
  IMU_MISSING_2 = 2,
  IMU_MISSING_3 = 3,
  IMU_MISSING_4 = 4,
  IMU_MISSING_5 = 5,
  IMU_MISSING_ABNORMAL = 6,
  ImuMsgMissingStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ImuMsgMissingStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ImuMsgMissingStatus_IsValid(int value);
const ImuMsgMissingStatus ImuMsgMissingStatus_MIN = IMU_MISSING_NORMAL;
const ImuMsgMissingStatus ImuMsgMissingStatus_MAX = IMU_MISSING_ABNORMAL;
const int ImuMsgMissingStatus_ARRAYSIZE = ImuMsgMissingStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* ImuMsgMissingStatus_descriptor();
inline const ::std::string& ImuMsgMissingStatus_Name(ImuMsgMissingStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    ImuMsgMissingStatus_descriptor(), value);
}
inline bool ImuMsgMissingStatus_Parse(
    const ::std::string& name, ImuMsgMissingStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ImuMsgMissingStatus>(
    ImuMsgMissingStatus_descriptor(), name, value);
}
enum ImuMsgDataStatus {
  IMU_DATA_NORMAL = 0,
  IMU_DATA_ABNORMAL = 1,
  IMU_DATA_OTHER = 2,
  ImuMsgDataStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ImuMsgDataStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ImuMsgDataStatus_IsValid(int value);
const ImuMsgDataStatus ImuMsgDataStatus_MIN = IMU_DATA_NORMAL;
const ImuMsgDataStatus ImuMsgDataStatus_MAX = IMU_DATA_OTHER;
const int ImuMsgDataStatus_ARRAYSIZE = ImuMsgDataStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* ImuMsgDataStatus_descriptor();
inline const ::std::string& ImuMsgDataStatus_Name(ImuMsgDataStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    ImuMsgDataStatus_descriptor(), value);
}
inline bool ImuMsgDataStatus_Parse(
    const ::std::string& name, ImuMsgDataStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ImuMsgDataStatus>(
    ImuMsgDataStatus_descriptor(), name, value);
}
enum MsfRunningStatus {
  MSF_SOL_LIDAR_GNSS = 0,
  MSF_SOL_X_GNSS = 1,
  MSF_SOL_LIDAR_X = 2,
  MSF_SOL_LIDAR_XX = 3,
  MSF_SOL_LIDAR_XXX = 4,
  MSF_SOL_X_X = 5,
  MSF_SOL_X_XX = 6,
  MSF_SOL_X_XXX = 7,
  MSF_SSOL_LIDAR_GNSS = 8,
  MSF_SSOL_X_GNSS = 9,
  MSF_SSOL_LIDAR_X = 10,
  MSF_SSOL_LIDAR_XX = 11,
  MSF_SSOL_LIDAR_XXX = 12,
  MSF_SSOL_X_X = 13,
  MSF_SSOL_X_XX = 14,
  MSF_SSOL_X_XXX = 15,
  MSF_NOSOL_LIDAR_GNSS = 16,
  MSF_NOSOL_X_GNSS = 17,
  MSF_NOSOL_LIDAR_X = 18,
  MSF_NOSOL_LIDAR_XX = 19,
  MSF_NOSOL_LIDAR_XXX = 20,
  MSF_NOSOL_X_X = 21,
  MSF_NOSOL_X_XX = 22,
  MSF_NOSOL_X_XXX = 23,
  MSF_RUNNING_INIT = 24,
  MsfRunningStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MsfRunningStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MsfRunningStatus_IsValid(int value);
const MsfRunningStatus MsfRunningStatus_MIN = MSF_SOL_LIDAR_GNSS;
const MsfRunningStatus MsfRunningStatus_MAX = MSF_RUNNING_INIT;
const int MsfRunningStatus_ARRAYSIZE = MsfRunningStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsfRunningStatus_descriptor();
inline const ::std::string& MsfRunningStatus_Name(MsfRunningStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsfRunningStatus_descriptor(), value);
}
inline bool MsfRunningStatus_Parse(
    const ::std::string& name, MsfRunningStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsfRunningStatus>(
    MsfRunningStatus_descriptor(), name, value);
}
// ===================================================================

class MsfSensorMsgStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.localization.MsfSensorMsgStatus) */ {
 public:
  MsfSensorMsgStatus();
  virtual ~MsfSensorMsgStatus();

  MsfSensorMsgStatus(const MsfSensorMsgStatus& from);

  inline MsfSensorMsgStatus& operator=(const MsfSensorMsgStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsfSensorMsgStatus(MsfSensorMsgStatus&& from) noexcept
    : MsfSensorMsgStatus() {
    *this = ::std::move(from);
  }

  inline MsfSensorMsgStatus& operator=(MsfSensorMsgStatus&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsfSensorMsgStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsfSensorMsgStatus* internal_default_instance() {
    return reinterpret_cast<const MsfSensorMsgStatus*>(
               &_MsfSensorMsgStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MsfSensorMsgStatus* other);
  friend void swap(MsfSensorMsgStatus& a, MsfSensorMsgStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsfSensorMsgStatus* New() const final {
    return CreateMaybeMessage<MsfSensorMsgStatus>(NULL);
  }

  MsfSensorMsgStatus* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MsfSensorMsgStatus>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MsfSensorMsgStatus& from);
  void MergeFrom(const MsfSensorMsgStatus& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsfSensorMsgStatus* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .apollo.localization.ImuMsgDelayStatus imu_delay_status = 1;
  void clear_imu_delay_status();
  static const int kImuDelayStatusFieldNumber = 1;
  ::apollo::localization::ImuMsgDelayStatus imu_delay_status() const;
  void set_imu_delay_status(::apollo::localization::ImuMsgDelayStatus value);

  // .apollo.localization.ImuMsgMissingStatus imu_missing_status = 2;
  void clear_imu_missing_status();
  static const int kImuMissingStatusFieldNumber = 2;
  ::apollo::localization::ImuMsgMissingStatus imu_missing_status() const;
  void set_imu_missing_status(::apollo::localization::ImuMsgMissingStatus value);

  // .apollo.localization.ImuMsgDataStatus imu_data_status = 3;
  void clear_imu_data_status();
  static const int kImuDataStatusFieldNumber = 3;
  ::apollo::localization::ImuMsgDataStatus imu_data_status() const;
  void set_imu_data_status(::apollo::localization::ImuMsgDataStatus value);

  // @@protoc_insertion_point(class_scope:apollo.localization.MsfSensorMsgStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int imu_delay_status_;
  int imu_missing_status_;
  int imu_data_status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_localization_5fstatus_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MsfStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.localization.MsfStatus) */ {
 public:
  MsfStatus();
  virtual ~MsfStatus();

  MsfStatus(const MsfStatus& from);

  inline MsfStatus& operator=(const MsfStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsfStatus(MsfStatus&& from) noexcept
    : MsfStatus() {
    *this = ::std::move(from);
  }

  inline MsfStatus& operator=(MsfStatus&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MsfStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsfStatus* internal_default_instance() {
    return reinterpret_cast<const MsfStatus*>(
               &_MsfStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(MsfStatus* other);
  friend void swap(MsfStatus& a, MsfStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsfStatus* New() const final {
    return CreateMaybeMessage<MsfStatus>(NULL);
  }

  MsfStatus* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MsfStatus>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MsfStatus& from);
  void MergeFrom(const MsfStatus& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsfStatus* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .apollo.localization.LocalLidarConsistency local_lidar_consistency = 1;
  void clear_local_lidar_consistency();
  static const int kLocalLidarConsistencyFieldNumber = 1;
  ::apollo::localization::LocalLidarConsistency local_lidar_consistency() const;
  void set_local_lidar_consistency(::apollo::localization::LocalLidarConsistency value);

  // .apollo.localization.GnssConsistency gnss_consistency = 2;
  void clear_gnss_consistency();
  static const int kGnssConsistencyFieldNumber = 2;
  ::apollo::localization::GnssConsistency gnss_consistency() const;
  void set_gnss_consistency(::apollo::localization::GnssConsistency value);

  // .apollo.localization.LocalLidarStatus local_lidar_status = 3;
  void clear_local_lidar_status();
  static const int kLocalLidarStatusFieldNumber = 3;
  ::apollo::localization::LocalLidarStatus local_lidar_status() const;
  void set_local_lidar_status(::apollo::localization::LocalLidarStatus value);

  // .apollo.localization.LocalLidarQuality local_lidar_quality = 4;
  void clear_local_lidar_quality();
  static const int kLocalLidarQualityFieldNumber = 4;
  ::apollo::localization::LocalLidarQuality local_lidar_quality() const;
  void set_local_lidar_quality(::apollo::localization::LocalLidarQuality value);

  // .apollo.localization.GnssPositionType gnsspos_position_type = 5;
  void clear_gnsspos_position_type();
  static const int kGnssposPositionTypeFieldNumber = 5;
  ::apollo::localization::GnssPositionType gnsspos_position_type() const;
  void set_gnsspos_position_type(::apollo::localization::GnssPositionType value);

  // .apollo.localization.MsfRunningStatus msf_running_status = 6;
  void clear_msf_running_status();
  static const int kMsfRunningStatusFieldNumber = 6;
  ::apollo::localization::MsfRunningStatus msf_running_status() const;
  void set_msf_running_status(::apollo::localization::MsfRunningStatus value);

  // @@protoc_insertion_point(class_scope:apollo.localization.MsfStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int local_lidar_consistency_;
  int gnss_consistency_;
  int local_lidar_status_;
  int local_lidar_quality_;
  int gnsspos_position_type_;
  int msf_running_status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_localization_5fstatus_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsfSensorMsgStatus

// .apollo.localization.ImuMsgDelayStatus imu_delay_status = 1;
inline void MsfSensorMsgStatus::clear_imu_delay_status() {
  imu_delay_status_ = 0;
}
inline ::apollo::localization::ImuMsgDelayStatus MsfSensorMsgStatus::imu_delay_status() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfSensorMsgStatus.imu_delay_status)
  return static_cast< ::apollo::localization::ImuMsgDelayStatus >(imu_delay_status_);
}
inline void MsfSensorMsgStatus::set_imu_delay_status(::apollo::localization::ImuMsgDelayStatus value) {
  
  imu_delay_status_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfSensorMsgStatus.imu_delay_status)
}

// .apollo.localization.ImuMsgMissingStatus imu_missing_status = 2;
inline void MsfSensorMsgStatus::clear_imu_missing_status() {
  imu_missing_status_ = 0;
}
inline ::apollo::localization::ImuMsgMissingStatus MsfSensorMsgStatus::imu_missing_status() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfSensorMsgStatus.imu_missing_status)
  return static_cast< ::apollo::localization::ImuMsgMissingStatus >(imu_missing_status_);
}
inline void MsfSensorMsgStatus::set_imu_missing_status(::apollo::localization::ImuMsgMissingStatus value) {
  
  imu_missing_status_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfSensorMsgStatus.imu_missing_status)
}

// .apollo.localization.ImuMsgDataStatus imu_data_status = 3;
inline void MsfSensorMsgStatus::clear_imu_data_status() {
  imu_data_status_ = 0;
}
inline ::apollo::localization::ImuMsgDataStatus MsfSensorMsgStatus::imu_data_status() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfSensorMsgStatus.imu_data_status)
  return static_cast< ::apollo::localization::ImuMsgDataStatus >(imu_data_status_);
}
inline void MsfSensorMsgStatus::set_imu_data_status(::apollo::localization::ImuMsgDataStatus value) {
  
  imu_data_status_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfSensorMsgStatus.imu_data_status)
}

// -------------------------------------------------------------------

// MsfStatus

// .apollo.localization.LocalLidarConsistency local_lidar_consistency = 1;
inline void MsfStatus::clear_local_lidar_consistency() {
  local_lidar_consistency_ = 0;
}
inline ::apollo::localization::LocalLidarConsistency MsfStatus::local_lidar_consistency() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfStatus.local_lidar_consistency)
  return static_cast< ::apollo::localization::LocalLidarConsistency >(local_lidar_consistency_);
}
inline void MsfStatus::set_local_lidar_consistency(::apollo::localization::LocalLidarConsistency value) {
  
  local_lidar_consistency_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfStatus.local_lidar_consistency)
}

// .apollo.localization.GnssConsistency gnss_consistency = 2;
inline void MsfStatus::clear_gnss_consistency() {
  gnss_consistency_ = 0;
}
inline ::apollo::localization::GnssConsistency MsfStatus::gnss_consistency() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfStatus.gnss_consistency)
  return static_cast< ::apollo::localization::GnssConsistency >(gnss_consistency_);
}
inline void MsfStatus::set_gnss_consistency(::apollo::localization::GnssConsistency value) {
  
  gnss_consistency_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfStatus.gnss_consistency)
}

// .apollo.localization.LocalLidarStatus local_lidar_status = 3;
inline void MsfStatus::clear_local_lidar_status() {
  local_lidar_status_ = 0;
}
inline ::apollo::localization::LocalLidarStatus MsfStatus::local_lidar_status() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfStatus.local_lidar_status)
  return static_cast< ::apollo::localization::LocalLidarStatus >(local_lidar_status_);
}
inline void MsfStatus::set_local_lidar_status(::apollo::localization::LocalLidarStatus value) {
  
  local_lidar_status_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfStatus.local_lidar_status)
}

// .apollo.localization.LocalLidarQuality local_lidar_quality = 4;
inline void MsfStatus::clear_local_lidar_quality() {
  local_lidar_quality_ = 0;
}
inline ::apollo::localization::LocalLidarQuality MsfStatus::local_lidar_quality() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfStatus.local_lidar_quality)
  return static_cast< ::apollo::localization::LocalLidarQuality >(local_lidar_quality_);
}
inline void MsfStatus::set_local_lidar_quality(::apollo::localization::LocalLidarQuality value) {
  
  local_lidar_quality_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfStatus.local_lidar_quality)
}

// .apollo.localization.GnssPositionType gnsspos_position_type = 5;
inline void MsfStatus::clear_gnsspos_position_type() {
  gnsspos_position_type_ = 0;
}
inline ::apollo::localization::GnssPositionType MsfStatus::gnsspos_position_type() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfStatus.gnsspos_position_type)
  return static_cast< ::apollo::localization::GnssPositionType >(gnsspos_position_type_);
}
inline void MsfStatus::set_gnsspos_position_type(::apollo::localization::GnssPositionType value) {
  
  gnsspos_position_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfStatus.gnsspos_position_type)
}

// .apollo.localization.MsfRunningStatus msf_running_status = 6;
inline void MsfStatus::clear_msf_running_status() {
  msf_running_status_ = 0;
}
inline ::apollo::localization::MsfRunningStatus MsfStatus::msf_running_status() const {
  // @@protoc_insertion_point(field_get:apollo.localization.MsfStatus.msf_running_status)
  return static_cast< ::apollo::localization::MsfRunningStatus >(msf_running_status_);
}
inline void MsfStatus::set_msf_running_status(::apollo::localization::MsfRunningStatus value) {
  
  msf_running_status_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.MsfStatus.msf_running_status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace localization
}  // namespace apollo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::localization::LocalLidarStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::LocalLidarStatus>() {
  return ::apollo::localization::LocalLidarStatus_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::LocalLidarQuality> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::LocalLidarQuality>() {
  return ::apollo::localization::LocalLidarQuality_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::LocalLidarConsistency> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::LocalLidarConsistency>() {
  return ::apollo::localization::LocalLidarConsistency_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::GnssConsistency> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::GnssConsistency>() {
  return ::apollo::localization::GnssConsistency_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::GnssPositionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::GnssPositionType>() {
  return ::apollo::localization::GnssPositionType_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::ImuMsgDelayStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::ImuMsgDelayStatus>() {
  return ::apollo::localization::ImuMsgDelayStatus_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::ImuMsgMissingStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::ImuMsgMissingStatus>() {
  return ::apollo::localization::ImuMsgMissingStatus_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::ImuMsgDataStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::ImuMsgDataStatus>() {
  return ::apollo::localization::ImuMsgDataStatus_descriptor();
}
template <> struct is_proto_enum< ::apollo::localization::MsfRunningStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::MsfRunningStatus>() {
  return ::apollo::localization::MsfRunningStatus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_localization_5fstatus_2eproto
