/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSMutableDictionary;

@interface CNFHistoryManager : NSObject {
    NSMutableDictionary *_emailAddressHistory;
    NSMutableDictionary *_phoneNumberHistory;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (id)_fullPathToConferenceHistoryPlist;
- (id)_fullPathToConferenceSupportDirectory;
- (void)_reloadHistory;
- (void)_writeConferenceHistory;
- (id)autorelease;
- (void)dealloc;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (id)init;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (void)setHavePreviouslyConferenced:(BOOL)arg1 withID:(id)arg2;

@end