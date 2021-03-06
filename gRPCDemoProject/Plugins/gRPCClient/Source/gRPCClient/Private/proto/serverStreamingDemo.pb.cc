THIRD_PARTY_INCLUDES_START
#pragma warning (disable : 4005)
#pragma warning (disable : 4125)
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: serverStreamingDemo.proto

#include "serverStreamingDemo.pb.h"

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
constexpr GetServerStreamingTextureRequest::GetServerStreamingTextureRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : imagename_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct GetServerStreamingTextureRequestDefaultTypeInternal {
  constexpr GetServerStreamingTextureRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GetServerStreamingTextureRequestDefaultTypeInternal() {}
  union {
    GetServerStreamingTextureRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GetServerStreamingTextureRequestDefaultTypeInternal _GetServerStreamingTextureRequest_default_instance_;
constexpr GetServerStreamingTextureResponse::GetServerStreamingTextureResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : chunk_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct GetServerStreamingTextureResponseDefaultTypeInternal {
  constexpr GetServerStreamingTextureResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GetServerStreamingTextureResponseDefaultTypeInternal() {}
  union {
    GetServerStreamingTextureResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GetServerStreamingTextureResponseDefaultTypeInternal _GetServerStreamingTextureResponse_default_instance_;
}  // namespace grpcDemo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_serverStreamingDemo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_serverStreamingDemo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_serverStreamingDemo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_serverStreamingDemo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::GetServerStreamingTextureRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::GetServerStreamingTextureRequest, imagename_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::GetServerStreamingTextureResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grpcDemo::GetServerStreamingTextureResponse, chunk_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::grpcDemo::GetServerStreamingTextureRequest)},
  { 6, -1, sizeof(::grpcDemo::GetServerStreamingTextureResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcDemo::_GetServerStreamingTextureRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcDemo::_GetServerStreamingTextureResponse_default_instance_),
};

const char descriptor_table_protodef_serverStreamingDemo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031serverStreamingDemo.proto\022\010grpcDemo\"5\n"
  " GetServerStreamingTextureRequest\022\021\n\tima"
  "geName\030\001 \001(\t\"2\n!GetServerStreamingTextur"
  "eResponse\022\r\n\005chunk\030\001 \001(\0142\207\001\n\032ServerStrea"
  "mingDemoService\022i\n\nGetTexture\022*.grpcDemo"
  ".GetServerStreamingTextureRequest\032+.grpc"
  "Demo.GetServerStreamingTextureResponse\"\000"
  "0\001B.Z,github.com/y-akahori-ramen/gRPCUE4"
  "Demo/protob\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_serverStreamingDemo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_serverStreamingDemo_2eproto = {
  false, false, 338, descriptor_table_protodef_serverStreamingDemo_2eproto, "serverStreamingDemo.proto", 
  &descriptor_table_serverStreamingDemo_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_serverStreamingDemo_2eproto::offsets,
  file_level_metadata_serverStreamingDemo_2eproto, file_level_enum_descriptors_serverStreamingDemo_2eproto, file_level_service_descriptors_serverStreamingDemo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_serverStreamingDemo_2eproto_getter() {
  return &descriptor_table_serverStreamingDemo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_serverStreamingDemo_2eproto(&descriptor_table_serverStreamingDemo_2eproto);
namespace grpcDemo {

// ===================================================================

class GetServerStreamingTextureRequest::_Internal {
 public:
};

GetServerStreamingTextureRequest::GetServerStreamingTextureRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcDemo.GetServerStreamingTextureRequest)
}
GetServerStreamingTextureRequest::GetServerStreamingTextureRequest(const GetServerStreamingTextureRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  imagename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_imagename().empty()) {
    imagename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_imagename(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcDemo.GetServerStreamingTextureRequest)
}

inline void GetServerStreamingTextureRequest::SharedCtor() {
imagename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

GetServerStreamingTextureRequest::~GetServerStreamingTextureRequest() {
  // @@protoc_insertion_point(destructor:grpcDemo.GetServerStreamingTextureRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GetServerStreamingTextureRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  imagename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetServerStreamingTextureRequest::ArenaDtor(void* object) {
  GetServerStreamingTextureRequest* _this = reinterpret_cast< GetServerStreamingTextureRequest* >(object);
  (void)_this;
}
void GetServerStreamingTextureRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetServerStreamingTextureRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GetServerStreamingTextureRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcDemo.GetServerStreamingTextureRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  imagename_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetServerStreamingTextureRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string imageName = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_imagename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpcDemo.GetServerStreamingTextureRequest.imageName"));
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

::PROTOBUF_NAMESPACE_ID::uint8* GetServerStreamingTextureRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcDemo.GetServerStreamingTextureRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string imageName = 1;
  if (!this->_internal_imagename().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_imagename().data(), static_cast<int>(this->_internal_imagename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcDemo.GetServerStreamingTextureRequest.imageName");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_imagename(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcDemo.GetServerStreamingTextureRequest)
  return target;
}

size_t GetServerStreamingTextureRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcDemo.GetServerStreamingTextureRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string imageName = 1;
  if (!this->_internal_imagename().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_imagename());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetServerStreamingTextureRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GetServerStreamingTextureRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetServerStreamingTextureRequest::GetClassData() const { return &_class_data_; }

void GetServerStreamingTextureRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<GetServerStreamingTextureRequest *>(to)->MergeFrom(
      static_cast<const GetServerStreamingTextureRequest &>(from));
}


void GetServerStreamingTextureRequest::MergeFrom(const GetServerStreamingTextureRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcDemo.GetServerStreamingTextureRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_imagename().empty()) {
    _internal_set_imagename(from._internal_imagename());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetServerStreamingTextureRequest::CopyFrom(const GetServerStreamingTextureRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcDemo.GetServerStreamingTextureRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetServerStreamingTextureRequest::IsInitialized() const {
  return true;
}

void GetServerStreamingTextureRequest::InternalSwap(GetServerStreamingTextureRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &imagename_, GetArenaForAllocation(),
      &other->imagename_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GetServerStreamingTextureRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_serverStreamingDemo_2eproto_getter, &descriptor_table_serverStreamingDemo_2eproto_once,
      file_level_metadata_serverStreamingDemo_2eproto[0]);
}

// ===================================================================

class GetServerStreamingTextureResponse::_Internal {
 public:
};

GetServerStreamingTextureResponse::GetServerStreamingTextureResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcDemo.GetServerStreamingTextureResponse)
}
GetServerStreamingTextureResponse::GetServerStreamingTextureResponse(const GetServerStreamingTextureResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  chunk_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_chunk().empty()) {
    chunk_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_chunk(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcDemo.GetServerStreamingTextureResponse)
}

inline void GetServerStreamingTextureResponse::SharedCtor() {
chunk_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

GetServerStreamingTextureResponse::~GetServerStreamingTextureResponse() {
  // @@protoc_insertion_point(destructor:grpcDemo.GetServerStreamingTextureResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GetServerStreamingTextureResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  chunk_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GetServerStreamingTextureResponse::ArenaDtor(void* object) {
  GetServerStreamingTextureResponse* _this = reinterpret_cast< GetServerStreamingTextureResponse* >(object);
  (void)_this;
}
void GetServerStreamingTextureResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetServerStreamingTextureResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GetServerStreamingTextureResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcDemo.GetServerStreamingTextureResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  chunk_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetServerStreamingTextureResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes chunk = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_chunk();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* GetServerStreamingTextureResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcDemo.GetServerStreamingTextureResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes chunk = 1;
  if (!this->_internal_chunk().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_chunk(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcDemo.GetServerStreamingTextureResponse)
  return target;
}

size_t GetServerStreamingTextureResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcDemo.GetServerStreamingTextureResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes chunk = 1;
  if (!this->_internal_chunk().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_chunk());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetServerStreamingTextureResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GetServerStreamingTextureResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetServerStreamingTextureResponse::GetClassData() const { return &_class_data_; }

void GetServerStreamingTextureResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<GetServerStreamingTextureResponse *>(to)->MergeFrom(
      static_cast<const GetServerStreamingTextureResponse &>(from));
}


void GetServerStreamingTextureResponse::MergeFrom(const GetServerStreamingTextureResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcDemo.GetServerStreamingTextureResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_chunk().empty()) {
    _internal_set_chunk(from._internal_chunk());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetServerStreamingTextureResponse::CopyFrom(const GetServerStreamingTextureResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcDemo.GetServerStreamingTextureResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetServerStreamingTextureResponse::IsInitialized() const {
  return true;
}

void GetServerStreamingTextureResponse::InternalSwap(GetServerStreamingTextureResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &chunk_, GetArenaForAllocation(),
      &other->chunk_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GetServerStreamingTextureResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_serverStreamingDemo_2eproto_getter, &descriptor_table_serverStreamingDemo_2eproto_once,
      file_level_metadata_serverStreamingDemo_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcDemo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcDemo::GetServerStreamingTextureRequest* Arena::CreateMaybeMessage< ::grpcDemo::GetServerStreamingTextureRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcDemo::GetServerStreamingTextureRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcDemo::GetServerStreamingTextureResponse* Arena::CreateMaybeMessage< ::grpcDemo::GetServerStreamingTextureResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcDemo::GetServerStreamingTextureResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
THIRD_PARTY_INCLUDES_END
