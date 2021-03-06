/* Generated by RuntimeBrowser.
 */

@protocol FCFetchCoordinatorDelegate <NSObject>

@required

- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 addFetchOperation:(NSOperation *)arg2 context:(id)arg3;
- (NSOperation *)fetchCoordinator:(FCFetchCoordinator *)arg1 fetchOperationForKeys:(NSSet *)arg2 context:(id)arg3 qualityOfService:(int)arg4 relativePriority:(int)arg5;
- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 filterKeysToFetch:(NSMutableSet *)arg2 context:(id)arg3;

@end
