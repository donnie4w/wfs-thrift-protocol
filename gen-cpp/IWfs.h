/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef IWfs_H
#define IWfs_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "wfs_types.h"



#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class IWfsIf {
 public:
  virtual ~IWfsIf() {}

  /**
   * 上传
   * 
   * @param wf
   */
  virtual void wfsPost(WfsAck& _return, const WfsFile& wf) = 0;

  /**
   * 拉取
   * 
   * @param name
   */
  virtual void wfsRead(WfsFile& _return, const std::string& name) = 0;

  /**
   * 删除
   * 
   * @param name
   */
  virtual void wfsDel(WfsAck& _return, const std::string& name) = 0;
};

class IWfsIfFactory {
 public:
  typedef IWfsIf Handler;

  virtual ~IWfsIfFactory() {}

  virtual IWfsIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(IWfsIf* /* handler */) = 0;
};

class IWfsIfSingletonFactory : virtual public IWfsIfFactory {
 public:
  IWfsIfSingletonFactory(const boost::shared_ptr<IWfsIf>& iface) : iface_(iface) {}
  virtual ~IWfsIfSingletonFactory() {}

  virtual IWfsIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(IWfsIf* /* handler */) {}

 protected:
  boost::shared_ptr<IWfsIf> iface_;
};

class IWfsNull : virtual public IWfsIf {
 public:
  virtual ~IWfsNull() {}
  void wfsPost(WfsAck& /* _return */, const WfsFile& /* wf */) {
    return;
  }
  void wfsRead(WfsFile& /* _return */, const std::string& /* name */) {
    return;
  }
  void wfsDel(WfsAck& /* _return */, const std::string& /* name */) {
    return;
  }
};

typedef struct _IWfs_wfsPost_args__isset {
  _IWfs_wfsPost_args__isset() : wf(false) {}
  bool wf :1;
} _IWfs_wfsPost_args__isset;

class IWfs_wfsPost_args {
 public:

  IWfs_wfsPost_args(const IWfs_wfsPost_args&);
  IWfs_wfsPost_args& operator=(const IWfs_wfsPost_args&);
  IWfs_wfsPost_args() {
  }

  virtual ~IWfs_wfsPost_args() throw();
  WfsFile wf;

  _IWfs_wfsPost_args__isset __isset;

  void __set_wf(const WfsFile& val);

