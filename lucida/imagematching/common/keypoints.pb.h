// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: keypoints.proto

#ifndef PROTOBUF_keypoints_2eproto__INCLUDED
#define PROTOBUF_keypoints_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace kp {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_keypoints_2eproto();
void protobuf_AssignDesc_keypoints_2eproto();
void protobuf_ShutdownFile_keypoints_2eproto();

class all_kp;
class Keypoint;

// ===================================================================

class all_kp : public ::google::protobuf::Message {
 public:
  all_kp();
  virtual ~all_kp();

  all_kp(const all_kp& from);

  inline all_kp& operator=(const all_kp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const all_kp& default_instance();

  void Swap(all_kp* other);

  // implements Message ----------------------------------------------

  all_kp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const all_kp& from);
  void MergeFrom(const all_kp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 size = 1;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 1;
  inline ::google::protobuf::uint32 size() const;
  inline void set_size(::google::protobuf::uint32 value);

  // repeated .kp.Keypoint keypoint = 2;
  inline int keypoint_size() const;
  inline void clear_keypoint();
  static const int kKeypointFieldNumber = 2;
  inline const ::kp::Keypoint& keypoint(int index) const;
  inline ::kp::Keypoint* mutable_keypoint(int index);
  inline ::kp::Keypoint* add_keypoint();
  inline const ::google::protobuf::RepeatedPtrField< ::kp::Keypoint >&
      keypoint() const;
  inline ::google::protobuf::RepeatedPtrField< ::kp::Keypoint >*
      mutable_keypoint();

  // @@protoc_insertion_point(class_scope:kp.all_kp)
 private:
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::kp::Keypoint > keypoint_;
  ::google::protobuf::uint32 size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_keypoints_2eproto();
  friend void protobuf_AssignDesc_keypoints_2eproto();
  friend void protobuf_ShutdownFile_keypoints_2eproto();

  void InitAsDefaultInstance();
  static all_kp* default_instance_;
};
// -------------------------------------------------------------------

class Keypoint : public ::google::protobuf::Message {
 public:
  Keypoint();
  virtual ~Keypoint();

  Keypoint(const Keypoint& from);

  inline Keypoint& operator=(const Keypoint& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Keypoint& default_instance();

  void Swap(Keypoint* other);

  // implements Message ----------------------------------------------

  Keypoint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Keypoint& from);
  void MergeFrom(const Keypoint& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline float x() const;
  inline void set_x(float value);

  // required float y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline float y() const;
  inline void set_y(float value);

  // required float size = 3;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 3;
  inline float size() const;
  inline void set_size(float value);

  // required float angle = 4;
  inline bool has_angle() const;
  inline void clear_angle();
  static const int kAngleFieldNumber = 4;
  inline float angle() const;
  inline void set_angle(float value);

  // required float response = 5;
  inline bool has_response() const;
  inline void clear_response();
  static const int kResponseFieldNumber = 5;
  inline float response() const;
  inline void set_response(float value);

  // required int32 octave = 6;
  inline bool has_octave() const;
  inline void clear_octave();
  static const int kOctaveFieldNumber = 6;
  inline ::google::protobuf::int32 octave() const;
  inline void set_octave(::google::protobuf::int32 value);

  // required int32 class_id = 7;
  inline bool has_class_id() const;
  inline void clear_class_id();
  static const int kClassIdFieldNumber = 7;
  inline ::google::protobuf::int32 class_id() const;
  inline void set_class_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:kp.Keypoint)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_angle();
  inline void clear_has_angle();
  inline void set_has_response();
  inline void clear_has_response();
  inline void set_has_octave();
  inline void clear_has_octave();
  inline void set_has_class_id();
  inline void clear_has_class_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  float x_;
  float y_;
  float size_;
  float angle_;
  float response_;
  ::google::protobuf::int32 octave_;
  ::google::protobuf::int32 class_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_keypoints_2eproto();
  friend void protobuf_AssignDesc_keypoints_2eproto();
  friend void protobuf_ShutdownFile_keypoints_2eproto();

