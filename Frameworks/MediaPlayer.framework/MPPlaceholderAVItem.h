/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaceholderAVItem : MPAVItem <MPCRadioItemIdentifier> {
    NSString * _album;
    NSString * _artist;
    double  _durationFromExternalMetadata;
    BOOL  _explicitTrack;
    BOOL  _likeStateEnabled;
    NSString * _mainTitle;
    BOOL  _supportsLikedState;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double durationFromExternalMetadata;
@property (getter=isExplicitTrack, nonatomic) BOOL explicitTrack;
@property (readonly) unsigned int hash;
@property (getter=isLikedStateEnabled, nonatomic) BOOL likedStateEnabled;
@property (nonatomic, retain) NSString *mainTitle;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsLikedState;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (double)durationFromExternalMetadata;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDurationFromExternalMetadata:(double)arg1;
- (void)setExplicitTrack:(BOOL)arg1;
- (void)setLikedStateEnabled:(BOOL)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setSupportsLikedState:(BOOL)arg1;
- (BOOL)supportsLikedState;
- (BOOL)supportsSettingCurrentTime;
- (BOOL)supportsSkip;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (BOOL)mpcReporting_isValidReportingItem;
- (id)radioIdentifier;

@end