  bool operator == (const IWfs_wfsPost_args & rhs) const
  {
    if (!(wf == rhs.wf))
      return false;
    return true;
  }
  bool operator != (const IWfs_wfsPost_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IWfs_wfsPost_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class IWfs_wfsPost_pargs {
 public:


  virtual ~IWfs_wfsPost_pargs() throw();
  const WfsFile* wf;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _IWfs_wfsPost_result__isset {
  _IWfs_wfsPost_result__isset() : success(false) {}
  bool success :1;
} _IWfs_wfsPost_result__isset;

class IWfs_wfsPost_result {
 public:

  IWfs_wfsPost_result(const IWfs_wfsPost_result&);
  IWfs_wfsPost_result& operator=(const IWfs_wfsPost_result&);
  IWfs_wfsPost_result() {
  }

  virtual ~IWfs_wfsPost_result() throw();
  WfsAck success;

  _IWfs_wfsPost_result__isset __isset;

  void __set_success(const WfsAck& val);

  bool operator == (const IWfs_wfsPost_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const IWfs_wfsPost_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IWfs_wfsPost_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _IWfs_wfsPost_presult__isset {
  _IWfs_wfsPost_presult__isset() : success(false) {}
  bool success :1;
} _IWfs_wfsPost_presult__isset;

class IWfs_wfsPost_presult {
 public:


  virtual ~IWfs_wfsPost_presult() throw();
  WfsAck* success;

  _IWfs_wfsPost_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _IWfs_wfsRead_args__isset {
  _IWfs_wfsRead_args__isset() : name(false) {}
  bool name :1;
} _IWfs_wfsRead_args__isset;

class IWfs_wfsRead_args {
 public:

  IWfs_wfsRead_args(const IWfs_wfsRead_args&);
  IWfs_wfsRead_args& operator=(const IWfs_wfsRead_args&);
  IWfs_wfsRead_args() : name() {
  }

  virtual ~IWfs_wfsRead_args() throw();
  std::string name;

  _IWfs_wfsRead_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const IWfs_wfsRead_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const IWfs_wfsRead_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IWfs_wfsRead_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class IWfs_wfsRead_pargs {
 public:


  virtual ~IWfs_wfsRead_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _IWfs_wfsRead_result__isset {
  _IWfs_wfsRead_result__isset() : success(false) {}
  bool success :1;
} _IWfs_wfsRead_result__isset;

class IWfs_wfsRead_result {
 public:

  IWfs_wfsRead_result(const IWfs_wfsRead_result&);
  IWfs_wfsRead_result& operator=(const IWfs_wfsRead_result&);
  IWfs_wfsRead_result() {
  }

  virtual ~IWfs_wfsRead_result() throw();
  WfsFile success;

  _IWfs_wfsRead_result__isset __isset;

  void __set_success(const WfsFile& val);

  bool operator == (const IWfs_wfsRead_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const IWfs_wfsRead_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IWfs_wfsRead_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _IWfs_wfsRead_presult__isset {
  _IWfs_wfsRead_presult__isset() : success(false) {}
  bool success :1;
} _IWfs_wfsRead_presult__isset;

class IWfs_wfsRead_presult {
 public:


  virtual ~IWfs_wfsRead_presult() throw();
  WfsFile* success;

  _IWfs_wfsRead_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _IWfs_wfsDel_args__isset {
  _IWfs_wfsDel_args__isset() : name(false) {}
  bool name :1;
} _IWfs_wfsDel_args__isset;

class IWfs_wfsDel_args {
 public:

  IWfs_wfsDel_args(const IWfs_wfsDel_args&);
  IWfs_wfsDel_args& operator=(const IWfs_wfsDel_args&);
  IWfs_wfsDel_args() : name() {
  }

  virtual ~IWfs_wfsDel_args() throw();
  std::string name;

  _IWfs_wfsDel_args__isset __isset;

  void __set_name(const std::string& val);

  bool operator == (const IWfs_wfsDel_args & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const IWfs_wfsDel_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IWfs_wfsDel_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class IWfs_wfsDel_pargs {
 public:


  virtual ~IWfs_wfsDel_pargs() throw();
  const std::string* name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _IWfs_wfsDel_result__isset {
  _IWfs_wfsDel_result__isset() : success(false) {}
  bool success :1;
} _IWfs_wfsDel_result__isset;

class IWfs_wfsDel_result {
 public:

  IWfs_wfsDel_result(const IWfs_wfsDel_result&);
  IWfs_wfsDel_result& operator=(const IWfs_wfsDel_result&);
  IWfs_wfsDel_result() {
  }

  virtual ~IWfs_wfsDel_result() throw();
  WfsAck success;

  _IWfs_wfsDel_result__isset __isset;

  void __set_success(const WfsAck& val);

  bool operator == (const IWfs_wfsDel_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const IWfs_wfsDel_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IWfs_wfsDel_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _IWfs_wfsDel_presult__isset {
  _IWfs_wfsDel_presult__isset() : success(false) {}
  bool success :1;
} _IWfs_wfsDel_presult__isset;

class IWfs_wfsDel_presult {
 public:


  virtual ~IWfs_wfsDel_presult() throw();
  WfsAck* success;

  _IWfs_wfsDel_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class IWfsClient : virtual public IWfsIf {
 public:
  IWfsClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  IWfsClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void wfsPost(WfsAck& _return, const WfsFile& wf);
  void send_wfsPost(const WfsFile& wf);
  void recv_wfsPost(WfsAck& _return);
  void wfsRead(WfsFile& _return, const std::string& name);
  void send_wfsRead(const std::string& name);
  void recv_wfsRead(WfsFile& _return);
  void wfsDel(WfsAck& _return, const std::string& name);
  void send_wfsDel(const std::string& name);
  void recv_wfsDel(WfsAck& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class IWfsProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<IWfsIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (IWfsProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_wfsPost(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_wfsRead(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_wfsDel(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  IWfsProcessor(boost::shared_ptr<IWfsIf> iface) :
    iface_(iface) {
    processMap_["wfsPost"] = &IWfsProcessor::process_wfsPost;
    processMap_["wfsRead"] = &IWfsProcessor::process_wfsRead;
    processMap_["wfsDel"] = &IWfsProcessor::process_wfsDel;
  }

  virtual ~IWfsProcessor() {}
};

class IWfsProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  IWfsProcessorFactory(const ::boost::shared_ptr< IWfsIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< IWfsIfFactory > handlerFactory_;
};

class IWfsMultiface : virtual public IWfsIf {
 public:
  IWfsMultiface(std::vector<boost::shared_ptr<IWfsIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~IWfsMultiface() {}
 protected:
  std::vector<boost::shared_ptr<IWfsIf> > ifaces_;
  IWfsMultiface() {}
  void add(boost::shared_ptr<IWfsIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void wfsPost(WfsAck& _return, const WfsFile& wf) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->wfsPost(_return, wf);
    }
    ifaces_[i]->wfsPost(_return, wf);
    return;
  }

  void wfsRead(WfsFile& _return, const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->wfsRead(_return, name);
    }
    ifaces_[i]->wfsRead(_return, name);
    return;
  }

  void wfsDel(WfsAck& _return, const std::string& name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->wfsDel(_return, name);
    }
    ifaces_[i]->wfsDel(_return, name);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class IWfsConcurrentClient : virtual public IWfsIf {
 public:
  IWfsConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  IWfsConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void wfsPost(WfsAck& _return, const WfsFile& wf);
  int32_t send_wfsPost(const WfsFile& wf);
  void recv_wfsPost(WfsAck& _return, const int32_t seqid);
  void wfsRead(WfsFile& _return, const std::string& name);
  int32_t send_wfsRead(const std::string& name);
  void recv_wfsRead(WfsFile& _return, const int32_t seqid);
  void wfsDel(WfsAck& _return, const std::string& name);
  int32_t send_wfsDel(const std::string& name);
  void recv_wfsDel(WfsAck& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif
