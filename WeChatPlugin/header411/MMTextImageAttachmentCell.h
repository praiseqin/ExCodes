//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTextAttachmentCell.h"

#import "IMMFavFileDataMgrExt.h"
#import "IMMFavRecordDownloadMgrExt.h"
#import "IMMRecordDownloadMgrExt.h"

@class NSImage, NSString;

@interface MMTextImageAttachmentCell : MMTextAttachmentCell <IMMFavRecordDownloadMgrExt, IMMRecordDownloadMgrExt, IMMFavFileDataMgrExt>
{
    NSImage *_midImage;
}

@property(retain, nonatomic) NSImage *midImage; // @synthesize midImage=_midImage;
- (void).cxx_destruct;
- (void)onMidImageGenerated:(id)arg1 paraInfo:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadFavItemRecordOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)reloadImage;
- (void)useMidImageDrawRect:(struct CGRect)arg1 imageRect:(struct CGRect)arg2;
- (void)useOriginalImageDrawRect:(struct CGRect)arg1 imageRect:(struct CGRect)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