  void InitAsDefaultInstance();
  static Keypoint* default_instance_;
};
// ===================================================================


// ===================================================================

// all_kp

// required uint32 size = 1;
inline bool all_kp::has_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void all_kp::set_has_size() {
  _has_bits_[0] |= 0x00000001u;
}
inline void all_kp::clear_has_size() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void all_kp::clear_size() {
  size_ = 0u;
  clear_has_size();
}
inline ::google::protobuf::uint32 all_kp::size() const {
  return size_;
}
inline void all_kp::set_size(::google::protobuf::uint32 value) {
  set_has_size();
  size_ = value;
}

// repeated .kp.Keypoint keypoint = 2;
inline int all_kp::keypoint_size() const {
  return keypoint_.size();
}
inline void all_kp::clear_keypoint() {
  keypoint_.Clear();
}
inline const ::kp::Keypoint& all_kp::keypoint(int index) const {
  return keypoint_.Get(index);
}
inline ::kp::Keypoint* all_kp::mutable_keypoint(int index) {
  return keypoint_.Mutable(index);
}
inline ::kp::Keypoint* all_kp::add_keypoint() {
  return keypoint_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::kp::Keypoint >&
all_kp::keypoint() const {
  return keypoint_;
}
inline ::google::protobuf::RepeatedPtrField< ::kp::Keypoint >*
all_kp::mutable_keypoint() {
  return &keypoint_;
}

// -------------------------------------------------------------------

// Keypoint

// required float x = 1;
inline bool Keypoint::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Keypoint::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Keypoint::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Keypoint::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Keypoint::x() const {
  return x_;
}
inline void Keypoint::set_x(float value) {
  set_has_x();
  x_ = value;
}

// required float y = 2;
inline bool Keypoint::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Keypoint::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Keypoint::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Keypoint::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Keypoint::y() const {
  return y_;
}
inline void Keypoint::set_y(float value) {
  set_has_y();
  y_ = value;
}

// required float size = 3;
inline bool Keypoint::has_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Keypoint::set_has_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Keypoint::clear_has_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Keypoint::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline float Keypoint::size() const {
  return size_;
}
inline void Keypoint::set_size(float value) {
  set_has_size();
  size_ = value;
}

// required float angle = 4;
inline bool Keypoint::has_angle() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Keypoint::set_has_angle() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Keypoint::clear_has_angle() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Keypoint::clear_angle() {
  angle_ = 0;
  clear_has_angle();
}
inline float Keypoint::angle() const {
  return angle_;
}
inline void Keypoint::set_angle(float value) {
  set_has_angle();
  angle_ = value;
}

// required float response = 5;
inline bool Keypoint::has_response() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Keypoint::set_has_response() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Keypoint::clear_has_response() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Keypoint::clear_response() {
  response_ = 0;
  clear_has_response();
}
inline float Keypoint::response() const {
  return response_;
}
inline void Keypoint::set_response(float value) {
  set_has_response();
  response_ = value;
}

// required int32 octave = 6;
inline bool Keypoint::has_octave() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Keypoint::set_has_octave() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Keypoint::clear_has_octave() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Keypoint::clear_octave() {
  octave_ = 0;
  clear_has_octave();
}
inline ::google::protobuf::int32 Keypoint::octave() const {
  return octave_;
}
inline void Keypoint::set_octave(::google::protobuf::int32 value) {
  set_has_octave();
  octave_ = value;
}

// required int32 class_id = 7;
inline bool Keypoint::has_class_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Keypoint::set_has_class_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Keypoint::clear_has_class_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Keypoint::clear_class_id() {
  class_id_ = 0;
  clear_has_class_id();
}
inline ::google::protobuf::int32 Keypoint::class_id() const {
  return class_id_;
}
inline void Keypoint::set_class_id(::google::protobuf::int32 value) {
  set_has_class_id();
  class_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace kp

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_keypoints_2eproto__INCLUDED