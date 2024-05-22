// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: monitor_info.proto

#include "monitor_info.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_cpu_5fload_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CpuLoad_cpu_5fload_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_cpu_5fstat_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CpuStat_cpu_5fstat_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_mem_5finfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MemInfo_mem_5finfo_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_net_5finfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NetInfo_net_5finfo_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_cpu_5fsoftirq_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SoftIrq_cpu_5fsoftirq_2eproto;
namespace monitor {
namespace proto {
class MonitorInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MonitorInfo> _instance;
} _MonitorInfo_default_instance_;
}  // namespace proto
}  // namespace monitor
static void InitDefaultsscc_info_MonitorInfo_monitor_5finfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::monitor::proto::_MonitorInfo_default_instance_;
    new (ptr) ::monitor::proto::MonitorInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_MonitorInfo_monitor_5finfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 5, 0, InitDefaultsscc_info_MonitorInfo_monitor_5finfo_2eproto}, {
      &scc_info_SoftIrq_cpu_5fsoftirq_2eproto.base,
      &scc_info_CpuLoad_cpu_5fload_2eproto.base,
      &scc_info_CpuStat_cpu_5fstat_2eproto.base,
      &scc_info_MemInfo_mem_5finfo_2eproto.base,
      &scc_info_NetInfo_net_5finfo_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_monitor_5finfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_monitor_5finfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_monitor_5finfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_monitor_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, name_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, soft_irq_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, cpu_load_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, cpu_stat_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, mem_info_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MonitorInfo, net_info_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::monitor::proto::MonitorInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::monitor::proto::_MonitorInfo_default_instance_),
};

const char descriptor_table_protodef_monitor_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022monitor_info.proto\022\rmonitor.proto\032\033goo"
  "gle/protobuf/empty.proto\032\016net_info.proto"
  "\032\016mem_info.proto\032\016cpu_stat.proto\032\021cpu_so"
  "ftirq.proto\032\016cpu_load.proto\"\355\001\n\013MonitorI"
  "nfo\022\014\n\004name\030\001 \001(\t\022(\n\010soft_irq\030\004 \003(\0132\026.mo"
  "nitor.proto.SoftIrq\022(\n\010cpu_load\030\005 \001(\0132\026."
  "monitor.proto.CpuLoad\022(\n\010cpu_stat\030\006 \003(\0132"
  "\026.monitor.proto.CpuStat\022(\n\010mem_info\030\007 \001("
  "\0132\026.monitor.proto.MemInfo\022(\n\010net_info\030\010 "
  "\003(\0132\026.monitor.proto.NetInfo2\235\001\n\013GrpcMana"
  "ger\022F\n\016SetMonitorInfo\022\032.monitor.proto.Mo"
  "nitorInfo\032\026.google.protobuf.Empty\"\000\022F\n\016G"
  "etMonitorInfo\022\026.google.protobuf.Empty\032\032."
  "monitor.proto.MonitorInfo\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_monitor_5finfo_2eproto_deps[6] = {
  &::descriptor_table_cpu_5fload_2eproto,
  &::descriptor_table_cpu_5fsoftirq_2eproto,
  &::descriptor_table_cpu_5fstat_2eproto,
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
  &::descriptor_table_mem_5finfo_2eproto,
  &::descriptor_table_net_5finfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_monitor_5finfo_2eproto_sccs[1] = {
  &scc_info_MonitorInfo_monitor_5finfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_monitor_5finfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_monitor_5finfo_2eproto = {
  false, false, descriptor_table_protodef_monitor_5finfo_2eproto, "monitor_info.proto", 555,
  &descriptor_table_monitor_5finfo_2eproto_once, descriptor_table_monitor_5finfo_2eproto_sccs, descriptor_table_monitor_5finfo_2eproto_deps, 1, 6,
  schemas, file_default_instances, TableStruct_monitor_5finfo_2eproto::offsets,
  file_level_metadata_monitor_5finfo_2eproto, 1, file_level_enum_descriptors_monitor_5finfo_2eproto, file_level_service_descriptors_monitor_5finfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_monitor_5finfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_monitor_5finfo_2eproto)), true);
namespace monitor {
namespace proto {

// ===================================================================

class MonitorInfo::_Internal {
 public:
  static const ::monitor::proto::CpuLoad& cpu_load(const MonitorInfo* msg);
  static const ::monitor::proto::MemInfo& mem_info(const MonitorInfo* msg);
};

const ::monitor::proto::CpuLoad&
MonitorInfo::_Internal::cpu_load(const MonitorInfo* msg) {
  return *msg->cpu_load_;
}
const ::monitor::proto::MemInfo&
MonitorInfo::_Internal::mem_info(const MonitorInfo* msg) {
  return *msg->mem_info_;
}
void MonitorInfo::clear_soft_irq() {
  soft_irq_.Clear();
}
void MonitorInfo::clear_cpu_load() {
  if (GetArena() == nullptr && cpu_load_ != nullptr) {
    delete cpu_load_;
  }
  cpu_load_ = nullptr;
}
void MonitorInfo::clear_cpu_stat() {
  cpu_stat_.Clear();
}
void MonitorInfo::clear_mem_info() {
  if (GetArena() == nullptr && mem_info_ != nullptr) {
    delete mem_info_;
  }
  mem_info_ = nullptr;
}
void MonitorInfo::clear_net_info() {
  net_info_.Clear();
}
MonitorInfo::MonitorInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  soft_irq_(arena),
  cpu_stat_(arena),
  net_info_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:monitor.proto.MonitorInfo)
}
MonitorInfo::MonitorInfo(const MonitorInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      soft_irq_(from.soft_irq_),
      cpu_stat_(from.cpu_stat_),
      net_info_(from.net_info_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  if (from._internal_has_cpu_load()) {
    cpu_load_ = new ::monitor::proto::CpuLoad(*from.cpu_load_);
  } else {
    cpu_load_ = nullptr;
  }
  if (from._internal_has_mem_info()) {
    mem_info_ = new ::monitor::proto::MemInfo(*from.mem_info_);
  } else {
    mem_info_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:monitor.proto.MonitorInfo)
}

void MonitorInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MonitorInfo_monitor_5finfo_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&cpu_load_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&mem_info_) -
      reinterpret_cast<char*>(&cpu_load_)) + sizeof(mem_info_));
}

