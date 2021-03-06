// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#ifndef PROTOBUF_game_2eproto__INCLUDED
#define PROTOBUF_game_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_game_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsPeople_PhoneNumberImpl();
void InitDefaultsPeople_PhoneNumber();
void InitDefaultsPeopleImpl();
void InitDefaultsPeople();
void InitDefaultsStudentImpl();
void InitDefaultsStudent();
inline void InitDefaults() {
  InitDefaultsPeople_PhoneNumber();
  InitDefaultsPeople();
  InitDefaultsStudent();
}
}  // namespace protobuf_game_2eproto
namespace XNet {
class People;
class PeopleDefaultTypeInternal;
extern PeopleDefaultTypeInternal _People_default_instance_;
class People_PhoneNumber;
class People_PhoneNumberDefaultTypeInternal;
extern People_PhoneNumberDefaultTypeInternal _People_PhoneNumber_default_instance_;
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
}  // namespace XNet
namespace XNet {

enum People_PhoneType {
  People_PhoneType_MOBILE = 0,
  People_PhoneType_HOME = 1,
  People_PhoneType_WORK = 2,
  People_PhoneType_People_PhoneType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  People_PhoneType_People_PhoneType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool People_PhoneType_IsValid(int value);
const People_PhoneType People_PhoneType_PhoneType_MIN = People_PhoneType_MOBILE;
const People_PhoneType People_PhoneType_PhoneType_MAX = People_PhoneType_WORK;
const int People_PhoneType_PhoneType_ARRAYSIZE = People_PhoneType_PhoneType_MAX + 1;

// ===================================================================

class People_PhoneNumber : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:XNet.People.PhoneNumber) */ {
 public:
  People_PhoneNumber();
  virtual ~People_PhoneNumber();

  People_PhoneNumber(const People_PhoneNumber& from);

