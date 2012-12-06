// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageC2G.proto

#ifndef PROTOBUF_MessageC2G_2eproto__INCLUDED
#define PROTOBUF_MessageC2G_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageC2G_2eproto();
void protobuf_AssignDesc_MessageC2G_2eproto();
void protobuf_ShutdownFile_MessageC2G_2eproto();

class MsgC2GateLoginReq;
class MsgC2GateCreateAcountReq;
class MsgC2GateLoginMacReq;
class MsgBindMailReq;

// ===================================================================

class MsgC2GateLoginReq : public ::google::protobuf::Message {
 public:
  MsgC2GateLoginReq();
  virtual ~MsgC2GateLoginReq();
  
  MsgC2GateLoginReq(const MsgC2GateLoginReq& from);
  
  inline MsgC2GateLoginReq& operator=(const MsgC2GateLoginReq& from) {
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
  static const MsgC2GateLoginReq& default_instance();
  
  void Swap(MsgC2GateLoginReq* other);
  
  // implements Message ----------------------------------------------
  
  MsgC2GateLoginReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgC2GateLoginReq& from);
  void MergeFrom(const MsgC2GateLoginReq& from);
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
  
  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  
  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  
  // @@protoc_insertion_point(class_scope:MsgC2GateLoginReq)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_password();
  inline void clear_has_password();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* id_;
  ::std::string* password_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_MessageC2G_2eproto();
  friend void protobuf_AssignDesc_MessageC2G_2eproto();
  friend void protobuf_ShutdownFile_MessageC2G_2eproto();
  
  void InitAsDefaultInstance();
  static MsgC2GateLoginReq* default_instance_;
};
// -------------------------------------------------------------------

class MsgC2GateCreateAcountReq : public ::google::protobuf::Message {
 public:
  MsgC2GateCreateAcountReq();
  virtual ~MsgC2GateCreateAcountReq();
  
  MsgC2GateCreateAcountReq(const MsgC2GateCreateAcountReq& from);
  
  inline MsgC2GateCreateAcountReq& operator=(const MsgC2GateCreateAcountReq& from) {
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
  static const MsgC2GateCreateAcountReq& default_instance();
  
  void Swap(MsgC2GateCreateAcountReq* other);
  
  // implements Message ----------------------------------------------
  
  MsgC2GateCreateAcountReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgC2GateCreateAcountReq& from);
  void MergeFrom(const MsgC2GateCreateAcountReq& from);
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
  
  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  
  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string password = 3;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 3;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  
  // @@protoc_insertion_point(class_scope:MsgC2GateCreateAcountReq)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_password();
  inline void clear_has_password();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* id_;
  ::std::string* name_;
  ::std::string* password_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_MessageC2G_2eproto();
  friend void protobuf_AssignDesc_MessageC2G_2eproto();
  friend void protobuf_ShutdownFile_MessageC2G_2eproto();
  
  void InitAsDefaultInstance();
  static MsgC2GateCreateAcountReq* default_instance_;
};
// -------------------------------------------------------------------

class MsgC2GateLoginMacReq : public ::google::protobuf::Message {
 public:
  MsgC2GateLoginMacReq();
  virtual ~MsgC2GateLoginMacReq();
  
  MsgC2GateLoginMacReq(const MsgC2GateLoginMacReq& from);
  
  inline MsgC2GateLoginMacReq& operator=(const MsgC2GateLoginMacReq& from) {
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
  static const MsgC2GateLoginMacReq& default_instance();
  
  void Swap(MsgC2GateLoginMacReq* other);
  
  // implements Message ----------------------------------------------
  
  MsgC2GateLoginMacReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgC2GateLoginMacReq& from);
  void MergeFrom(const MsgC2GateLoginMacReq& from);
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
  
  // required string Mac = 1;
  inline bool has_mac() const;
  inline void clear_mac();
  static const int kMacFieldNumber = 1;
  inline const ::std::string& mac() const;
  inline void set_mac(const ::std::string& value);
  inline void set_mac(const char* value);
  inline void set_mac(const char* value, size_t size);
  inline ::std::string* mutable_mac();
  inline ::std::string* release_mac();
  
  // @@protoc_insertion_point(class_scope:MsgC2GateLoginMacReq)
 private:
  inline void set_has_mac();
  inline void clear_has_mac();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* mac_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_MessageC2G_2eproto();
  friend void protobuf_AssignDesc_MessageC2G_2eproto();
  friend void protobuf_ShutdownFile_MessageC2G_2eproto();
  
  void InitAsDefaultInstance();
  static MsgC2GateLoginMacReq* default_instance_;
};
// -------------------------------------------------------------------

class MsgBindMailReq : public ::google::protobuf::Message {
 public:
  MsgBindMailReq();
  virtual ~MsgBindMailReq();
  
  MsgBindMailReq(const MsgBindMailReq& from);
  
  inline MsgBindMailReq& operator=(const MsgBindMailReq& from) {
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
  static const MsgBindMailReq& default_instance();
  
  void Swap(MsgBindMailReq* other);
  
  // implements Message ----------------------------------------------
  
  MsgBindMailReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgBindMailReq& from);
  void MergeFrom(const MsgBindMailReq& from);
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
  
