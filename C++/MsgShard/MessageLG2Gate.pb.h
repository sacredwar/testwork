// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageLG2Gate.proto

#ifndef PROTOBUF_MessageLG2Gate_2eproto__INCLUDED
#define PROTOBUF_MessageLG2Gate_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "MsgHead.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageLG2Gate_2eproto();
void protobuf_AssignDesc_MessageLG2Gate_2eproto();
void protobuf_ShutdownFile_MessageLG2Gate_2eproto();

class MsgLG2GateLoginACK;
class MsgLG2GateBindMailACK;

enum MsgLG2GateLoginACK_enResult {
  MsgLG2GateLoginACK_enResult_LG_OK = 0,
  MsgLG2GateLoginACK_enResult_LG_ERROR = 1
};
bool MsgLG2GateLoginACK_enResult_IsValid(int value);
const MsgLG2GateLoginACK_enResult MsgLG2GateLoginACK_enResult_enResult_MIN = MsgLG2GateLoginACK_enResult_LG_OK;
const MsgLG2GateLoginACK_enResult MsgLG2GateLoginACK_enResult_enResult_MAX = MsgLG2GateLoginACK_enResult_LG_ERROR;
const int MsgLG2GateLoginACK_enResult_enResult_ARRAYSIZE = MsgLG2GateLoginACK_enResult_enResult_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgLG2GateLoginACK_enResult_descriptor();
inline const ::std::string& MsgLG2GateLoginACK_enResult_Name(MsgLG2GateLoginACK_enResult value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgLG2GateLoginACK_enResult_descriptor(), value);
}
inline bool MsgLG2GateLoginACK_enResult_Parse(
    const ::std::string& name, MsgLG2GateLoginACK_enResult* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgLG2GateLoginACK_enResult>(
    MsgLG2GateLoginACK_enResult_descriptor(), name, value);
}
enum MsgLG2GateBindMailACK_enResult {
  MsgLG2GateBindMailACK_enResult_LG_OK = 0,
  MsgLG2GateBindMailACK_enResult_LG_ERRORNOTLOGIN = 1,
  MsgLG2GateBindMailACK_enResult_LG_ERROR_MAIL_IS_BINDED = 2,
  MsgLG2GateBindMailACK_enResult_LG_ERROR_ACCOUNT_IS_BINDED = 3,
  MsgLG2GateBindMailACK_enResult_LG_ERROR = 4
};
bool MsgLG2GateBindMailACK_enResult_IsValid(int value);
const MsgLG2GateBindMailACK_enResult MsgLG2GateBindMailACK_enResult_enResult_MIN = MsgLG2GateBindMailACK_enResult_LG_OK;
const MsgLG2GateBindMailACK_enResult MsgLG2GateBindMailACK_enResult_enResult_MAX = MsgLG2GateBindMailACK_enResult_LG_ERROR;
const int MsgLG2GateBindMailACK_enResult_enResult_ARRAYSIZE = MsgLG2GateBindMailACK_enResult_enResult_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgLG2GateBindMailACK_enResult_descriptor();
inline const ::std::string& MsgLG2GateBindMailACK_enResult_Name(MsgLG2GateBindMailACK_enResult value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgLG2GateBindMailACK_enResult_descriptor(), value);
}
inline bool MsgLG2GateBindMailACK_enResult_Parse(
    const ::std::string& name, MsgLG2GateBindMailACK_enResult* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgLG2GateBindMailACK_enResult>(
    MsgLG2GateBindMailACK_enResult_descriptor(), name, value);
}
// ===================================================================

class MsgLG2GateLoginACK : public ::google::protobuf::Message {
 public:
  MsgLG2GateLoginACK();
  virtual ~MsgLG2GateLoginACK();
  
  MsgLG2GateLoginACK(const MsgLG2GateLoginACK& from);
  
  inline MsgLG2GateLoginACK& operator=(const MsgLG2GateLoginACK& from) {
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
  static const MsgLG2GateLoginACK& default_instance();
  
  void Swap(MsgLG2GateLoginACK* other);
  
  // implements Message ----------------------------------------------
  
  MsgLG2GateLoginACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgLG2GateLoginACK& from);
  void MergeFrom(const MsgLG2GateLoginACK& from);
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
  
