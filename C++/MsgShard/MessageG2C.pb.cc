// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageG2C.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MsgG2CLoginMacACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgG2CLoginMacACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageG2C_2eproto() {
  protobuf_AddDesc_MessageG2C_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageG2C.proto");
  GOOGLE_CHECK(file != NULL);
  MsgG2CLoginMacACK_descriptor_ = file->message_type(0);
  static const int MsgG2CLoginMacACK_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgG2CLoginMacACK, account_),
  };
  MsgG2CLoginMacACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgG2CLoginMacACK_descriptor_,
      MsgG2CLoginMacACK::default_instance_,
      MsgG2CLoginMacACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgG2CLoginMacACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgG2CLoginMacACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgG2CLoginMacACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageG2C_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgG2CLoginMacACK_descriptor_, &MsgG2CLoginMacACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageG2C_2eproto() {
  delete MsgG2CLoginMacACK::default_instance_;
  delete MsgG2CLoginMacACK_reflection_;
}

void protobuf_AddDesc_MessageG2C_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_MsgHead_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020MessageG2C.proto\032\rMsgHead.proto\"$\n\021Msg"
    "G2CLoginMacACK\022\017\n\007account\030\001 \002(\003", 71);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageG2C.proto", &protobuf_RegisterTypes);
  MsgG2CLoginMacACK::default_instance_ = new MsgG2CLoginMacACK();
  MsgG2CLoginMacACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageG2C_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageG2C_2eproto {
  StaticDescriptorInitializer_MessageG2C_2eproto() {
    protobuf_AddDesc_MessageG2C_2eproto();
  }
} static_descriptor_initializer_MessageG2C_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MsgG2CLoginMacACK::kAccountFieldNumber;
#endif  // !_MSC_VER

MsgG2CLoginMacACK::MsgG2CLoginMacACK()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MsgG2CLoginMacACK::InitAsDefaultInstance() {
}

MsgG2CLoginMacACK::MsgG2CLoginMacACK(const MsgG2CLoginMacACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MsgG2CLoginMacACK::SharedCtor() {
  _cached_size_ = 0;
  account_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgG2CLoginMacACK::~MsgG2CLoginMacACK() {
  SharedDtor();
}

void MsgG2CLoginMacACK::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MsgG2CLoginMacACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgG2CLoginMacACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgG2CLoginMacACK_descriptor_;
}

const MsgG2CLoginMacACK& MsgG2CLoginMacACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageG2C_2eproto();  return *default_instance_;
}

MsgG2CLoginMacACK* MsgG2CLoginMacACK::default_instance_ = NULL;

MsgG2CLoginMacACK* MsgG2CLoginMacACK::New() const {
  return new MsgG2CLoginMacACK;
}

void MsgG2CLoginMacACK::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    account_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgG2CLoginMacACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 account = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &account_)));
          set_has_account();
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

void MsgG2CLoginMacACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 account = 1;
  if (has_account()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->account(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgG2CLoginMacACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 account = 1;
  if (has_account()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->account(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgG2CLoginMacACK::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 account = 1;
    if (has_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->account());
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

void MsgG2CLoginMacACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgG2CLoginMacACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgG2CLoginMacACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgG2CLoginMacACK::MergeFrom(const MsgG2CLoginMacACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_account()) {
      set_account(from.account());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgG2CLoginMacACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgG2CLoginMacACK::CopyFrom(const MsgG2CLoginMacACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgG2CLoginMacACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void MsgG2CLoginMacACK::Swap(MsgG2CLoginMacACK* other) {
  if (other != this) {
    std::swap(account_, other->account_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgG2CLoginMacACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgG2CLoginMacACK_descriptor_;
  metadata.reflection = MsgG2CLoginMacACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)