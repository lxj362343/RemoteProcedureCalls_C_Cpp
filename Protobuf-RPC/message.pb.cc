// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

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
namespace prptopkg {
class nillDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<nill> _instance;
} _nill_default_instance_;
class outputDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<output> _instance;
} _output_default_instance_;
class inputDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<input> _instance;
} _input_default_instance_;
}  // namespace prptopkg
static void InitDefaultsscc_info_input_message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::prptopkg::_input_default_instance_;
    new (ptr) ::prptopkg::input();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::prptopkg::input::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_input_message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_input_message_2eproto}, {}};

static void InitDefaultsscc_info_nill_message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::prptopkg::_nill_default_instance_;
    new (ptr) ::prptopkg::nill();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::prptopkg::nill::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_nill_message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_nill_message_2eproto}, {}};

static void InitDefaultsscc_info_output_message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::prptopkg::_output_default_instance_;
    new (ptr) ::prptopkg::output();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::prptopkg::output::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_output_message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_output_message_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_message_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_message_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_message_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::prptopkg::nill, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::prptopkg::nill, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::prptopkg::output, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::prptopkg::output, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::prptopkg::output, n_),
  0,
  PROTOBUF_FIELD_OFFSET(::prptopkg::input, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::prptopkg::input, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::prptopkg::input, a_),
  PROTOBUF_FIELD_OFFSET(::prptopkg::input, b_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::prptopkg::nill)},
  { 5, 11, sizeof(::prptopkg::output)},
  { 12, 19, sizeof(::prptopkg::input)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::prptopkg::_nill_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::prptopkg::_output_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::prptopkg::_input_default_instance_),
};

const char descriptor_table_protodef_message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rmessage.proto\022\010prptopkg\"\006\n\004nill\"\023\n\006out"
  "put\022\t\n\001n\030\001 \002(\005\"\035\n\005input\022\t\n\001a\030\001 \002(\005\022\t\n\001b\030"
  "\002 \002(\0052Z\n\004srvc\022(\n\003add\022\017.prptopkg.input\032\020."
  "prptopkg.output\022(\n\004echo\022\016.prptopkg.nill\032"
  "\020.prptopkg.output"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_message_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_message_2eproto_sccs[3] = {
  &scc_info_input_message_2eproto.base,
  &scc_info_nill_message_2eproto.base,
  &scc_info_output_message_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_message_2eproto_once;
static bool descriptor_table_message_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_message_2eproto = {
  &descriptor_table_message_2eproto_initialized, descriptor_table_protodef_message_2eproto, "message.proto", 177,
  &descriptor_table_message_2eproto_once, descriptor_table_message_2eproto_sccs, descriptor_table_message_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_message_2eproto::offsets,
  file_level_metadata_message_2eproto, 3, file_level_enum_descriptors_message_2eproto, file_level_service_descriptors_message_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_message_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_message_2eproto), true);
namespace prptopkg {

// ===================================================================

void nill::InitAsDefaultInstance() {
}
class nill::_Internal {
 public:
  using HasBits = decltype(std::declval<nill>()._has_bits_);
};

nill::nill()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:prptopkg.nill)
}
nill::nill(const nill& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:prptopkg.nill)
}

void nill::SharedCtor() {
}

nill::~nill() {
  // @@protoc_insertion_point(destructor:prptopkg.nill)
  SharedDtor();
}

void nill::SharedDtor() {
}

void nill::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const nill& nill::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_nill_message_2eproto.base);
  return *internal_default_instance();
}


void nill::Clear() {
// @@protoc_insertion_point(message_clear_start:prptopkg.nill)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* nill::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* nill::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:prptopkg.nill)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:prptopkg.nill)
  return target;
}

size_t nill::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:prptopkg.nill)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void nill::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:prptopkg.nill)
  GOOGLE_DCHECK_NE(&from, this);
  const nill* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<nill>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:prptopkg.nill)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:prptopkg.nill)
    MergeFrom(*source);
  }
}

void nill::MergeFrom(const nill& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:prptopkg.nill)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void nill::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:prptopkg.nill)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void nill::CopyFrom(const nill& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:prptopkg.nill)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool nill::IsInitialized() const {
  return true;
}

