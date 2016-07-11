/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneParameters : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying> {
    FBSSceneClientSettings * _clientSettings;
    FBSDisplay * _display;
    FBSSceneSettings * _settings;
    FBSSceneSpecification * _specification;
}

@property (nonatomic, copy) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) FBSDisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

+ (id)parametersForSpecification:(id)arg1;

- (void)_configureCopy:(id)arg1;
- (id)clientSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpecification:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setClientSettings:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end