  typedef MsgLG2GateLoginACK_enResult enResult;
  static const enResult LG_OK = MsgLG2GateLoginACK_enResult_LG_OK;
  static const enResult LG_ERROR = MsgLG2GateLoginACK_enResult_LG_ERROR;
  static inline bool enResult_IsValid(int value) {
    return MsgLG2GateLoginACK_enResult_IsValid(value);
  }
  static const enResult enResult_MIN =
    MsgLG2GateLoginACK_enResult_enResult_MIN;
  static const enResult enResult_MAX =
    MsgLG2GateLoginACK_enResult_enResult_MAX;
  static const int enResult_ARRAYSIZE =
    MsgLG2GateLoginACK_enResult_enResult_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  enResult_descriptor() {
    return MsgLG2GateLoginACK_enResult_descriptor();
  }
  static inline const ::std::string& enResult_Name(enResult value) {
    return MsgLG2GateLoginACK_enResult_Name(value);
  }
  static inline bool enResult_Parse(const ::std::string& name,
      enResult* value) {
    return MsgLG2GateLoginACK_enResult_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required uint64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint64 id() const;
  inline void set_id(::google::protobuf::uint64 value);
  
  // required uint64 account = 2;
  inline bool has_account() const;
  inline void clear_account();
  static const int kAccountFieldNumber = 2;
  inline ::google::protobuf::uint64 account() const;
  inline void set_account(::google::protobuf::uint64 value);
  
  // required .MsgLG2GateLoginACK.enResult result = 3;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 3;
  inline ::MsgLG2GateLoginACK_enResult result() const;
  inline void set_result(::MsgLG2GateLoginACK_enResult value);
  
  // @@protoc_insertion_point(class_scope:MsgLG2GateLoginACK)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_account();
  inline void clear_has_account();
  inline void set_has_result();
  inline void clear_has_result();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 id_;
  ::google::protobuf::uint64 account_;
  int result_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_MessageLG2Gate_2eproto();
  friend void protobuf_AssignDesc_MessageLG2Gate_2eproto();
  friend void protobuf_ShutdownFile_MessageLG2Gate_2eproto();
  
  void InitAsDefaultInstance();
  static MsgLG2GateLoginACK* default_instance_;
};
// -------------------------------------------------------------------

class MsgLG2GateBindMailACK : public ::google::protobuf::Message {
 public:
  MsgLG2GateBindMailACK();
  virtual ~MsgLG2GateBindMailACK();
  
  MsgLG2GateBindMailACK(const MsgLG2GateBindMailACK& from);
  
  inline MsgLG2GateBindMailACK& operator=(const MsgLG2GateBindMailACK& from) {
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
  static const MsgLG2GateBindMailACK& default_instance();
  
  void Swap(MsgLG2GateBindMailACK* other);
  
  // implements Message ----------------------------------------------
  
  MsgLG2GateBindMailACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgLG2GateBindMailACK& from);
  void MergeFrom(const MsgLG2GateBindMailACK& from);
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
  
