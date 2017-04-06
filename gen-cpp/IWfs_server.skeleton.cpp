// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "IWfs.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class IWfsHandler : virtual public IWfsIf {
 public:
  IWfsHandler() {
    // Your initialization goes here
  }

  /**
   * 上传
   * 
   * @param wf
   */
  void wfsPost(WfsAck& _return, const WfsFile& wf) {
    // Your implementation goes here
    printf("wfsPost\n");
  }

  /**
   * 拉取
   * 
   * @param name
   */
  void wfsRead(WfsFile& _return, const std::string& name) {
    // Your implementation goes here
    printf("wfsRead\n");
  }

  /**
   * 删除
   * 
   * @param name
   */
  void wfsDel(WfsAck& _return, const std::string& name) {
    // Your implementation goes here
    printf("wfsDel\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<IWfsHandler> handler(new IWfsHandler());
  shared_ptr<TProcessor> processor(new IWfsProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

