// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose.proto

#ifndef PROTOBUF_INCLUDED_pose_2eproto
#define PROTOBUF_INCLUDED_pose_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "geometry.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_pose_2eproto 

namespace protobuf_pose_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_pose_2eproto
namespace apollo {
namespace localization {
class Pose;
class PoseDefaultTypeInternal;
extern PoseDefaultTypeInternal _Pose_default_instance_;
}  // namespace localization
}  // namespace apollo
namespace google {
namespace protobuf {
template<> ::apollo::localization::Pose* Arena::CreateMaybeMessage<::apollo::localization::Pose>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace apollo {
namespace localization {

// ===================================================================

class Pose : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.localization.Pose) */ {
 public:
  Pose();
  virtual ~Pose();

  Pose(const Pose& from);

  inline Pose& operator=(const Pose& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Pose(Pose&& from) noexcept
    : Pose() {
    *this = ::std::move(from);
  }

  inline Pose& operator=(Pose&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Pose* internal_default_instance() {
    return reinterpret_cast<const Pose*>(
               &_Pose_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Pose* other);
  friend void swap(Pose& a, Pose& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Pose* New() const final {
    return CreateMaybeMessage<Pose>(NULL);
  }

  Pose* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Pose>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Pose& from);
  void MergeFrom(const Pose& from);
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
  void InternalSwap(Pose* other);
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

  // .apollo.common.PointENU position = 1;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  private:
  const ::apollo::common::PointENU& _internal_position() const;
  public:
  const ::apollo::common::PointENU& position() const;
  ::apollo::common::PointENU* release_position();
  ::apollo::common::PointENU* mutable_position();
  void set_allocated_position(::apollo::common::PointENU* position);

  // .apollo.common.Quaternion orientation = 2;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 2;
  private:
  const ::apollo::common::Quaternion& _internal_orientation() const;
  public:
  const ::apollo::common::Quaternion& orientation() const;
  ::apollo::common::Quaternion* release_orientation();
  ::apollo::common::Quaternion* mutable_orientation();
  void set_allocated_orientation(::apollo::common::Quaternion* orientation);

  // .apollo.common.Point3D linear_velocity = 3;
  bool has_linear_velocity() const;
  void clear_linear_velocity();
  static const int kLinearVelocityFieldNumber = 3;
  private:
  const ::apollo::common::Point3D& _internal_linear_velocity() const;
  public:
  const ::apollo::common::Point3D& linear_velocity() const;
  ::apollo::common::Point3D* release_linear_velocity();
  ::apollo::common::Point3D* mutable_linear_velocity();
  void set_allocated_linear_velocity(::apollo::common::Point3D* linear_velocity);

  // .apollo.common.Point3D linear_acceleration = 4;
  bool has_linear_acceleration() const;
  void clear_linear_acceleration();
  static const int kLinearAccelerationFieldNumber = 4;
  private:
  const ::apollo::common::Point3D& _internal_linear_acceleration() const;
  public:
  const ::apollo::common::Point3D& linear_acceleration() const;
  ::apollo::common::Point3D* release_linear_acceleration();
  ::apollo::common::Point3D* mutable_linear_acceleration();
  void set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration);

  // .apollo.common.Point3D angular_velocity = 5;
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 5;
  private:
  const ::apollo::common::Point3D& _internal_angular_velocity() const;
  public:
  const ::apollo::common::Point3D& angular_velocity() const;
  ::apollo::common::Point3D* release_angular_velocity();
  ::apollo::common::Point3D* mutable_angular_velocity();
  void set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity);

  // .apollo.common.Point3D linear_acceleration_vrf = 7;
  bool has_linear_acceleration_vrf() const;
  void clear_linear_acceleration_vrf();
  static const int kLinearAccelerationVrfFieldNumber = 7;
  private:
  const ::apollo::common::Point3D& _internal_linear_acceleration_vrf() const;
  public:
  const ::apollo::common::Point3D& linear_acceleration_vrf() const;
  ::apollo::common::Point3D* release_linear_acceleration_vrf();
  ::apollo::common::Point3D* mutable_linear_acceleration_vrf();
  void set_allocated_linear_acceleration_vrf(::apollo::common::Point3D* linear_acceleration_vrf);

  // .apollo.common.Point3D angular_velocity_vrf = 8;
  bool has_angular_velocity_vrf() const;
  void clear_angular_velocity_vrf();
  static const int kAngularVelocityVrfFieldNumber = 8;
  private:
  const ::apollo::common::Point3D& _internal_angular_velocity_vrf() const;
  public:
  const ::apollo::common::Point3D& angular_velocity_vrf() const;
  ::apollo::common::Point3D* release_angular_velocity_vrf();
  ::apollo::common::Point3D* mutable_angular_velocity_vrf();
  void set_allocated_angular_velocity_vrf(::apollo::common::Point3D* angular_velocity_vrf);

  // .apollo.common.Point3D euler_angles = 9;
  bool has_euler_angles() const;
  void clear_euler_angles();
  static const int kEulerAnglesFieldNumber = 9;
  private:
  const ::apollo::common::Point3D& _internal_euler_angles() const;
  public:
  const ::apollo::common::Point3D& euler_angles() const;
  ::apollo::common::Point3D* release_euler_angles();
  ::apollo::common::Point3D* mutable_euler_angles();
  void set_allocated_euler_angles(::apollo::common::Point3D* euler_angles);

  // double heading = 6;
  void clear_heading();
  static const int kHeadingFieldNumber = 6;
  double heading() const;
  void set_heading(double value);

  // @@protoc_insertion_point(class_scope:apollo.localization.Pose)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::apollo::common::PointENU* position_;
  ::apollo::common::Quaternion* orientation_;
  ::apollo::common::Point3D* linear_velocity_;
  ::apollo::common::Point3D* linear_acceleration_;
  ::apollo::common::Point3D* angular_velocity_;
  ::apollo::common::Point3D* linear_acceleration_vrf_;
  ::apollo::common::Point3D* angular_velocity_vrf_;
  ::apollo::common::Point3D* euler_angles_;
  double heading_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_pose_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pose

// .apollo.common.PointENU position = 1;
inline bool Pose::has_position() const {
  return this != internal_default_instance() && position_ != NULL;
}
inline const ::apollo::common::PointENU& Pose::_internal_position() const {
  return *position_;
}
inline const ::apollo::common::PointENU& Pose::position() const {
  const ::apollo::common::PointENU* p = position_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.position)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::PointENU*>(
      &::apollo::common::_PointENU_default_instance_);
}
inline ::apollo::common::PointENU* Pose::release_position() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.position)
  
  ::apollo::common::PointENU* temp = position_;
  position_ = NULL;
  return temp;
}
inline ::apollo::common::PointENU* Pose::mutable_position() {
  
  if (position_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::PointENU>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.position)
  return position_;
}
inline void Pose::set_allocated_position(::apollo::common::PointENU* position) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(position_);
  }
  if (position) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      position = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.position)
}

