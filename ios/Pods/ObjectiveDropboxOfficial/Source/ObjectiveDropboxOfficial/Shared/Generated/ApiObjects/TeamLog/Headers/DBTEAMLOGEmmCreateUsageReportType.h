///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGEmmCreateUsageReportType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `EmmCreateUsageReportType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGEmmCreateUsageReportType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *description_;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param description_ (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithDescription_:(NSString *)description_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `EmmCreateUsageReportType` struct.
///
@interface DBTEAMLOGEmmCreateUsageReportTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGEmmCreateUsageReportType` instances.
///
/// @param instance An instance of the `DBTEAMLOGEmmCreateUsageReportType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGEmmCreateUsageReportType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGEmmCreateUsageReportType *)instance;

///
/// Deserializes `DBTEAMLOGEmmCreateUsageReportType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGEmmCreateUsageReportType` API object.
///
/// @return An instantiation of the `DBTEAMLOGEmmCreateUsageReportType` object.
///
+ (DBTEAMLOGEmmCreateUsageReportType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