void nill::InternalSwap(nill* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata nill::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void output::InitAsDefaultInstance() {
}
class output::_Internal {
 public:
  using HasBits = decltype(std::declval<output>()._has_bits_);
  static void set_has_n(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

output::output()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:prptopkg.output)
}
output::output(const output& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  n_ = from.n_;
  // @@protoc_insertion_point(copy_constructor:prptopkg.output)
}

void output::SharedCtor() {
  n_ = 0;
}

output::~output() {
  // @@protoc_insertion_point(destructor:prptopkg.output)
  SharedDtor();
}

void output::SharedDtor() {
}

void output::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const output& output::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_output_message_2eproto.base);
  return *internal_default_instance();
}


void output::Clear() {
// @@protoc_insertion_point(message_clear_start:prptopkg.output)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  n_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* output::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 n = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_n(&has_bits);
          n_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* output::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:prptopkg.output)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 n = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_n(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:prptopkg.output)
  return target;
}

size_t output::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:prptopkg.output)
  size_t total_size = 0;

  // required int32 n = 1;
  if (_internal_has_n()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_n());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void output::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:prptopkg.output)
  GOOGLE_DCHECK_NE(&from, this);
  const output* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<output>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:prptopkg.output)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:prptopkg.output)
    MergeFrom(*source);
  }
}

void output::MergeFrom(const output& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:prptopkg.output)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_n()) {
    _internal_set_n(from._internal_n());
  }
}

void output::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:prptopkg.output)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void output::CopyFrom(const output& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:prptopkg.output)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool output::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void output::InternalSwap(output* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(n_, other->n_);
}

::PROTOBUF_NAMESPACE_ID::Metadata output::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void input::InitAsDefaultInstance() {
}
class input::_Internal {
 public:
  using HasBits = decltype(std::declval<input>()._has_bits_);
  static void set_has_a(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_b(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

input::input()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:prptopkg.input)
}
input::input(const input& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&a_, &from.a_,
    static_cast<size_t>(reinterpret_cast<char*>(&b_) -
    reinterpret_cast<char*>(&a_)) + sizeof(b_));
  // @@protoc_insertion_point(copy_constructor:prptopkg.input)
}

void input::SharedCtor() {
  ::memset(&a_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&b_) -
      reinterpret_cast<char*>(&a_)) + sizeof(b_));
}

input::~input() {
  // @@protoc_insertion_point(destructor:prptopkg.input)
  SharedDtor();
}

void input::SharedDtor() {
}

void input::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const input& input::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_input_message_2eproto.base);
  return *internal_default_instance();
}


void input::Clear() {
// @@protoc_insertion_point(message_clear_start:prptopkg.input)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&a_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&b_) -
        reinterpret_cast<char*>(&a_)) + sizeof(b_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* input::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_a(&has_bits);
          a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_b(&has_bits);
          b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* input::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:prptopkg.input)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_a(), target);
  }

  // required int32 b = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:prptopkg.input)
  return target;
}

size_t input::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:prptopkg.input)
  size_t total_size = 0;

  if (_internal_has_a()) {
    // required int32 a = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_a());
  }

  if (_internal_has_b()) {
    // required int32 b = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_b());
  }

  return total_size;
}
size_t input::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:prptopkg.input)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 a = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_a());

    // required int32 b = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_b());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void input::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:prptopkg.input)
  GOOGLE_DCHECK_NE(&from, this);
  const input* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<input>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:prptopkg.input)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:prptopkg.input)
    MergeFrom(*source);
  }
}

void input::MergeFrom(const input& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:prptopkg.input)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      a_ = from.a_;
    }
    if (cached_has_bits & 0x00000002u) {
      b_ = from.b_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void input::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:prptopkg.input)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void input::CopyFrom(const input& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:prptopkg.input)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool input::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void input::InternalSwap(input* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(a_, other->a_);
  swap(b_, other->b_);
}

::PROTOBUF_NAMESPACE_ID::Metadata input::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace prptopkg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::prptopkg::nill* Arena::CreateMaybeMessage< ::prptopkg::nill >(Arena* arena) {
  return Arena::CreateInternal< ::prptopkg::nill >(arena);
}
template<> PROTOBUF_NOINLINE ::prptopkg::output* Arena::CreateMaybeMessage< ::prptopkg::output >(Arena* arena) {
  return Arena::CreateInternal< ::prptopkg::output >(arena);
}
template<> PROTOBUF_NOINLINE ::prptopkg::input* Arena::CreateMaybeMessage< ::prptopkg::input >(Arena* arena) {
  return Arena::CreateInternal< ::prptopkg::input >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
