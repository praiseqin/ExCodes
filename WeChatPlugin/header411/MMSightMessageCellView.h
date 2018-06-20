//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "IMMMessageVideoServiceExt.h"
#import "MMCDNDownloadMgrExt.h"
#import "MMMouseDetectImageViewDelegate.h"
#import "MMVideoPlayerViewDelegate.h"

@class AVPlayer, AVPlayerLayer, MMCircleActionButton, MMCircularProgressView, MMMouseDetectImageView, MMVideoPlayerView, NSImageView, NSString, NSTextField, TKStateMachine;

@interface MMSightMessageCellView : MMMessageCellView <MMMouseDetectImageViewDelegate, MMVideoPlayerViewDelegate, MMCDNDownloadMgrExt, IMMMessageVideoServiceExt>
{
    BOOL _thumbnailDownloadFailed;
    BOOL _isPlaying;
    BOOL _playingWithSound;
    BOOL _isStartDownloadManully;
    int _fileMessageType;
    MMMouseDetectImageView *_thumbnailImageView;
    NSImageView *_volumeIconView;
    NSImageView *_volumeMaskView;
    MMCircularProgressView *_progressView;
    NSImageView *_progressBackgroundView;
    NSTextField *_videoExpireWording;
    MMCircleActionButton *_actionButton;
    TKStateMachine *_stateMachine;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    MMVideoPlayerView *_videoPlayerView;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) BOOL isStartDownloadManully; // @synthesize isStartDownloadManully=_isStartDownloadManully;
@property(nonatomic) BOOL playingWithSound; // @synthesize playingWithSound=_playingWithSound;
@property(retain, nonatomic) MMVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MMCircleActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) int fileMessageType; // @synthesize fileMessageType=_fileMessageType;
@property(retain, nonatomic) NSTextField *videoExpireWording; // @synthesize videoExpireWording=_videoExpireWording;
@property(retain, nonatomic) NSImageView *progressBackgroundView; // @synthesize progressBackgroundView=_progressBackgroundView;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSImageView *volumeMaskView; // @synthesize volumeMaskView=_volumeMaskView;
@property(retain, nonatomic) NSImageView *volumeIconView; // @synthesize volumeIconView=_volumeIconView;
@property(retain, nonatomic) MMMouseDetectImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)onPlayEnd;
- (void)_tellDelegateToResize;
- (void)onReSizeWithFirstFrame:(struct CGSize)arg1;
- (BOOL)makeAddToFavoritesUnavailable;
- (BOOL)makeForwardUnavailable;
- (BOOL)isFinishUploadOrDownload;
- (BOOL)allowAddToFavorites;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)draggablePasteboardTypes;
- (struct CGRect)draggingFrameForEvent:(id)arg1;
- (id)draggingImage;
- (struct CGRect)clickableArea;
- (BOOL)draggingEnabled;
- (void)mouseDetectImageView:(id)arg1 onMouseExit:(id)arg2;
- (void)mouseDetectImageView:(id)arg1 onMouseEntered:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)retry:(id)arg1;
- (void)cdnDownloadMgrDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDidFinishedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)messageVideoService:(id)arg1 videoUpdateStatusChangedWithMessage:(id)arg2;
- (void)messageVideoService:(id)arg1 didFailDownloadWithMessage:(id)arg2;
- (void)messageVideoService:(id)arg1 didFinishDownloadWithMessage:(id)arg2;
- (void)messageVideoService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 withMessage:(id)arg4;
- (void)resendMessage;
- (void)_fireStateEvent:(id)arg1;
- (id)defaultVideoThumbnail;
- (BOOL)isPlaying;
- (void)stopPlaying;
- (void)setupPlayerLayer;
- (void)playVideoWithSound:(BOOL)arg1;
- (void)playVideoMuted;
- (void)showExpireWording;
- (void)layoutVolumeMaskView;
- (void)layoutThumbnailImageView;
- (void)layoutProgressBackgroundView;
- (void)layoutActionButton;
- (BOOL)videoDownloaded;
- (void)populateWithMessage:(id)arg1;
- (void)_setupStateMachine;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
