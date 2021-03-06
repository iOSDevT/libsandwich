/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, NSString, SAPersonAttribute;

@interface SAPhoneCall : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* recipient;
@property(assign, nonatomic) BOOL faceTime;
@property(retain, nonatomic) SAPersonAttribute* callRecipient;
@property(copy, nonatomic) NSURL* targetAppId;
+ (id)call;
+ (id)callWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