  typedef MsgLG2GateBindMailACK_enResult enResult;
  static const enResult LG_OK = MsgLG2GateBindMailACK_enResult_LG_OK;
  static const enResult LG_ERRORNOTLOGIN = MsgLG2GateBindMailACK_enResult_LG_ERRORNOTLOGIN;
  static const enResult LG_ERROR_MAIL_IS_BINDED = MsgLG2GateBindMailACK_enResult_LG_ERROR_MAIL_IS_BINDED;
  static const enResult LG_ERROR_ACCOUNT_IS_BINDED = MsgLG2GateBindMailACK_enResult_LG_ERROR_ACCOUNT_IS_BINDED;
  static const enResult LG_ERROR = MsgLG2GateBindMailACK_enResult_LG_ERROR;
  static inline bool enResult_IsValid(int value) {
    return MsgLG2GateBindMailACK_enResult_IsValid(value);
  }
  static const enResult enResult_MIN =
    MsgLG2GateBindMailACK_enResult_enResult_MIN;
  static const enResult enResult_MAX =
    MsgLG2GateBindMailACK_enResult_enResult_MAX;
  static const int enResult_ARRAYSIZE =
    MsgLG2GateBindMailACK_enResult_enResult_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  enResult_descriptor() {
    return MsgLG2GateBindMailACK_enResult_descriptor();
  }
  static inline const ::std::string& enResult_Name(enResult value) {
    return MsgLG2GateBindMailACK_enResult_Name(value);
  }
  static inline bool enResult_Parse(const ::std::string& name,
      enResult* value) {
    return MsgLG2GateBindMailACK_enResult_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required uint64 account = 2;
  inline bool has_account() const;
  inline void clear_account();
  static const int kAccountFieldNumber = 2;
  inline ::google::protobuf::uint64 account() const;
  inline void set_account(::google::protobuf::uint64 value);
  
  // required .MsgLG2GateBindMailACK.enResult result = 3;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 3;
  inline ::MsgLG2GateBindMailACK_enResult result() const;
  inline void set_result(::MsgLG2GateBindMailACK_enResult value);
  
  // @@protoc_insertion_point(class_scope:MsgLG2GateBindMailACK)
 private:
  inline void set_has_account();
  inline void clear_has_account();
  inline void set_has_result();
  inline void clear_has_result();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 account_;
  int result_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_MessageLG2Gate_2eproto();
  friend void protobuf_AssignDesc_MessageLG2Gate_2eproto();
  friend void protobuf_ShutdownFile_MessageLG2Gate_2eproto();
  
  void InitAsDefaultInstance();
  static MsgLG2GateBindMailACK* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgLG2GateLoginACK

// required uint64 id = 1;
inline bool MsgLG2GateLoginACK::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgLG2GateLoginACK::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgLG2GateLoginACK::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgLG2GateLoginACK::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 MsgLG2GateLoginACK::id() const {
  return id_;
}
inline void MsgLG2GateLoginACK::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
}

// required uint64 account = 2;
inline bool MsgLG2GateLoginACK::has_account() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgLG2GateLoginACK::set_has_account() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgLG2GateLoginACK::clear_has_account() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgLG2GateLoginACK::clear_account() {
  account_ = GOOGLE_ULONGLONG(0);
  clear_has_account();
}
inline ::google::protobuf::uint64 MsgLG2GateLoginACK::account() const {
  return account_;
}
inline void MsgLG2GateLoginACK::set_account(::google::protobuf::uint64 value) {
  set_has_account();
  account_ = value;
}

// required .MsgLG2GateLoginACK.enResult result = 3;
inline bool MsgLG2GateLoginACK::has_result() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgLG2GateLoginACK::set_has_result() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgLG2GateLoginACK::clear_has_result() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgLG2GateLoginACK::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::MsgLG2GateLoginACK_enResult MsgLG2GateLoginACK::result() const {
  return static_cast< ::MsgLG2GateLoginACK_enResult >(result_);
}
inline void MsgLG2GateLoginACK::set_result(::MsgLG2GateLoginACK_enResult value) {
  GOOGLE_DCHECK(::MsgLG2GateLoginACK_enResult_IsValid(value));
  set_has_result();
  result_ = value;
}

// -------------------------------------------------------------------

// MsgLG2GateBindMailACK

// required uint64 account = 2;
inline bool MsgLG2GateBindMailACK::has_account() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgLG2GateBindMailACK::set_has_account() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgLG2GateBindMailACK::clear_has_account() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgLG2GateBindMailACK::clear_account() {
  account_ = GOOGLE_ULONGLONG(0);
  clear_has_account();
}
inline ::google::protobuf::uint64 MsgLG2GateBindMailACK::account() const {
  return account_;
}
inline void MsgLG2GateBindMailACK::set_account(::google::protobuf::uint64 value) {
  set_has_account();
  account_ = value;
}

// required .MsgLG2GateBindMailACK.enResult result = 3;
inline bool MsgLG2GateBindMailACK::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgLG2GateBindMailACK::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgLG2GateBindMailACK::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgLG2GateBindMailACK::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::MsgLG2GateBindMailACK_enResult MsgLG2GateBindMailACK::result() const {
  return static_cast< ::MsgLG2GateBindMailACK_enResult >(result_);
}
inline void MsgLG2GateBindMailACK::set_result(::MsgLG2GateBindMailACK_enResult value) {
  GOOGLE_DCHECK(::MsgLG2GateBindMailACK_enResult_IsValid(value));
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MsgLG2GateLoginACK_enResult>() {
  return ::MsgLG2GateLoginACK_enResult_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MsgLG2GateBindMailACK_enResult>() {
  return ::MsgLG2GateBindMailACK_enResult_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageLG2Gate_2eproto__INCLUDED
