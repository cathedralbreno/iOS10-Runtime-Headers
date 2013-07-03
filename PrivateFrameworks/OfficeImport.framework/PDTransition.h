/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDTransitionOptions;

@interface PDTransition : OADProperties  {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}


- (BOOL)hasTransitionOptions;
- (void)setAdvanceAfterTime:(int)arg1;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (int)advanceAfterTime;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)isAdvanceOnClick;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasSpeed;
- (BOOL)hasType;
- (void)setSpeed:(int)arg1;
- (int)speed;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)setOptions:(id)arg1;
- (int)type;
- (id)options;

@end