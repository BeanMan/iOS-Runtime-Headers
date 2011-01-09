/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock, NSString, NSArray;



@interface ISURLCacheGroup : NSURLCache 
{
    NSArray *_caches;
    NSString *_clientIdentifier;
    NSLock *_lock;
}

@property(readonly) NSString *clientIdentifier;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)saveMemoryCacheToDisk;
- (id)initWithClientIdentifier:(id)arg1;
- (void)purgeMemoryCache;
- (void)removeAllCachedResponses;
- (id)clientIdentifier;
- (id)initWithMemoryCapacity:(NSUInteger)arg1 diskCapacity:(NSUInteger)arg2 diskPath:(id)arg3;
- (void)setCachesFromPropertyList:(id)arg1;
- (id)_ntsCacheForPersistentIdentifier:(id)arg1;
- (id)_ntsCacheForRequest:(id)arg1;
- (void)_reloadForNewCaches:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)cachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)removeCachedResponseForRequest:(id)arg1;
- (NSUInteger)memoryCapacity;
- (NSUInteger)diskCapacity;
- (void)setMemoryCapacity:(NSUInteger)arg1;
- (void)setDiskCapacity:(NSUInteger)arg1;
- (NSUInteger)currentMemoryUsage;
- (NSUInteger)currentDiskUsage;

@end