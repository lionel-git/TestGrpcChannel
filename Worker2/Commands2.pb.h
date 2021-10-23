// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Commands2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Commands2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Commands2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Commands2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Commands2_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Commands2_2eproto;
namespace Interop {
namespace network2 {
class Command2;
struct Command2DefaultTypeInternal;
extern Command2DefaultTypeInternal _Command2_default_instance_;
class CommandReply2;
struct CommandReply2DefaultTypeInternal;
extern CommandReply2DefaultTypeInternal _CommandReply2_default_instance_;
class CommandRequest2;
struct CommandRequest2DefaultTypeInternal;
extern CommandRequest2DefaultTypeInternal _CommandRequest2_default_instance_;
}  // namespace network2
}  // namespace Interop
PROTOBUF_NAMESPACE_OPEN
template<> ::Interop::network2::Command2* Arena::CreateMaybeMessage<::Interop::network2::Command2>(Arena*);
template<> ::Interop::network2::CommandReply2* Arena::CreateMaybeMessage<::Interop::network2::CommandReply2>(Arena*);
template<> ::Interop::network2::CommandRequest2* Arena::CreateMaybeMessage<::Interop::network2::CommandRequest2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Interop {
namespace network2 {

// ===================================================================

class Command2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Interop.network2.Command2) */ {
 public:
  inline Command2() : Command2(nullptr) {}
  ~Command2() override;
  explicit constexpr Command2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Command2(const Command2& from);
  Command2(Command2&& from) noexcept
    : Command2() {
    *this = ::std::move(from);
  }

  inline Command2& operator=(const Command2& from) {
    CopyFrom(from);
    return *this;
  }
  inline Command2& operator=(Command2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Command2& default_instance() {
    return *internal_default_instance();
  }
  static inline const Command2* internal_default_instance() {
    return reinterpret_cast<const Command2*>(
               &_Command2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Command2& a, Command2& b) {
    a.Swap(&b);
  }
  inline void Swap(Command2* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Command2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Command2* New() const final {
    return new Command2();
  }

  Command2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Command2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Command2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Command2& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Command2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Interop.network2.Command2";
  }
  protected:
  explicit Command2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFunctionFieldNumber = 2,
    kKeyFieldNumber = 3,
    kPortFieldNumber = 1,
  };
  // string function = 2;
  void clear_function();
  const std::string& function() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_function(ArgT0&& arg0, ArgT... args);
  std::string* mutable_function();
  PROTOBUF_MUST_USE_RESULT std::string* release_function();
  void set_allocated_function(std::string* function);
  private:
  const std::string& _internal_function() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_function(const std::string& value);
  std::string* _internal_mutable_function();
  public:

  // string key = 3;
  void clear_key();
  const std::string& key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key();
  PROTOBUF_MUST_USE_RESULT std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // int32 port = 1;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::int32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Interop.network2.Command2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr function_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  ::PROTOBUF_NAMESPACE_ID::int32 port_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Commands2_2eproto;
};
// -------------------------------------------------------------------

class CommandRequest2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Interop.network2.CommandRequest2) */ {
 public:
  inline CommandRequest2() : CommandRequest2(nullptr) {}
  ~CommandRequest2() override;
  explicit constexpr CommandRequest2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommandRequest2(const CommandRequest2& from);
  CommandRequest2(CommandRequest2&& from) noexcept
    : CommandRequest2() {
    *this = ::std::move(from);
  }

  inline CommandRequest2& operator=(const CommandRequest2& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommandRequest2& operator=(CommandRequest2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CommandRequest2& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommandRequest2* internal_default_instance() {
    return reinterpret_cast<const CommandRequest2*>(
               &_CommandRequest2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CommandRequest2& a, CommandRequest2& b) {
    a.Swap(&b);
  }
  inline void Swap(CommandRequest2* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommandRequest2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommandRequest2* New() const final {
    return new CommandRequest2();
  }

  CommandRequest2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommandRequest2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommandRequest2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CommandRequest2& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommandRequest2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Interop.network2.CommandRequest2";
  }
  protected:
  explicit CommandRequest2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:Interop.network2.CommandRequest2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Commands2_2eproto;
};
// -------------------------------------------------------------------

class CommandReply2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Interop.network2.CommandReply2) */ {
 public:
  inline CommandReply2() : CommandReply2(nullptr) {}
  ~CommandReply2() override;
  explicit constexpr CommandReply2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommandReply2(const CommandReply2& from);
  CommandReply2(CommandReply2&& from) noexcept
    : CommandReply2() {
    *this = ::std::move(from);
  }

  inline CommandReply2& operator=(const CommandReply2& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommandReply2& operator=(CommandReply2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CommandReply2& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommandReply2* internal_default_instance() {
    return reinterpret_cast<const CommandReply2*>(
               &_CommandReply2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(CommandReply2& a, CommandReply2& b) {
    a.Swap(&b);
  }
  inline void Swap(CommandReply2* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommandReply2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommandReply2* New() const final {
    return new CommandReply2();
  }

  CommandReply2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommandReply2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommandReply2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CommandReply2& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommandReply2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Interop.network2.CommandReply2";
  }
  protected:
  explicit CommandReply2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // string data = 1;
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_MUST_USE_RESULT std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // @@protoc_insertion_point(class_scope:Interop.network2.CommandReply2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Commands2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Command2

// int32 port = 1;
inline void Command2::clear_port() {
  port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Command2::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Command2::port() const {
  // @@protoc_insertion_point(field_get:Interop.network2.Command2.port)
  return _internal_port();
}
inline void Command2::_internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  port_ = value;
}
inline void Command2::set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:Interop.network2.Command2.port)
}

// string function = 2;
inline void Command2::clear_function() {
  function_.ClearToEmpty();
}
inline const std::string& Command2::function() const {
  // @@protoc_insertion_point(field_get:Interop.network2.Command2.function)
  return _internal_function();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Command2::set_function(ArgT0&& arg0, ArgT... args) {
 
 function_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Interop.network2.Command2.function)
}
inline std::string* Command2::mutable_function() {
  std::string* _s = _internal_mutable_function();
  // @@protoc_insertion_point(field_mutable:Interop.network2.Command2.function)
  return _s;
}
inline const std::string& Command2::_internal_function() const {
  return function_.Get();
}
inline void Command2::_internal_set_function(const std::string& value) {
  
  function_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Command2::_internal_mutable_function() {
  
  return function_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Command2::release_function() {
  // @@protoc_insertion_point(field_release:Interop.network2.Command2.function)
  return function_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Command2::set_allocated_function(std::string* function) {
  if (function != nullptr) {
    
  } else {
    
  }
  function_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), function,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Interop.network2.Command2.function)
}

// string key = 3;
inline void Command2::clear_key() {
  key_.ClearToEmpty();
}
inline const std::string& Command2::key() const {
  // @@protoc_insertion_point(field_get:Interop.network2.Command2.key)
  return _internal_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Command2::set_key(ArgT0&& arg0, ArgT... args) {
 
 key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Interop.network2.Command2.key)
}
inline std::string* Command2::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:Interop.network2.Command2.key)
  return _s;
}
inline const std::string& Command2::_internal_key() const {
  return key_.Get();
}
inline void Command2::_internal_set_key(const std::string& value) {
  
  key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Command2::_internal_mutable_key() {
  
  return key_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Command2::release_key() {
  // @@protoc_insertion_point(field_release:Interop.network2.Command2.key)
  return key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Command2::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Interop.network2.Command2.key)
}

// -------------------------------------------------------------------

// CommandRequest2

// string name = 1;
inline void CommandRequest2::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& CommandRequest2::name() const {
  // @@protoc_insertion_point(field_get:Interop.network2.CommandRequest2.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommandRequest2::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Interop.network2.CommandRequest2.name)
}
inline std::string* CommandRequest2::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Interop.network2.CommandRequest2.name)
  return _s;
}
inline const std::string& CommandRequest2::_internal_name() const {
  return name_.Get();
}
inline void CommandRequest2::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CommandRequest2::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CommandRequest2::release_name() {
  // @@protoc_insertion_point(field_release:Interop.network2.CommandRequest2.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CommandRequest2::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Interop.network2.CommandRequest2.name)
}

// -------------------------------------------------------------------

// CommandReply2

// string data = 1;
inline void CommandReply2::clear_data() {
  data_.ClearToEmpty();
}
inline const std::string& CommandReply2::data() const {
  // @@protoc_insertion_point(field_get:Interop.network2.CommandReply2.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommandReply2::set_data(ArgT0&& arg0, ArgT... args) {
 
 data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Interop.network2.CommandReply2.data)
}
inline std::string* CommandReply2::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:Interop.network2.CommandReply2.data)
  return _s;
}
inline const std::string& CommandReply2::_internal_data() const {
  return data_.Get();
}
inline void CommandReply2::_internal_set_data(const std::string& value) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* CommandReply2::_internal_mutable_data() {
  
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* CommandReply2::release_data() {
  // @@protoc_insertion_point(field_release:Interop.network2.CommandReply2.data)
  return data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void CommandReply2::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Interop.network2.CommandReply2.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace network2
}  // namespace Interop

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Commands2_2eproto