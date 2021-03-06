/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCollectionCalculator : NSObject {
    NSArray * _bucketBoundaries;
    unsigned int  _currentBucket;
    double  _currentEndDate;
    double  _currentStartDate;
    BOOL  _detailBySource;
}

@property (nonatomic, readonly) NSArray *bucketBoundaries;
@property (nonatomic, readonly) unsigned int currentBucket;
@property (nonatomic, readonly) double currentEndDate;
@property (nonatomic, readonly) double currentStartDate;
@property (nonatomic) BOOL detailBySource;

- (void).cxx_destruct;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (BOOL)advanceBucket;
- (id)bucketBoundaries;
- (unsigned int)currentBucket;
- (double)currentEndDate;
- (double)currentStartDate;
- (BOOL)detailBySource;
- (BOOL)hasData;
- (id)initWithBucketBoundaries:(id)arg1;
- (void)setDetailBySource:(BOOL)arg1;

@end
