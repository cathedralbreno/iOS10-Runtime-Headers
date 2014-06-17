/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemOfferButtonAppearance, <SKUITrackSwooshViewControllerDelegate>, SKUITrackSwooshCollectionViewLayout, NSArray, UICollectionView, NSObject<OS_dispatch_source>, SKUISwooshView, SKUISwooshPageComponent;

@interface SKUITrackSwooshViewController : SKUISwooshViewController <SKUIItemStateCenterObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SKUITrackSwooshCollectionViewLayout *_collectionViewLayout;
    bool_didInitialReload;
    NSObject<OS_dispatch_source> *_doubleTapTimer;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    SKUISwooshView *_swooshView;
    SKUISwooshPageComponent *_trackSwoosh;
}

@property <SKUITrackSwooshViewControllerDelegate> * delegate;
@property(retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(readonly) NSArray * lockups;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } seeAllButtonFrame;


- (void)_timeoutDoubleTapTimer;
- (void)_cancelDoubleTapTimer;
- (id)initWithTrackSwoosh:(id)arg1;
- (void)reloadCellsForLockups:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })seeAllButtonFrame;
- (void)_seeAllAction:(id)arg1;
- (id)lockups;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (id)itemOfferButtonAppearance;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)indexPathsForVisibleItems;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

@end