  // required uint64 account = 1;
  inline bool has_account() const;
  inline void clear_account();
  static const int kAccountFieldNumber = 1;
  inline ::google::protobuf::uint64 account() const;
  inline void set_account(::google::protobuf::uint64 value);
  
  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string password = 3;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 3;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  
  // @@protoc_insertion_point(class_scope:MsgBindMailReq)
 private:
  inline void set_has_account();
  inline void clear_has_account();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_password();
  inline void clear_has_password();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 account_;
  ::std::string* name_;
  ::std::string* password_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_MessageC2G_2eproto();
  friend void protobuf_AssignDesc_MessageC2G_2eproto();
  friend void protobuf_ShutdownFile_MessageC2G_2eproto();
  
  void InitAsDefaultInstance();
  static MsgBindMailReq* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgC2GateLoginReq

// required string id = 1;
inline bool MsgC2GateLoginReq::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgC2GateLoginReq::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgC2GateLoginReq::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgC2GateLoginReq::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& MsgC2GateLoginReq::id() const {
  return *id_;
}
inline void MsgC2GateLoginReq::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void MsgC2GateLoginReq::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void MsgC2GateLoginReq::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgC2GateLoginReq::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* MsgC2GateLoginReq::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string password = 2;
inline bool MsgC2GateLoginReq::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgC2GateLoginReq::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgC2GateLoginReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgC2GateLoginReq::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& MsgC2GateLoginReq::password() const {
  return *password_;
}
inline void MsgC2GateLoginReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void MsgC2GateLoginReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void MsgC2GateLoginReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgC2GateLoginReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* MsgC2GateLoginReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// MsgC2GateCreateAcountReq

// required string id = 1;
inline bool MsgC2GateCreateAcountReq::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgC2GateCreateAcountReq::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgC2GateCreateAcountReq::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgC2GateCreateAcountReq::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& MsgC2GateCreateAcountReq::id() const {
  return *id_;
}
inline void MsgC2GateCreateAcountReq::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void MsgC2GateCreateAcountReq::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void MsgC2GateCreateAcountReq::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgC2GateCreateAcountReq::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* MsgC2GateCreateAcountReq::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string name = 2;
inline bool MsgC2GateCreateAcountReq::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgC2GateCreateAcountReq::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgC2GateCreateAcountReq::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgC2GateCreateAcountReq::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& MsgC2GateCreateAcountReq::name() const {
  return *name_;
}
inline void MsgC2GateCreateAcountReq::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MsgC2GateCreateAcountReq::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MsgC2GateCreateAcountReq::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgC2GateCreateAcountReq::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* MsgC2GateCreateAcountReq::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string password = 3;
inline bool MsgC2GateCreateAcountReq::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgC2GateCreateAcountReq::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgC2GateCreateAcountReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgC2GateCreateAcountReq::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& MsgC2GateCreateAcountReq::password() const {
  return *password_;
}
inline void MsgC2GateCreateAcountReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void MsgC2GateCreateAcountReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void MsgC2GateCreateAcountReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgC2GateCreateAcountReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* MsgC2GateCreateAcountReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// MsgC2GateLoginMacReq

// required string Mac = 1;
inline bool MsgC2GateLoginMacReq::has_mac() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgC2GateLoginMacReq::set_has_mac() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgC2GateLoginMacReq::clear_has_mac() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgC2GateLoginMacReq::clear_mac() {
  if (mac_ != &::google::protobuf::internal::kEmptyString) {
    mac_->clear();
  }
  clear_has_mac();
}
inline const ::std::string& MsgC2GateLoginMacReq::mac() const {
  return *mac_;
}
inline void MsgC2GateLoginMacReq::set_mac(const ::std::string& value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void MsgC2GateLoginMacReq::set_mac(const char* value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void MsgC2GateLoginMacReq::set_mac(const char* value, size_t size) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgC2GateLoginMacReq::mutable_mac() {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  return mac_;
}
inline ::std::string* MsgC2GateLoginMacReq::release_mac() {
  clear_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mac_;
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// MsgBindMailReq

// required uint64 account = 1;
inline bool MsgBindMailReq::has_account() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgBindMailReq::set_has_account() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgBindMailReq::clear_has_account() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgBindMailReq::clear_account() {
  account_ = GOOGLE_ULONGLONG(0);
  clear_has_account();
}
inline ::google::protobuf::uint64 MsgBindMailReq::account() const {
  return account_;
}
inline void MsgBindMailReq::set_account(::google::protobuf::uint64 value) {
  set_has_account();
  account_ = value;
}

// required string name = 2;
inline bool MsgBindMailReq::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgBindMailReq::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgBindMailReq::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgBindMailReq::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& MsgBindMailReq::name() const {
  return *name_;
}
inline void MsgBindMailReq::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MsgBindMailReq::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MsgBindMailReq::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBindMailReq::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* MsgBindMailReq::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string password = 3;
inline bool MsgBindMailReq::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgBindMailReq::set_has_password() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgBindMailReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgBindMailReq::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& MsgBindMailReq::password() const {
  return *password_;
}
inline void MsgBindMailReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void MsgBindMailReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void MsgBindMailReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBindMailReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* MsgBindMailReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageC2G_2eproto__INCLUDED