// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageC2Gate.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MsgC2GateLoginReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgC2GateLoginReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* MsgC2GateCreateAcountReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgC2GateCreateAcountReq_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageC2Gate_2eproto() {
  protobuf_AddDesc_MessageC2Gate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageC2Gate.proto");
  GOOGLE_CHECK(file != NULL);
  MsgC2GateLoginReq_descriptor_ = file->message_type(0);
  static const int MsgC2GateLoginReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateLoginReq, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateLoginReq, password_),
  };
  MsgC2GateLoginReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgC2GateLoginReq_descriptor_,
      MsgC2GateLoginReq::default_instance_,
      MsgC2GateLoginReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateLoginReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateLoginReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgC2GateLoginReq));
  MsgC2GateCreateAcountReq_descriptor_ = file->message_type(1);
  static const int MsgC2GateCreateAcountReq_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateCreateAcountReq, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateCreateAcountReq, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateCreateAcountReq, password_),
  };
  MsgC2GateCreateAcountReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgC2GateCreateAcountReq_descriptor_,
      MsgC2GateCreateAcountReq::default_instance_,
      MsgC2GateCreateAcountReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateCreateAcountReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgC2GateCreateAcountReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgC2GateCreateAcountReq));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageC2Gate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgC2GateLoginReq_descriptor_, &MsgC2GateLoginReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgC2GateCreateAcountReq_descriptor_, &MsgC2GateCreateAcountReq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageC2Gate_2eproto() {
  delete MsgC2GateLoginReq::default_instance_;
  delete MsgC2GateLoginReq_reflection_;
  delete MsgC2GateCreateAcountReq::default_instance_;
  delete MsgC2GateCreateAcountReq_reflection_;
}

void protobuf_AddDesc_MessageC2Gate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_MsgHead_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023MessageC2Gate.proto\032\rMsgHead.proto\"1\n\021"
    "MsgC2GateLoginReq\022\n\n\002id\030\001 \002(\t\022\020\n\010passwor"
    "d\030\002 \002(\t\"F\n\030MsgC2GateCreateAcountReq\022\n\n\002i"
    "d\030\001 \002(\t\022\014\n\004name\030\002 \002(\t\022\020\n\010password\030\003 \002(\t", 159);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageC2Gate.proto", &protobuf_RegisterTypes);
  MsgC2GateLoginReq::default_instance_ = new MsgC2GateLoginReq();
  MsgC2GateCreateAcountReq::default_instance_ = new MsgC2GateCreateAcountReq();
  MsgC2GateLoginReq::default_instance_->InitAsDefaultInstance();
  MsgC2GateCreateAcountReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageC2Gate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageC2Gate_2eproto {
  StaticDescriptorInitializer_MessageC2Gate_2eproto() {
    protobuf_AddDesc_MessageC2Gate_2eproto();
  }
} static_descriptor_initializer_MessageC2Gate_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MsgC2GateLoginReq::kIdFieldNumber;
const int MsgC2GateLoginReq::kPasswordFieldNumber;
#endif  // !_MSC_VER

MsgC2GateLoginReq::MsgC2GateLoginReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgC2GateLoginReq::InitAsDefaultInstance() {
}

MsgC2GateLoginReq::MsgC2GateLoginReq(const MsgC2GateLoginReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgC2GateLoginReq::SharedCtor() {
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgC2GateLoginReq::~MsgC2GateLoginReq() {
  SharedDtor();
}

void MsgC2GateLoginReq::SharedDtor() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void MsgC2GateLoginReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgC2GateLoginReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgC2GateLoginReq_descriptor_;
}

const MsgC2GateLoginReq& MsgC2GateLoginReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageC2Gate_2eproto();  return *default_instance_;
}

MsgC2GateLoginReq* MsgC2GateLoginReq::default_instance_ = NULL;

MsgC2GateLoginReq* MsgC2GateLoginReq::New() const {
  return new MsgC2GateLoginReq;
}

void MsgC2GateLoginReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::kEmptyString) {
        id_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgC2GateLoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }
      
      // required string password = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgC2GateLoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->id(), output);
  }
  
  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->password(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgC2GateLoginReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }
  
  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->password(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgC2GateLoginReq::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }
    
    // required string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgC2GateLoginReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgC2GateLoginReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgC2GateLoginReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgC2GateLoginReq::MergeFrom(const MsgC2GateLoginReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgC2GateLoginReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgC2GateLoginReq::CopyFrom(const MsgC2GateLoginReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgC2GateLoginReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void MsgC2GateLoginReq::Swap(MsgC2GateLoginReq* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgC2GateLoginReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgC2GateLoginReq_descriptor_;
  metadata.reflection = MsgC2GateLoginReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MsgC2GateCreateAcountReq::kIdFieldNumber;
const int MsgC2GateCreateAcountReq::kNameFieldNumber;
const int MsgC2GateCreateAcountReq::kPasswordFieldNumber;
#endif  // !_MSC_VER

MsgC2GateCreateAcountReq::MsgC2GateCreateAcountReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgC2GateCreateAcountReq::InitAsDefaultInstance() {
}

MsgC2GateCreateAcountReq::MsgC2GateCreateAcountReq(const MsgC2GateCreateAcountReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgC2GateCreateAcountReq::SharedCtor() {
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgC2GateCreateAcountReq::~MsgC2GateCreateAcountReq() {
  SharedDtor();
}

void MsgC2GateCreateAcountReq::SharedDtor() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void MsgC2GateCreateAcountReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgC2GateCreateAcountReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgC2GateCreateAcountReq_descriptor_;
}

const MsgC2GateCreateAcountReq& MsgC2GateCreateAcountReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageC2Gate_2eproto();  return *default_instance_;
}

MsgC2GateCreateAcountReq* MsgC2GateCreateAcountReq::default_instance_ = NULL;

MsgC2GateCreateAcountReq* MsgC2GateCreateAcountReq::New() const {
  return new MsgC2GateCreateAcountReq;
}

void MsgC2GateCreateAcountReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::kEmptyString) {
        id_->clear();
      }
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgC2GateCreateAcountReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }
      
      // required string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_password;
        break;
      }
      
      // required string password = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgC2GateCreateAcountReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->id(), output);
  }
  
  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }
  
  // required string password = 3;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->password(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgC2GateCreateAcountReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }
  
  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }
  
  // required string password = 3;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->password(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgC2GateCreateAcountReq::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }
    
    // required string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }
    
    // required string password = 3;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgC2GateCreateAcountReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgC2GateCreateAcountReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgC2GateCreateAcountReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgC2GateCreateAcountReq::MergeFrom(const MsgC2GateCreateAcountReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgC2GateCreateAcountReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgC2GateCreateAcountReq::CopyFrom(const MsgC2GateCreateAcountReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgC2GateCreateAcountReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void MsgC2GateCreateAcountReq::Swap(MsgC2GateCreateAcountReq* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(name_, other->name_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgC2GateCreateAcountReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgC2GateCreateAcountReq_descriptor_;
  metadata.reflection = MsgC2GateCreateAcountReq_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