MonitorInfo::~MonitorInfo() {
  // @@protoc_insertion_point(destructor:monitor.proto.MonitorInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MonitorInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete cpu_load_;
  if (this != internal_default_instance()) delete mem_info_;
}

void MonitorInfo::ArenaDtor(void* object) {
  MonitorInfo* _this = reinterpret_cast< MonitorInfo* >(object);
  (void)_this;
}
void MonitorInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MonitorInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MonitorInfo& MonitorInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MonitorInfo_monitor_5finfo_2eproto.base);
  return *internal_default_instance();
}


void MonitorInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.proto.MonitorInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  soft_irq_.Clear();
  cpu_stat_.Clear();
  net_info_.Clear();
  name_.ClearToEmpty();
  if (GetArena() == nullptr && cpu_load_ != nullptr) {
    delete cpu_load_;
  }
  cpu_load_ = nullptr;
  if (GetArena() == nullptr && mem_info_ != nullptr) {
    delete mem_info_;
  }
  mem_info_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MonitorInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "monitor.proto.MonitorInfo.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .monitor.proto.SoftIrq soft_irq = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_soft_irq(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // .monitor.proto.CpuLoad cpu_load = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_cpu_load(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .monitor.proto.CpuStat cpu_stat = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_cpu_stat(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
        } else goto handle_unusual;
        continue;
      // .monitor.proto.MemInfo mem_info = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_mem_info(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .monitor.proto.NetInfo net_info = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_net_info(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* MonitorInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.proto.MonitorInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "monitor.proto.MonitorInfo.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // repeated .monitor.proto.SoftIrq soft_irq = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_soft_irq_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_soft_irq(i), target, stream);
  }

  // .monitor.proto.CpuLoad cpu_load = 5;
  if (this->has_cpu_load()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::cpu_load(this), target, stream);
  }

  // repeated .monitor.proto.CpuStat cpu_stat = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_cpu_stat_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, this->_internal_cpu_stat(i), target, stream);
  }

  // .monitor.proto.MemInfo mem_info = 7;
  if (this->has_mem_info()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::mem_info(this), target, stream);
  }

  // repeated .monitor.proto.NetInfo net_info = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_net_info_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, this->_internal_net_info(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:monitor.proto.MonitorInfo)
  return target;
}

size_t MonitorInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.proto.MonitorInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .monitor.proto.SoftIrq soft_irq = 4;
  total_size += 1UL * this->_internal_soft_irq_size();
  for (const auto& msg : this->soft_irq_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .monitor.proto.CpuStat cpu_stat = 6;
  total_size += 1UL * this->_internal_cpu_stat_size();
  for (const auto& msg : this->cpu_stat_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .monitor.proto.NetInfo net_info = 8;
  total_size += 1UL * this->_internal_net_info_size();
  for (const auto& msg : this->net_info_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .monitor.proto.CpuLoad cpu_load = 5;
  if (this->has_cpu_load()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *cpu_load_);
  }

  // .monitor.proto.MemInfo mem_info = 7;
  if (this->has_mem_info()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *mem_info_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MonitorInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.proto.MonitorInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const MonitorInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MonitorInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.proto.MonitorInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.proto.MonitorInfo)
    MergeFrom(*source);
  }
}

void MonitorInfo::MergeFrom(const MonitorInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.proto.MonitorInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  soft_irq_.MergeFrom(from.soft_irq_);
  cpu_stat_.MergeFrom(from.cpu_stat_);
  net_info_.MergeFrom(from.net_info_);
  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.has_cpu_load()) {
    _internal_mutable_cpu_load()->::monitor::proto::CpuLoad::MergeFrom(from._internal_cpu_load());
  }
  if (from.has_mem_info()) {
    _internal_mutable_mem_info()->::monitor::proto::MemInfo::MergeFrom(from._internal_mem_info());
  }
}

void MonitorInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.proto.MonitorInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MonitorInfo::CopyFrom(const MonitorInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.proto.MonitorInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MonitorInfo::IsInitialized() const {
  return true;
}

void MonitorInfo::InternalSwap(MonitorInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  soft_irq_.InternalSwap(&other->soft_irq_);
  cpu_stat_.InternalSwap(&other->cpu_stat_);
  net_info_.InternalSwap(&other->net_info_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MonitorInfo, mem_info_)
      + sizeof(MonitorInfo::mem_info_)
      - PROTOBUF_FIELD_OFFSET(MonitorInfo, cpu_load_)>(
          reinterpret_cast<char*>(&cpu_load_),
          reinterpret_cast<char*>(&other->cpu_load_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MonitorInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace monitor
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::monitor::proto::MonitorInfo* Arena::CreateMaybeMessage< ::monitor::proto::MonitorInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::monitor::proto::MonitorInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
