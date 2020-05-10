///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESUploadSessionStartArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UploadSessionStartArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUploadSessionStartArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// If true, the current session will be closed, at which point you won't be
/// able to call `uploadSessionAppend` anymore with the current session.
@property (nonatomic, readonly) NSNumber *close;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param close If true, the current session will be closed, at which point you
/// won't be able to call `uploadSessionAppend` anymore with the current
/// session.
///
/// @return An initialized instance.
///
- (instancetype)initWithClose:(nullable NSNumber *)close;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UploadSessionStartArg` struct.
///
@interface DBFILESUploadSessionStartArgSerializer : NSObject

///
/// Serializes `DBFILESUploadSessionStartArg` instances.
///
/// @param instance An instance of the `DBFILESUploadSessionStartArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUploadSessionStartArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESUploadSessionStartArg *)instance;

///
/// Deserializes `DBFILESUploadSessionStartArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUploadSessionStartArg` API object.
///
/// @return An instantiation of the `DBFILESUploadSessionStartArg` object.
///
+ (DBFILESUploadSessionStartArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