// .apollo.common.Quaternion orientation = 2;
inline bool Pose::has_orientation() const {
  return this != internal_default_instance() && orientation_ != NULL;
}
inline const ::apollo::common::Quaternion& Pose::_internal_orientation() const {
  return *orientation_;
}
inline const ::apollo::common::Quaternion& Pose::orientation() const {
  const ::apollo::common::Quaternion* p = orientation_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.orientation)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Quaternion*>(
      &::apollo::common::_Quaternion_default_instance_);
}
inline ::apollo::common::Quaternion* Pose::release_orientation() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.orientation)
  
  ::apollo::common::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline ::apollo::common::Quaternion* Pose::mutable_orientation() {
  
  if (orientation_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Quaternion>(GetArenaNoVirtual());
    orientation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.orientation)
  return orientation_;
}
inline void Pose::set_allocated_orientation(::apollo::common::Quaternion* orientation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(orientation_);
  }
  if (orientation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      orientation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, orientation, submessage_arena);
    }
    
  } else {
    
  }
  orientation_ = orientation;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.orientation)
}

// .apollo.common.Point3D linear_velocity = 3;
inline bool Pose::has_linear_velocity() const {
  return this != internal_default_instance() && linear_velocity_ != NULL;
}
inline const ::apollo::common::Point3D& Pose::_internal_linear_velocity() const {
  return *linear_velocity_;
}
inline const ::apollo::common::Point3D& Pose::linear_velocity() const {
  const ::apollo::common::Point3D* p = linear_velocity_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.linear_velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline ::apollo::common::Point3D* Pose::release_linear_velocity() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.linear_velocity)
  
  ::apollo::common::Point3D* temp = linear_velocity_;
  linear_velocity_ = NULL;
  return temp;
}
inline ::apollo::common::Point3D* Pose::mutable_linear_velocity() {
  
  if (linear_velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.linear_velocity)
  return linear_velocity_;
}
inline void Pose::set_allocated_linear_velocity(::apollo::common::Point3D* linear_velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(linear_velocity_);
  }
  if (linear_velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      linear_velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, linear_velocity, submessage_arena);
    }
    
  } else {
    
  }
  linear_velocity_ = linear_velocity;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.linear_velocity)
}