  inline People_PhoneNumber& operator=(const People_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  People_PhoneNumber(People_PhoneNumber&& from) noexcept
    : People_PhoneNumber() {
    *this = ::std::move(from);
  }

  inline People_PhoneNumber& operator=(People_PhoneNumber&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const People_PhoneNumber& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const People_PhoneNumber* internal_default_instance() {
    return reinterpret_cast<const People_PhoneNumber*>(
               &_People_PhoneNumber_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(People_PhoneNumber* other);
  friend void swap(People_PhoneNumber& a, People_PhoneNumber& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline People_PhoneNumber* New() const PROTOBUF_FINAL { return New(NULL); }

  People_PhoneNumber* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const People_PhoneNumber& from);
  void MergeFrom(const People_PhoneNumber& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(People_PhoneNumber* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string number = 1;
  void clear_number();
  static const int kNumberFieldNumber = 1;
  const ::std::string& number() const;
  void set_number(const ::std::string& value);
  #if LANG_CXX11
  void set_number(::std::string&& value);
  #endif
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  ::std::string* mutable_number();
  ::std::string* release_number();
  void set_allocated_number(::std::string* number);

  // .XNet.People.PhoneType type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::XNet::People_PhoneType type() const;
  void set_type(::XNet::People_PhoneType value);

  // @@protoc_insertion_point(class_scope:XNet.People.PhoneNumber)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr number_;
  int type_;
  mutable int _cached_size_;
  friend struct ::protobuf_game_2eproto::TableStruct;
  friend void ::protobuf_game_2eproto::InitDefaultsPeople_PhoneNumberImpl();
};
// -------------------------------------------------------------------

class People : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:XNet.People) */ {
 public:
  People();
  virtual ~People();

  People(const People& from);

  inline People& operator=(const People& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  People(People&& from) noexcept
    : People() {
    *this = ::std::move(from);
  }

  inline People& operator=(People&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const People& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const People* internal_default_instance() {
    return reinterpret_cast<const People*>(
               &_People_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(People* other);
  friend void swap(People& a, People& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline People* New() const PROTOBUF_FINAL { return New(NULL); }

  People* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const People& from);
  void MergeFrom(const People& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(People* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef People_PhoneNumber PhoneNumber;

  typedef People_PhoneType PhoneType;
  static const PhoneType MOBILE =
    People_PhoneType_MOBILE;
  static const PhoneType HOME =
    People_PhoneType_HOME;
  static const PhoneType WORK =
    People_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return People_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    People_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    People_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    People_PhoneType_PhoneType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated int32 snip = 4;
  int snip_size() const;
  void clear_snip();
  static const int kSnipFieldNumber = 4;
  ::google::protobuf::int32 snip(int index) const;
  void set_snip(int index, ::google::protobuf::int32 value);
  void add_snip(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      snip() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_snip();

  // repeated .XNet.People.PhoneNumber phones = 5;
  int phones_size() const;
  void clear_phones();
  static const int kPhonesFieldNumber = 5;
  const ::XNet::People_PhoneNumber& phones(int index) const;
  ::XNet::People_PhoneNumber* mutable_phones(int index);
  ::XNet::People_PhoneNumber* add_phones();
  ::google::protobuf::RepeatedPtrField< ::XNet::People_PhoneNumber >*
      mutable_phones();
  const ::google::protobuf::RepeatedPtrField< ::XNet::People_PhoneNumber >&
      phones() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string email = 3;
  void clear_email();
  static const int kEmailFieldNumber = 3;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  #if LANG_CXX11
  void set_email(::std::string&& value);
  #endif
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:XNet.People)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > snip_;
  mutable int _snip_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::XNet::People_PhoneNumber > phones_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend struct ::protobuf_game_2eproto::TableStruct;
  friend void ::protobuf_game_2eproto::InitDefaultsPeopleImpl();
};
// -------------------------------------------------------------------

class Student : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:XNet.Student) */ {
 public:
  Student();
  virtual ~Student();

  Student(const Student& from);

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(Student&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Student* other);
  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const PROTOBUF_FINAL { return New(NULL); }

  Student* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Student* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int32 age = 2;
  void clear_age();
  static const int kAgeFieldNumber = 2;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // int32 num = 3;
  void clear_num();
  static const int kNumFieldNumber = 3;
  ::google::protobuf::int32 num() const;
  void set_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:XNet.Student)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 age_;
  ::google::protobuf::int32 num_;
  mutable int _cached_size_;
  friend struct ::protobuf_game_2eproto::TableStruct;
  friend void ::protobuf_game_2eproto::InitDefaultsStudentImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// People_PhoneNumber

// string number = 1;
inline void People_PhoneNumber::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& People_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:XNet.People.PhoneNumber.number)
  return number_.GetNoArena();
}
inline void People_PhoneNumber::set_number(const ::std::string& value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XNet.People.PhoneNumber.number)
}
#if LANG_CXX11
inline void People_PhoneNumber::set_number(::std::string&& value) {
  
  number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XNet.People.PhoneNumber.number)
}
#endif
inline void People_PhoneNumber::set_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XNet.People.PhoneNumber.number)
}
inline void People_PhoneNumber::set_number(const char* value, size_t size) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XNet.People.PhoneNumber.number)
}
inline ::std::string* People_PhoneNumber::mutable_number() {
  
  // @@protoc_insertion_point(field_mutable:XNet.People.PhoneNumber.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* People_PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:XNet.People.PhoneNumber.number)
  
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void People_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number != NULL) {
    
  } else {
    
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:XNet.People.PhoneNumber.number)
}

// .XNet.People.PhoneType type = 2;
inline void People_PhoneNumber::clear_type() {
  type_ = 0;
}
inline ::XNet::People_PhoneType People_PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:XNet.People.PhoneNumber.type)
  return static_cast< ::XNet::People_PhoneType >(type_);
}
inline void People_PhoneNumber::set_type(::XNet::People_PhoneType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:XNet.People.PhoneNumber.type)
}

// -------------------------------------------------------------------

// People

// string name = 1;
inline void People::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& People::name() const {
  // @@protoc_insertion_point(field_get:XNet.People.name)
  return name_.GetNoArena();
}
inline void People::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XNet.People.name)
}
#if LANG_CXX11
inline void People::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XNet.People.name)
}
#endif
inline void People::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XNet.People.name)
}
inline void People::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XNet.People.name)
}
inline ::std::string* People::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:XNet.People.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* People::release_name() {
  // @@protoc_insertion_point(field_release:XNet.People.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void People::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:XNet.People.name)
}

