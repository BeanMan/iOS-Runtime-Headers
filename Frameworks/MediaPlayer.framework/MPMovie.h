/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPMovie : NSObject 
{
    id _internal;
}

@property(readonly) NSURL *url;
@property(readonly) NSInteger movieMediaTypes;
@property NSInteger movieSourceType;
@property(readonly) double duration;
@property(readonly) double playableDuration;
@property(readonly) CGSize naturalSize;
@property double startPlaybackTime;
@property double endPlaybackTime;

+ (id)movieWithURL:(id)arg1 error:(id*)arg2;

- (struct CGSize { float x1; float x2; })naturalSize;
- (double)duration;
- (void)dealloc;
- (id)url;
- (double)endPlaybackTime;
- (id)_initWithURL:(id)arg1 error:(id*)arg2;
- (void)setStartPlaybackTime:(double)arg1;
- (double)startPlaybackTime;
- (void)setEndPlaybackTime:(double)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_typeAvailableNotification:(id)arg1;
- (void)_fileValidationDidFinishNotification:(id)arg1;
- (void)_determineMediaType;
- (double)playableDuration;
- (NSInteger)movieMediaTypes;
- (void)setMovieSourceType:(NSInteger)arg1;
- (NSInteger)movieSourceType;
- (id)_MPArrayQueueItem;

@end