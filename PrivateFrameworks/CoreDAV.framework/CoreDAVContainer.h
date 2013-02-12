/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSDictionary, NSMutableSet, NSNumber, NSSet, NSString;

@interface CoreDAVContainer : CoreDAVItem {
    NSString *_containerTitle;
    NSString *_href;
    NSNumber *_isUnauthenticated;
    NSString *_owner;
    NSSet *_privileges;
    NSString *_pushKey;
    NSDictionary *_pushTransports;
    NSString *_quotaAvailable;
    NSString *_quotaUsed;
    NSString *_resourceID;
    NSMutableSet *_resourceTypes;
    NSSet *_supportedReports;
}

@property(retain) NSString *containerTitle;
@property(readonly) NSString *href;
@property(retain) NSNumber *isUnauthenticated;
@property(retain) NSString *owner;
@property(retain) NSSet *privileges;
@property(retain) NSString *pushKey;
@property(retain) NSDictionary *pushTransports;
@property(retain) NSString *quotaAvailable;
@property(retain) NSString *quotaUsed;
@property(retain) NSString *resourceID;
@property(retain) NSSet *resourceTypes;
@property(retain) NSSet *supportedReports;
@property(readonly) BOOL hasReadPrivileges;
@property(readonly) BOOL hasWriteContentPrivileges;
@property(readonly) BOOL hasWritePropertiesPrivileges;
@property(readonly) BOOL isAddressBook;
@property(readonly) BOOL isPrincipal;
@property(readonly) BOOL isSearchAddressBook;
@property(readonly) BOOL isSharedAddressBook;
@property(readonly) BOOL supportsPrincipalPropertySearchReport;
@property(readonly) BOOL supportsSyncCollectionReport;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)errorOnUnknownChildren;
+ (BOOL)parsingWithSubItems;

- (void)_addResourceTypeWithNameSpace:(const char *)arg1 elementName:(const char *)arg2;
- (id)_copyAdditionalParseRules;
- (id)containerTitle;
- (id)copyCoreDAVParseRules;
- (void)dealloc;
- (id)description;
- (BOOL)hasPrivilegeWithNameSpace:(const char *)arg1 elementName:(const char *)arg2;
- (BOOL)hasReadPrivileges;
- (BOOL)hasResourceTypeWithNameSpace:(const char *)arg1 elementName:(const char *)arg2;
- (BOOL)hasWriteContentPrivileges;
- (BOOL)hasWritePropertiesPrivileges;
- (id)href;
- (id)initWithXMLParser:(id)arg1 nameSpace:(id)arg2 elementName:(id)arg3 nodeAttributes:(id)arg4 root:(id)arg5 parent:(id)arg6 parentSetter:(SEL)arg7 ruleForMe:(id)arg8;
- (BOOL)isAddressBook;
- (BOOL)isPrincipal;
- (BOOL)isSearchAddressBook;
- (BOOL)isSharedAddressBook;
- (id)isUnauthenticated;
- (void)noteIgnoredItem:(id)arg1;
- (id)owner;
- (id)privileges;
- (id)pushKey;
- (id)pushTransports;
- (id)quotaAvailable;
- (id)quotaUsed;
- (id)resourceID;
- (id)resourceTypes;
- (void)setAddressBookNode:(id)arg1;
- (void)setCollectionNode:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setIsUnauthenticated:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPrincipalNode:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setPushTransports:(id)arg1;
- (void)setQuotaAvailable:(id)arg1;
- (void)setQuotaUsed:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setResourceTypes:(id)arg1;
- (void)setSearchAddressBookNode:(id)arg1;
- (void)setSharedAddressBookNode:(id)arg1;
- (void)setSupportedReports:(id)arg1;
- (id)supportedReports;
- (BOOL)supportsPrincipalPropertySearchReport;
- (BOOL)supportsReportWithNameSpace:(const char *)arg1 elementName:(const char *)arg2;
- (BOOL)supportsSyncCollectionReport;

@end