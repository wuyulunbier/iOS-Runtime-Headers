/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAcknowledgmentGlyphView : UIView {
    double  _animationDuration;
    UIColor * _glyphColor;
    struct CGPoint { 
        float x; 
        float y; 
    }  _glyphOffset;
}

@property (nonatomic, readonly) int acknowledgmentType;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } glyphOffset;

+ (void)cacheGlyphView:(id)arg1;
+ (id)glyphViewForAcknowledgmentType:(int)arg1;
+ (void)prewarmGlyphViewCache;
+ (id)viewCache;

- (void).cxx_destruct;
- (int)acknowledgmentType;
- (void)animateWithDelay:(double)arg1 completionDelay:(double)arg2 completion:(id /* block */)arg3;
- (double)animationDuration;
- (id)glyphColor;
- (struct CGPoint { float x1; float x2; })glyphOffset;
- (void)setGlyphColor:(id)arg1;

@end