// .apollo.common.Point3D linear_acceleration = 4;
inline bool Pose::has_linear_acceleration() const {
  return this != internal_default_instance() && linear_acceleration_ != NULL;
}
inline const ::apollo::common::Point3D& Pose::_internal_linear_acceleration() const {
  return *linear_acceleration_;
}
inline const ::apollo::common::Point3D& Pose::linear_acceleration() const {
  const ::apollo::common::Point3D* p = linear_acceleration_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.linear_acceleration)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline ::apollo::common::Point3D* Pose::release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.linear_acceleration)
  
  ::apollo::common::Point3D* temp = linear_acceleration_;
  linear_acceleration_ = NULL;
  return temp;
}
inline ::apollo::common::Point3D* Pose::mutable_linear_acceleration() {
  
  if (linear_acceleration_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_acceleration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.linear_acceleration)
  return linear_acceleration_;
}
inline void Pose::set_allocated_linear_acceleration(::apollo::common::Point3D* linear_acceleration) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(linear_acceleration_);
  }
  if (linear_acceleration) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      linear_acceleration = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, linear_acceleration, submessage_arena);
    }
    
  } else {
    
  }
  linear_acceleration_ = linear_acceleration;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.linear_acceleration)
}

// .apollo.common.Point3D angular_velocity = 5;
inline bool Pose::has_angular_velocity() const {
  return this != internal_default_instance() && angular_velocity_ != NULL;
}
inline const ::apollo::common::Point3D& Pose::_internal_angular_velocity() const {
  return *angular_velocity_;
}
inline const ::apollo::common::Point3D& Pose::angular_velocity() const {
  const ::apollo::common::Point3D* p = angular_velocity_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.angular_velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline ::apollo::common::Point3D* Pose::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.angular_velocity)
  
  ::apollo::common::Point3D* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline ::apollo::common::Point3D* Pose::mutable_angular_velocity() {
  
  if (angular_velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    angular_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.angular_velocity)
  return angular_velocity_;
}
inline void Pose::set_allocated_angular_velocity(::apollo::common::Point3D* angular_velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(angular_velocity_);
  }
  if (angular_velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      angular_velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, angular_velocity, submessage_arena);
    }
    
  } else {
    
  }
  angular_velocity_ = angular_velocity;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.angular_velocity)
}

// double heading = 6;
inline void Pose::clear_heading() {
  heading_ = 0;
}
inline double Pose::heading() const {
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.heading)
  return heading_;
}
inline void Pose::set_heading(double value) {
  
  heading_ = value;
  // @@protoc_insertion_point(field_set:apollo.localization.Pose.heading)
}

