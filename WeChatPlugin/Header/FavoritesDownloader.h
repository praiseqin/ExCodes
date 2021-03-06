//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"

@class FavoritesDownloadCDNInfo, FavoritesItem, NSString;

__attribute__((visibility("hidden")))
@interface FavoritesDownloader : MMObject <ICdnComMgrExt>
{
    FavoritesItem *_favItem;
    int _runningState;
    FavoritesDownloadCDNInfo *_downloadingInfo;
    BOOL _isCanceled;
    id <FavoritesDownloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)BroadcastDownloadFail:(int)arg1;
- (void)tryStartNextData;
- (id)getItem;
- (BOOL)stop;
- (void)run;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

