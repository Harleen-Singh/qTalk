///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGetTeamEventsContinueError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetTeamEventsContinueError` union.
///
/// Errors that can be raised when calling `getEventsContinue`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGetTeamEventsContinueError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGGetTeamEventsContinueErrorTag` enum type represents the
/// possible tag states with which the `DBTEAMLOGGetTeamEventsContinueError`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGGetTeamEventsContinueErrorTag) {
  /// Bad cursor.
  DBTEAMLOGGetTeamEventsContinueErrorBadCursor,

  /// Cursors are intended to be used quickly. Individual cursor values are
  /// normally valid for days, but in rare cases may be reset sooner. Cursor
  /// reset errors should be handled by fetching a new cursor from
  /// `getEvents`. The associated value is the approximate timestamp of the
  /// most recent event returned by the cursor. This should be used as a
  /// resumption point when calling `getEvents` to obtain a new cursor.
  DBTEAMLOGGetTeamEventsContinueErrorReset,

  /// (no description).
  DBTEAMLOGGetTeamEventsContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGGetTeamEventsContinueErrorTag tag;

/// Cursors are intended to be used quickly. Individual cursor values are
/// normally valid for days, but in rare cases may be reset sooner. Cursor reset
/// errors should be handled by fetching a new cursor from `getEvents`. The
/// associated value is the approximate timestamp of the most recent event
/// returned by the cursor. This should be used as a resumption point when
/// calling `getEvents` to obtain a new cursor. @note Ensure the `isReset`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) NSDate *reset;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "bad_cursor".
///
/// Description of the "bad_cursor" tag state: Bad cursor.
///
/// @return An initialized instance.
///
- (instancetype)initWithBadCursor;

///
/// Initializes union class with tag state of "reset".
///
/// Description of the "reset" tag state: Cursors are intended to be used
/// quickly. Individual cursor values are normally valid for days, but in rare
/// cases may be reset sooner. Cursor reset errors should be handled by fetching
/// a new cursor from `getEvents`. The associated value is the approximate
/// timestamp of the most recent event returned by the cursor. This should be
/// used as a resumption point when calling `getEvents` to obtain a new cursor.
///
/// @param reset Cursors are intended to be used quickly. Individual cursor
/// values are normally valid for days, but in rare cases may be reset sooner.
/// Cursor reset errors should be handled by fetching a new cursor from
/// `getEvents`. The associated value is the approximate timestamp of the most
/// recent event returned by the cursor. This should be used as a resumption
/// point when calling `getEvents` to obtain a new cursor.
///
/// @return An initialized instance.
///
- (instancetype)initWithReset:(NSDate *)reset;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "bad_cursor".
///
/// @return Whether the union's current tag state has value "bad_cursor".
///
- (BOOL)isBadCursor;

///
/// Retrieves whether the union's current tag state has value "reset".
///
/// @note Call this method and ensure it returns true before accessing the
/// `reset` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "reset".
///
- (BOOL)isReset;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGGetTeamEventsContinueError` union.
///
@interface DBTEAMLOGGetTeamEventsContinueErrorSerializer : NSObject

///
/// Serializes `DBTEAMLOGGetTeamEventsContinueError` instances.
///
/// @param instance An instance of the `DBTEAMLOGGetTeamEventsContinueError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGetTeamEventsContinueError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGetTeamEventsContinueError *)instance;

///
/// Deserializes `DBTEAMLOGGetTeamEventsContinueError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGetTeamEventsContinueError` API object.
///
/// @return An instantiation of the `DBTEAMLOGGetTeamEventsContinueError`
/// object.
///
+ (DBTEAMLOGGetTeamEventsContinueError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