// int32 id = 2;
inline void People::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 People::id() const {
  // @@protoc_insertion_point(field_get:XNet.People.id)
  return id_;
}
inline void People::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:XNet.People.id)
}

// string email = 3;
inline void People::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& People::email() const {
  // @@protoc_insertion_point(field_get:XNet.People.email)
  return email_.GetNoArena();
}
inline void People::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XNet.People.email)
}
#if LANG_CXX11
inline void People::set_email(::std::string&& value) {
  
  email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XNet.People.email)
}
#endif
inline void People::set_email(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XNet.People.email)
}
inline void People::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XNet.People.email)
}
inline ::std::string* People::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:XNet.People.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* People::release_email() {
  // @@protoc_insertion_point(field_release:XNet.People.email)
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void People::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:XNet.People.email)
}

// repeated int32 snip = 4;
inline int People::snip_size() const {
  return snip_.size();
}
inline void People::clear_snip() {
  snip_.Clear();
}
inline ::google::protobuf::int32 People::snip(int index) const {
  // @@protoc_insertion_point(field_get:XNet.People.snip)
  return snip_.Get(index);
}
inline void People::set_snip(int index, ::google::protobuf::int32 value) {
  snip_.Set(index, value);
  // @@protoc_insertion_point(field_set:XNet.People.snip)
}
inline void People::add_snip(::google::protobuf::int32 value) {
  snip_.Add(value);
  // @@protoc_insertion_point(field_add:XNet.People.snip)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
People::snip() const {
  // @@protoc_insertion_point(field_list:XNet.People.snip)
  return snip_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
People::mutable_snip() {
  // @@protoc_insertion_point(field_mutable_list:XNet.People.snip)
  return &snip_;
}

// repeated .XNet.People.PhoneNumber phones = 5;
inline int People::phones_size() const {
  return phones_.size();
}
inline void People::clear_phones() {
  phones_.Clear();
}
inline const ::XNet::People_PhoneNumber& People::phones(int index) const {
  // @@protoc_insertion_point(field_get:XNet.People.phones)
  return phones_.Get(index);
}
inline ::XNet::People_PhoneNumber* People::mutable_phones(int index) {
  // @@protoc_insertion_point(field_mutable:XNet.People.phones)
  return phones_.Mutable(index);
}
inline ::XNet::People_PhoneNumber* People::add_phones() {
  // @@protoc_insertion_point(field_add:XNet.People.phones)
  return phones_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::XNet::People_PhoneNumber >*
People::mutable_phones() {
  // @@protoc_insertion_point(field_mutable_list:XNet.People.phones)
  return &phones_;
}
inline const ::google::protobuf::RepeatedPtrField< ::XNet::People_PhoneNumber >&
People::phones() const {
  // @@protoc_insertion_point(field_list:XNet.People.phones)
  return phones_;
}

// -------------------------------------------------------------------

// Student

// string name = 1;
inline void Student::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Student::name() const {
  // @@protoc_insertion_point(field_get:XNet.Student.name)
  return name_.GetNoArena();
}
inline void Student::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XNet.Student.name)
}
#if LANG_CXX11
inline void Student::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XNet.Student.name)
}
#endif
inline void Student::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XNet.Student.name)
}
inline void Student::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XNet.Student.name)
}
inline ::std::string* Student::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:XNet.Student.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Student::release_name() {
  // @@protoc_insertion_point(field_release:XNet.Student.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Student::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:XNet.Student.name)
}

// int32 age = 2;
inline void Student::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 Student::age() const {
  // @@protoc_insertion_point(field_get:XNet.Student.age)
  return age_;
}
inline void Student::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:XNet.Student.age)
}

// int32 num = 3;
inline void Student::clear_num() {
  num_ = 0;
}
inline ::google::protobuf::int32 Student::num() const {
  // @@protoc_insertion_point(field_get:XNet.Student.num)
  return num_;
}
inline void Student::set_num(::google::protobuf::int32 value) {
  
  num_ = value;
  // @@protoc_insertion_point(field_set:XNet.Student.num)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace XNet

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::XNet::People_PhoneType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_game_2eproto__INCLUDED
