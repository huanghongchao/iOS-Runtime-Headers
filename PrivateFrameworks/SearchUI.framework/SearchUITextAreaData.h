/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITextAreaData : NSObject {
    UIImage *_embeddedThumbnail;
    NSString *_footnote;
    NSArray *_richTextData;
    UIImage *_secondaryImage;
    NSString *_secondaryTitle;
    BOOL _secondaryTitleDetached;
    NSString *_title;
    unsigned int _titleMaxLines;
}

@property (nonatomic, retain) UIImage *embeddedThumbnail;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, retain) NSArray *richTextData;
@property (nonatomic, retain) UIImage *secondaryImage;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic) BOOL secondaryTitleDetached;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned int titleMaxLines;

+ (id)embeddedThumbnailForResult:(id)arg1;

- (void).cxx_destruct;
- (id)embeddedThumbnail;
- (id)footnote;
- (id)initWithResult:(id)arg1;
- (id)richTextData;
- (id)secondaryImage;
- (id)secondaryTitle;
- (BOOL)secondaryTitleDetached;
- (void)setEmbeddedThumbnail:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setRichTextData:(id)arg1;
- (void)setSecondaryImage:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleDetached:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLines:(unsigned int)arg1;
- (id)title;
- (unsigned int)titleMaxLines;

@end