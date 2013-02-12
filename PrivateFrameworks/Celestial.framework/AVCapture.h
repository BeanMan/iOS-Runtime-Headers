/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVCamera, CALayer, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface AVCapture : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    NSUInteger _audioCaptureFormat;
    BOOL _audioMeteringEnabled;
    NSString *_captureMode;
    NSDictionary *_captureOptions;
    BOOL _disableRemoteImplementation;
    BOOL _dumpSensorInfo;
    NSURL *_fileURLForRecording;
    NSString *_focusMethod;
    } _focusPointOfInterest;
    long long _freeDiskSpaceLimit;
    BOOL _isCapturingPhoto;
    BOOL _isPaused;
    BOOL _isPreviewing;
    BOOL _isRecording;
    BOOL _lockAutoExposure;
    BOOL _lockAutoWhiteBalance;
    NSMutableDictionary *_metadata;
    BOOL _monitorSubjectArea;
    NSInteger _noiseReductionMethod;
    NSString *_orientation;
    BOOL _pauseRecordingOnInterruption;
    struct AVCapturePrivate { struct OpaqueFigRecorder {} *x1; } *_priv;
    NSString *_qualityPreset;
    double _recordedDurationLimit;
    long long _recordedFileSizeBytesLimit;
    AVCamera *_sourceCamera;
    BOOL _suspendPreviewOnPhotoCapture;
    } _videoDimensions;
    CALayer *_videoPreviewLayer;
}

@property(readonly) NSArray *audioLevel;
@property(retain) NSString *captureMode;
@property(retain) NSURL *fileURLForRecording;
@property(copy) NSDictionary *metadata;
@property(readonly) NSNumber *noiseReductionMethodCount;
@property(retain) NSString *orientation;
@property(retain) NSString *qualityPreset;
@property(retain) AVCamera *sourceCamera;
@property(retain) CALayer *videoPreviewLayer;
@property NSUInteger audioCaptureFormat;
@property BOOL audioMeteringEnabled;
@property BOOL disableRemoteImplementation;
@property BOOL dumpSensorInfo;
@property long long freeDiskSpaceLimit;
@property(readonly) BOOL isCapturingPhoto;
@property(readonly) BOOL isPaused;
@property(readonly) BOOL isPreviewing;
@property(readonly) BOOL isRecording;
@property BOOL lockAutoExposure;
@property BOOL lockAutoWhiteBalance;
@property BOOL monitorSubjectArea;
@property NSInteger noiseReductionMethod;
@property BOOL pauseRecordingOnInterruption;
@property(readonly) double recordedDuration;
@property double recordedDurationLimit;
@property(readonly) long long recordedFileSizeBytes;
@property long long recordedFileSizeBytesLimit;
@property BOOL suspendPreviewOnPhotoCapture;
@property CGSize videoDimensions;

+ (id)availableModes;
+ (id)convertMoofToMoovInFile:(id)arg1;
+ (id)focusModeMap;
+ (id)presetMap;
+ (id)updateMetadataInFile:(id)arg1 withMetadata:(id)arg2;

- (void)_destroyFigRecorder;
- (struct OpaqueFigRecorder { }*)_figRecorder;
- (unsigned long)audioCaptureFormat;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (id)audioLevel;
- (BOOL)audioMeteringEnabled;
- (id)captureMode;
- (BOOL)capturePhoto;
- (void)dealloc;
- (void)didCancelFocusingHandler:(id)arg1;
- (void)didFinishFocusingHandler:(id)arg1;
- (void)didPauseRecordingHandler;
- (void)didResumeRecordingHandler;
- (void)didStartFocusingHandler:(id)arg1;
- (void)didStartPreviewingHandler;
- (void)didStartRecordingHandler;
- (void)didStopPreviewingHandler;
- (void)didStopRecordingHandler;
- (BOOL)disableRemoteImplementation;
- (BOOL)dumpSensorInfo;
- (id)fileURLForRecording;
- (BOOL)focusUsingMethod:(id)arg1 options:(id)arg2;
- (long long)freeDiskSpaceLimit;
- (id)init;
- (BOOL)isCapturingPhoto;
- (BOOL)isPaused;
- (BOOL)isPreviewing;
- (BOOL)isRecording;
- (BOOL)lockAutoExposure;
- (BOOL)lockAutoWhiteBalance;
- (id)metadata;
- (BOOL)monitorSubjectArea;
- (NSInteger)noiseReductionMethod;
- (id)noiseReductionMethodCount;
- (id)noiseReductionMethodName;
- (id)objectForMetadataKey:(id)arg1;
- (id)optionsForCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)orientation;
- (void)pausePreview;
- (BOOL)pauseRecording;
- (BOOL)pauseRecordingOnInterruption;
- (void)photoTakenHandler:(id)arg1;
- (id)qualityPreset;
- (double)recordedDuration;
- (double)recordedDurationLimit;
- (long long)recordedFileSizeBytes;
- (long long)recordedFileSizeBytesLimit;
- (void)resumePreview;
- (BOOL)resumeRecording;
- (void)setAudioCaptureFormat:(unsigned long)arg1;
- (void)setAudioMeteringEnabled:(BOOL)arg1;
- (void)setCaptureMode:(id)arg1;
- (void)setDisableRemoteImplementation:(BOOL)arg1;
- (void)setDumpSensorInfo:(BOOL)arg1;
- (void)setFileURLForRecording:(id)arg1;
- (void)setFreeDiskSpaceLimit:(long long)arg1;
- (void)setIsCapturingPhoto:(BOOL)arg1;
- (void)setIsPaused:(BOOL)arg1;
- (void)setIsPreviewing:(BOOL)arg1;
- (void)setIsRecording:(BOOL)arg1;
- (void)setLockAutoExposure:(BOOL)arg1;
- (void)setLockAutoWhiteBalance:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMonitorSubjectArea:(BOOL)arg1;
- (void)setNoiseReductionMethod:(NSInteger)arg1;
- (void)setObject:(id)arg1 forMetadataKey:(id)arg2;
- (void)setOrientation:(id)arg1;
- (void)setPauseRecordingOnInterruption:(BOOL)arg1;
- (void)setQualityPreset:(id)arg1;
- (void)setRecordedDurationLimit:(double)arg1;
- (void)setRecordedFileSizeBytesLimit:(long long)arg1;
- (void)setSourceCamera:(id)arg1;
- (void)setSuspendPreviewOnPhotoCapture:(BOOL)arg1;
- (void)setVideoDimensions:(struct CGSize { float x1; float x2; })arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (id)sourceCamera;
- (BOOL)startPreview;
- (BOOL)startRecording;
- (BOOL)stopPreview;
- (BOOL)stopRecording;
- (BOOL)suspendPreviewOnPhotoCapture;
- (struct CGSize { float x1; float x2; })videoDimensions;
- (id)videoPreviewLayer;

@end