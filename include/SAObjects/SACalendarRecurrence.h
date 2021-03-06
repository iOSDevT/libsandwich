/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int interval;
@property(assign, nonatomic) int frequency;
@property(copy, nonatomic) NSDate* endDate;
@property(assign, nonatomic) int endCount;
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;
+ (id)recurrence;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

