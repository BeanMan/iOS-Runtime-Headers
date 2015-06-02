/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding> {
    NSString *_format;
    NSString *_name;
    NSString *_readHAPCharacteristicName;
    BOOL _supportsLocalization;
    NSDictionary *_values;
    NSString *_writeHAPCharacteristicName;
}

@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *readHAPCharacteristicName;
@property (nonatomic) BOOL supportsLocalization;
@property (nonatomic, retain) NSDictionary *values;
@property (nonatomic, retain) NSString *writeHAPCharacteristicName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)generateDictionary;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 readHAPCharacteristic:(id)arg2 writeHAPCharacteristic:(id)arg3 format:(id)arg4;
- (id)name;
- (id)readHAPCharacteristicName;
- (void)setFormat:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReadHAPCharacteristicName:(id)arg1;
- (void)setSupportsLocalization:(BOOL)arg1;
- (void)setValues:(id)arg1;
- (void)setWriteHAPCharacteristicName:(id)arg1;
- (BOOL)supportsLocalization;
- (id)values;
- (id)writeHAPCharacteristicName;

@end