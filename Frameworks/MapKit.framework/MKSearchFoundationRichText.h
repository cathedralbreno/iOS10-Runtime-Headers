/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationRichText : SFRichText {
    id /* block */  _requestUIUpdateBlock;
}

@property (nonatomic, copy) id /* block */ requestUIUpdateBlock;

- (void).cxx_destruct;
- (id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (void)loadRichTextWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)requestUIUpdateBlock;
- (void)setRequestUIUpdateBlock:(id /* block */)arg1;

@end
