/*
 * This auto-generated skeleton file illustrates how to build a server. If you
 * intend to customize it, you should edit a copy with another file name to 
 * avoid overwriting it when running the generator again.
 */
module IWfs_server;

import std.stdio;
import thrift.codegen.processor;
import thrift.protocol.binary;
import thrift.server.simple;
import thrift.server.transport.socket;
import thrift.transport.buffered;
import thrift.util.hashset;

import IWfs;
import wfs_types;


class IWfsHandler : IWfs {
  this() {
    // Your initialization goes here.
  }

  WfsAck wfsPost(ref const(WfsFile) wf) {
    // Your implementation goes here.
    writeln("wfsPost called");
    return typeof(return).init;
  }

  WfsFile wfsRead(string name) {
    // Your implementation goes here.
    writeln("wfsRead called");
    return typeof(return).init;
  }

  WfsAck wfsDel(string name) {
    // Your implementation goes here.
    writeln("wfsDel called");
    return typeof(return).init;
  }

}

void main() {
  auto protocolFactory = new TBinaryProtocolFactory!();
  auto processor = new TServiceProcessor!IWfs(new IWfsHandler);
  auto serverTransport = new TServerSocket(9090);
  auto transportFactory = new TBufferedTransportFactory;
  auto server = new TSimpleServer(
    processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
}
