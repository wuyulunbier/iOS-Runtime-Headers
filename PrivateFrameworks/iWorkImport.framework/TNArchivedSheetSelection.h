/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TNSheetSelection;

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection> {
    TNSheetSelection *mSelection;
}

@property(retain) TNSheetSelection * selection;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end