// .apollo.common.Point3D linear_acceleration_vrf = 7;
inline bool Pose::has_linear_acceleration_vrf() const {
  return this != internal_default_instance() && linear_acceleration_vrf_ != NULL;
}
inline const ::apollo::common::Point3D& Pose::_internal_linear_acceleration_vrf() const {
  return *linear_acceleration_vrf_;
}
inline const ::apollo::common::Point3D& Pose::linear_acceleration_vrf() const {
  const ::apollo::common::Point3D* p = linear_acceleration_vrf_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.linear_acceleration_vrf)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline ::apollo::common::Point3D* Pose::release_linear_acceleration_vrf() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.linear_acceleration_vrf)
  
  ::apollo::common::Point3D* temp = linear_acceleration_vrf_;
  linear_acceleration_vrf_ = NULL;
  return temp;
}
inline ::apollo::common::Point3D* Pose::mutable_linear_acceleration_vrf() {
  
  if (linear_acceleration_vrf_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    linear_acceleration_vrf_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.linear_acceleration_vrf)
  return linear_acceleration_vrf_;
}
inline void Pose::set_allocated_linear_acceleration_vrf(::apollo::common::Point3D* linear_acceleration_vrf) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(linear_acceleration_vrf_);
  }
  if (linear_acceleration_vrf) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      linear_acceleration_vrf = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, linear_acceleration_vrf, submessage_arena);
    }
    
  } else {
    
  }
  linear_acceleration_vrf_ = linear_acceleration_vrf;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.linear_acceleration_vrf)
}

// .apollo.common.Point3D angular_velocity_vrf = 8;
inline bool Pose::has_angular_velocity_vrf() const {
  return this != internal_default_instance() && angular_velocity_vrf_ != NULL;
}
inline const ::apollo::common::Point3D& Pose::_internal_angular_velocity_vrf() const {
  return *angular_velocity_vrf_;
}
inline const ::apollo::common::Point3D& Pose::angular_velocity_vrf() const {
  const ::apollo::common::Point3D* p = angular_velocity_vrf_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.angular_velocity_vrf)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline ::apollo::common::Point3D* Pose::release_angular_velocity_vrf() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.angular_velocity_vrf)
  
  ::apollo::common::Point3D* temp = angular_velocity_vrf_;
  angular_velocity_vrf_ = NULL;
  return temp;
}
inline ::apollo::common::Point3D* Pose::mutable_angular_velocity_vrf() {
  
  if (angular_velocity_vrf_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    angular_velocity_vrf_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.angular_velocity_vrf)
  return angular_velocity_vrf_;
}
inline void Pose::set_allocated_angular_velocity_vrf(::apollo::common::Point3D* angular_velocity_vrf) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(angular_velocity_vrf_);
  }
  if (angular_velocity_vrf) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      angular_velocity_vrf = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, angular_velocity_vrf, submessage_arena);
    }
    
  } else {
    
  }
  angular_velocity_vrf_ = angular_velocity_vrf;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.angular_velocity_vrf)
}

// .apollo.common.Point3D euler_angles = 9;
inline bool Pose::has_euler_angles() const {
  return this != internal_default_instance() && euler_angles_ != NULL;
}
inline const ::apollo::common::Point3D& Pose::_internal_euler_angles() const {
  return *euler_angles_;
}
inline const ::apollo::common::Point3D& Pose::euler_angles() const {
  const ::apollo::common::Point3D* p = euler_angles_;
  // @@protoc_insertion_point(field_get:apollo.localization.Pose.euler_angles)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::Point3D*>(
      &::apollo::common::_Point3D_default_instance_);
}
inline ::apollo::common::Point3D* Pose::release_euler_angles() {
  // @@protoc_insertion_point(field_release:apollo.localization.Pose.euler_angles)
  
  ::apollo::common::Point3D* temp = euler_angles_;
  euler_angles_ = NULL;
  return temp;
}
inline ::apollo::common::Point3D* Pose::mutable_euler_angles() {
  
  if (euler_angles_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::Point3D>(GetArenaNoVirtual());
    euler_angles_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.localization.Pose.euler_angles)
  return euler_angles_;
}
inline void Pose::set_allocated_euler_angles(::apollo::common::Point3D* euler_angles) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(euler_angles_);
  }
  if (euler_angles) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      euler_angles = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, euler_angles, submessage_arena);
    }
    
  } else {
    
  }
  euler_angles_ = euler_angles;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.Pose.euler_angles)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace localization
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_pose_2eproto
