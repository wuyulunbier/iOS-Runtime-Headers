/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSColorStub;

@interface EDColorLocator : NSObject  {
    unsigned int mColorOffset;
    int mColorIndex;
    NSColorStub *mColor;
}


- (id)initWith:(id)arg1 index:(int)arg2 offset:(unsigned int)arg3;
- (int)colorIndex;
- (void)setColorIndex:(int)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)offset;
- (void)dealloc;

@end