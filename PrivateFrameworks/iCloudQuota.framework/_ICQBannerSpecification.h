/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQBannerSpecification : NSObject {
    bool  _hasDismissButtonDefault;
    NSString * _messageFormat;
    NSArray * _messageLinks;
    NSDictionary * _serverDict;
    NSString * _title;
}

@property (nonatomic) bool hasDismissButtonDefault;
@property (nonatomic, retain) NSString *messageFormat;
@property (nonatomic, retain) NSArray *messageLinks;
@property (nonatomic, retain) NSDictionary *serverDict;
@property (nonatomic, retain) NSString *title;

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (bool)hasDismissButtonDefault;
- (id)initWithServerDictionary:(id)arg1;
- (id)messageFormat;
- (id)messageLinks;
- (id)serverDict;
- (void)setHasDismissButtonDefault:(bool)arg1;
- (void)setMessageFormat:(id)arg1;
- (void)setMessageLinks:(id)arg1;
- (void)setMessageWithServerMessage:(id)arg1;
- (void)setServerDict:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
