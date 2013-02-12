/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKUITheme, NSArray, NSDictionary, NSNumber, NSString, SSItem, SSItemLookupRequest, UIImage;

@interface GKGame : NSObject {
    NSArray *_achievementDescriptions;
    NSDictionary *_achievementDescriptionsDictionary;
    UIImage *_cachedIcons[2];
    NSString *_defaultCategory;
    NSDictionary *_gameDescriptor;
    UIImage *_glossedIcons[2];
    BOOL _hasAggregateLeaderboard;
    BOOL _hasDetails;
    NSDictionary *_iconURLs;
    BOOL _isPrerendered;
    NSString *_name;
    NSUInteger _numberOfAchievements;
    NSUInteger _numberOfCategories;
    BOOL _sandboxed;
    SSItem *_storeItem;
    id _storeItemCompletionHandler;
    SSItemLookupRequest *_storeItemLookupRequest;
    BOOL _supportAchievements;
    BOOL _supportLeaderboard;
    GKUITheme *_theme;
    NSNumber *_themeIndex;
}

@property(retain) NSArray *achievementDescriptions;
@property(retain) NSDictionary *achievementDescriptionsDictionary;
@property(retain,readonly) NSString *adamID;
@property(retain,readonly) NSString *bundleIdentifier;
@property(retain,readonly) NSString *bundleVersion;
@property(retain,readonly) NSString *cacheKey;
@property(retain) NSString *defaultCategory;
@property(retain,readonly) NSString *externalVersion;
@property(retain) NSDictionary *gameDescriptor;
@property(retain) NSDictionary *iconURLs;
@property(retain) NSString *name;
@property(retain) SSItem *storeItem;
@property(copy) ? *storeItemCompletionHandler;
@property(retain) GKUITheme *theme;
@property(retain) NSNumber *themeIndex;
@property BOOL hasAggregateLeaderboard;
@property BOOL hasDetails;
@property BOOL isPrerendered;
@property NSUInteger numberOfAchievements;
@property NSUInteger numberOfCategories;
@property(getter=isSandboxed) BOOL sandboxed;
@property BOOL supportAchievements;
@property BOOL supportLeaderboard;

+ (NSInteger)_iconFormatForSize:(NSInteger)arg1;
+ (void)clearCache;
+ (id)currentGame;
+ (id)currentGameWithDescriptor:(id)arg1;
+ (id)defaultGameIcon;
+ (id)defaultGameIconWithSize:(NSInteger)arg1;
+ (id)gameWithDictionary:(id)arg1;
+ (id)gameWithGameDescriptor:(id)arg1;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;

- (id)_iconURLForSize:(NSInteger)arg1;
- (id)achievementDescriptions;
- (id)achievementDescriptionsDictionary;
- (id)adamID;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)cacheKey;
- (void)dealloc;
- (id)defaultCategory;
- (id)externalVersion;
- (id)gameDescriptor;
- (BOOL)hasAggregateLeaderboard;
- (BOOL)hasDetails;
- (id)iconURLs;
- (id)init;
- (id)initWithGameDescriptor:(id)arg1;
- (BOOL)isPrerendered;
- (BOOL)isSandboxed;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)loadGameInfoWithCompletionHandler:(id)arg1;
- (void)loadIconForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)loadIconForSize:(NSInteger)arg1 withGloss:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)loadStoreItemWithCompletionHandler:(id)arg1;
- (id)name;
- (NSUInteger)numberOfAchievements;
- (NSUInteger)numberOfCategories;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)setAchievementDescriptions:(id)arg1;
- (void)setAchievementDescriptionsDictionary:(id)arg1;
- (void)setDefaultCategory:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setHasAggregateLeaderboard:(BOOL)arg1;
- (void)setHasDetails:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)setIconURLs:(id)arg1;
- (void)setIsPrerendered:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfAchievements:(NSUInteger)arg1;
- (void)setNumberOfCategories:(NSUInteger)arg1;
- (void)setSandboxed:(BOOL)arg1;
- (void)setStoreItem:(id)arg1;
- (void)setStoreItemCompletionHandler:(id)arg1;
- (void)setSupportAchievements:(BOOL)arg1;
- (void)setSupportLeaderboard:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeIndex:(id)arg1;
- (id)storeItem;
- (id)storeItemCompletionHandler;
- (BOOL)supportAchievements;
- (BOOL)supportLeaderboard;
- (id)theme;
- (id)themeIndex;
- (void)updateFromDictionary:(id)arg1;

@end