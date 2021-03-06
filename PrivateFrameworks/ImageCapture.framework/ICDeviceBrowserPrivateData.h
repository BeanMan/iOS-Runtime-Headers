/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceBrowserPrivateData : NSObject {
    BOOL  _browsing;
    id  _delegate;
    NSMutableArray * _internalDevices;
}

@property (getter=isBrowsing) BOOL browsing;
@property id delegate;
@property (retain) NSMutableArray *internalDevices;

- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)internalDevices;
- (BOOL)isBrowsing;
- (void)setBrowsing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDevices:(id)arg1;

@end
