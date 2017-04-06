/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TProtocolFactory.h"
#import "TBaseClient.h"


@interface WfsAck : NSObject <TBase, NSCoding> {
  int32_t __status;

  BOOL __status_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=status, setter=setStatus:) int32_t status;
#endif

- (id) init;
- (id) initWithStatus: (int32_t) status;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int32_t) status;
- (void) setStatus: (int32_t) status;
#endif
- (BOOL) statusIsSet;

@end

@interface Wfs : NSObject <TBase, NSCoding> {
  int32_t __status;

  BOOL __status_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=status, setter=setStatus:) int32_t status;
#endif

- (id) init;
- (id) initWithStatus: (int32_t) status;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int32_t) status;
- (void) setStatus: (int32_t) status;
#endif
- (BOOL) statusIsSet;

@end

@interface WfsFile : NSObject <TBase, NSCoding> {
  NSString * __name;
  NSData * __fileBody;
  NSString * __fileType;

  BOOL __name_isset;
  BOOL __fileBody_isset;
  BOOL __fileType_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=fileBody, setter=setFileBody:) NSData * fileBody;
@property (nonatomic, retain, getter=fileType, setter=setFileType:) NSString * fileType;
#endif

- (id) init;
- (id) initWithName: (NSString *) name fileBody: (NSData *) fileBody fileType: (NSString *) fileType;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSData *) fileBody;
- (void) setFileBody: (NSData *) fileBody;
#endif
- (BOOL) fileBodyIsSet;

#if !__has_feature(objc_arc)
- (NSString *) fileType;
- (void) setFileType: (NSString *) fileType;
#endif
- (BOOL) fileTypeIsSet;

@end

@protocol IWfs <NSObject>
- (WfsAck *) wfsPost: (WfsFile *) wf;  // throws TException
- (WfsFile *) wfsRead: (NSString *) name;  // throws TException
- (WfsAck *) wfsDel: (NSString *) name;  // throws TException
@end

@interface IWfsClient : TBaseClient <IWfs> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface IWfsProcessor : NSObject <TProcessor> {
  id <IWfs> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithIWfs: (id <IWfs>) service;
- (id<IWfs>) service;
@end

@interface wfsConstants : NSObject {
}
+ (int32_t) wfsprotocolversion;
+ (NSString *) wfsprotocolversionName;
@end
