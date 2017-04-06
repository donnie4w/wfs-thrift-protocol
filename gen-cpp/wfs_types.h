/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef wfs_TYPES_H
#define wfs_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




class WfsAck;

class Wfs;

class WfsFile;

typedef struct _WfsAck__isset {
  _WfsAck__isset() : status(false) {}
  bool status :1;
} _WfsAck__isset;

class WfsAck {
 public:

  WfsAck(const WfsAck&);
  WfsAck& operator=(const WfsAck&);
  WfsAck() : status(0) {
  }

  virtual ~WfsAck() throw();
  int32_t status;

  _WfsAck__isset __isset;

  void __set_status(const int32_t val);

  bool operator == (const WfsAck & rhs) const
  {
    if (__isset.status != rhs.__isset.status)
      return false;
    else if (__isset.status && !(status == rhs.status))
      return false;
    return true;
  }
  bool operator != (const WfsAck &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WfsAck & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(WfsAck &a, WfsAck &b);

inline std::ostream& operator<<(std::ostream& out, const WfsAck& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Wfs__isset {
  _Wfs__isset() : status(false) {}
  bool status :1;
} _Wfs__isset;

class Wfs {
 public:

  Wfs(const Wfs&);
  Wfs& operator=(const Wfs&);
  Wfs() : status(0) {
  }

  virtual ~Wfs() throw();
  int32_t status;

  _Wfs__isset __isset;

  void __set_status(const int32_t val);

  bool operator == (const Wfs & rhs) const
  {
    if (__isset.status != rhs.__isset.status)
      return false;
    else if (__isset.status && !(status == rhs.status))
      return false;
    return true;
  }
  bool operator != (const Wfs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Wfs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Wfs &a, Wfs &b);

inline std::ostream& operator<<(std::ostream& out, const Wfs& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _WfsFile__isset {
  _WfsFile__isset() : name(false), fileBody(false), fileType(false) {}
  bool name :1;
  bool fileBody :1;
  bool fileType :1;
} _WfsFile__isset;

class WfsFile {
 public:

  WfsFile(const WfsFile&);
  WfsFile& operator=(const WfsFile&);
  WfsFile() : name(), fileBody(), fileType() {
  }

  virtual ~WfsFile() throw();
  std::string name;
  std::string fileBody;
  std::string fileType;

  _WfsFile__isset __isset;

  void __set_name(const std::string& val);

  void __set_fileBody(const std::string& val);

  void __set_fileType(const std::string& val);

  bool operator == (const WfsFile & rhs) const
  {
    if (__isset.name != rhs.__isset.name)
      return false;
    else if (__isset.name && !(name == rhs.name))
      return false;
    if (__isset.fileBody != rhs.__isset.fileBody)
      return false;
    else if (__isset.fileBody && !(fileBody == rhs.fileBody))
      return false;
    if (__isset.fileType != rhs.__isset.fileType)
      return false;
    else if (__isset.fileType && !(fileType == rhs.fileType))
      return false;
    return true;
  }
  bool operator != (const WfsFile &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WfsFile & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(WfsFile &a, WfsFile &b);

inline std::ostream& operator<<(std::ostream& out, const WfsFile& obj)
{
  obj.printTo(out);
  return out;
}



#endif
