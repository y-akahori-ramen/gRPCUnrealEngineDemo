THIRD_PARTY_INCLUDES_START
#pragma warning (disable : 4005)
#pragma warning (disable : 4125)
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unaryDemo.proto

#include "unaryDemo.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace grpcDemo {
constexpr UnaryDemoRequest::UnaryDemoRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct UnaryDemoRequestDefaultTypeInternal {
  constexpr UnaryDemoRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~UnaryDemoRequestDefaultTypeInternal() {}
  union {
    UnaryDemoRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT UnaryDemoRequestDefaultTypeInternal _UnaryDemoRequest_default_instance_;
constexpr UnaryDemoResponse::UnaryDemoResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct UnaryDemoResponseDefaultTypeInternal {
  constexpr UnaryDemoResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~UnaryDemoResponseDefaultTypeInternal() {}
  union {
    UnaryDemoResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT UnaryDemoResponseDefaultTypeInternal _UnaryDemoResponse_default_instance_;
}  // namespace grpcDemo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_unaryDemo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_unaryDemo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_unaryDemo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_unaryDemo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::UnaryDemoRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::UnaryDemoRequest, name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::UnaryDemoResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::UnaryDemoResponse, message_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcDemo::UnaryDemoRequest)},
  { 6, -1, sizeof(::grpcDemo::UnaryDemoResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcDemo::_UnaryDemoRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcDemo::_UnaryDemoResponse_default_instance_),
};

const char descriptor_table_protodef_unaryDemo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017unaryDemo.proto\022\010grpcDemo\" \n\020UnaryDemo"
  "Request\022\014\n\004name\030\001 \001(\t\"$\n\021UnaryDemoRespon"
  "se\022\017\n\007message\030\001 \001(\t2X\n\020UnaryDemoService\022"
  "D\n\007Request\022\032.grpcDemo.UnaryDemoRequest\032\033"
  ".grpcDemo.UnaryDemoResponse\"\000B.Z,github."
  "com/y-akahori-ramen/gRPCUE4Demo/protob\006p"
  "roto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_unaryDemo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_unaryDemo_2eproto = {
  false, false, 245, descriptor_table_protodef_unaryDemo_2eproto, "unaryDemo.proto", 
  &descriptor_table_unaryDemo_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_unaryDemo_2eproto::offsets,
  file_level_metadata_unaryDemo_2eproto, file_level_enum_descriptors_unaryDemo_2eproto, file_level_service_descriptors_unaryDemo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_unaryDemo_2eproto_getter() {
  return &descriptor_table_unaryDemo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_unaryDemo_2eproto(&descriptor_table_unaryDemo_2eproto);
namespace grpcDemo {

// ===================================================================

class UnaryDemoRequest::_Internal {
 public:
};

UnaryDemoRequest::UnaryDemoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcDemo.UnaryDemoRequest)
}
UnaryDemoRequest::UnaryDemoRequest(const UnaryDemoRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcDemo.UnaryDemoRequest)
}

inline void UnaryDemoRequest::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

UnaryDemoRequest::~UnaryDemoRequest() {
  // @@protoc_insertion_point(destructor:grpcDemo.UnaryDemoRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void UnaryDemoRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UnaryDemoRequest::ArenaDtor(void* object) {
  UnaryDemoRequest* _this = reinterpret_cast< UnaryDemoRequest* >(object);
  (void)_this;
}
void UnaryDemoRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void UnaryDemoRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void UnaryDemoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcDemo.UnaryDemoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UnaryDemoRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpcDemo.UnaryDemoRequest.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* UnaryDemoRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcDemo.UnaryDemoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcDemo.UnaryDemoRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcDemo.UnaryDemoRequest)
  return target;
}

size_t UnaryDemoRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcDemo.UnaryDemoRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UnaryDemoRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    UnaryDemoRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UnaryDemoRequest::GetClassData() const { return &_class_data_; }

void UnaryDemoRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<UnaryDemoRequest *>(to)->MergeFrom(
      static_cast<const UnaryDemoRequest &>(from));
}


void UnaryDemoRequest::MergeFrom(const UnaryDemoRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcDemo.UnaryDemoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UnaryDemoRequest::CopyFrom(const UnaryDemoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcDemo.UnaryDemoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnaryDemoRequest::IsInitialized() const {
  return true;
}

void UnaryDemoRequest::InternalSwap(UnaryDemoRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, GetArenaForAllocation(),
      &other->name_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata UnaryDemoRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_unaryDemo_2eproto_getter, &descriptor_table_unaryDemo_2eproto_once,
      file_level_metadata_unaryDemo_2eproto[0]);
}

// ===================================================================

class UnaryDemoResponse::_Internal {
 public:
};

UnaryDemoResponse::UnaryDemoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcDemo.UnaryDemoResponse)
}
UnaryDemoResponse::UnaryDemoResponse(const UnaryDemoResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcDemo.UnaryDemoResponse)
}

inline void UnaryDemoResponse::SharedCtor() {
message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

UnaryDemoResponse::~UnaryDemoResponse() {
  // @@protoc_insertion_point(destructor:grpcDemo.UnaryDemoResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void UnaryDemoResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UnaryDemoResponse::ArenaDtor(void* object) {
  UnaryDemoResponse* _this = reinterpret_cast< UnaryDemoResponse* >(object);
  (void)_this;
}
void UnaryDemoResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void UnaryDemoResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void UnaryDemoResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcDemo.UnaryDemoResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UnaryDemoResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpcDemo.UnaryDemoResponse.message"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* UnaryDemoResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcDemo.UnaryDemoResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcDemo.UnaryDemoResponse.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcDemo.UnaryDemoResponse)
  return target;
}

size_t UnaryDemoResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcDemo.UnaryDemoResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UnaryDemoResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    UnaryDemoResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UnaryDemoResponse::GetClassData() const { return &_class_data_; }

void UnaryDemoResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<UnaryDemoResponse *>(to)->MergeFrom(
      static_cast<const UnaryDemoResponse &>(from));
}


void UnaryDemoResponse::MergeFrom(const UnaryDemoResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcDemo.UnaryDemoResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _internal_set_message(from._internal_message());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UnaryDemoResponse::CopyFrom(const UnaryDemoResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcDemo.UnaryDemoResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnaryDemoResponse::IsInitialized() const {
  return true;
}

void UnaryDemoResponse::InternalSwap(UnaryDemoResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &message_, GetArenaForAllocation(),
      &other->message_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata UnaryDemoResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_unaryDemo_2eproto_getter, &descriptor_table_unaryDemo_2eproto_once,
      file_level_metadata_unaryDemo_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcDemo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcDemo::UnaryDemoRequest* Arena::CreateMaybeMessage< ::grpcDemo::UnaryDemoRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcDemo::UnaryDemoRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcDemo::UnaryDemoResponse* Arena::CreateMaybeMessage< ::grpcDemo::UnaryDemoResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcDemo::UnaryDemoResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
THIRD_PARTY_INCLUDES_END
