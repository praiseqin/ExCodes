//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IIPxxExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MMMonitorConfigMgr : MMService <MMService, IIPxxExt>
{
    NSMutableDictionary *m_dicMainThreadMonitorCongfig;
    NSTimer *m_checkUpdateTimer;
}

- (void).cxx_destruct;
- (void)onGetIpxxMsgContent:(id)arg1;
- (void)saveIsMonitorState:(BOOL)arg1;
- (BOOL)saveAlreadyUploadCnt:(unsigned long long)arg1;
- (unsigned long long)getAlreadyUploadCnt;
- (unsigned long long)getReportEnv;
- (unsigned long long)getOneTimeUpload;
- (unsigned long long)getMaxDailyReport;
- (BOOL)getIsAutoReport;
- (BOOL)getIsMonitor;
- (BOOL)isIPXXExpired;
- (void)onStategy:(id)arg1;
- (void)onIPXX:(id)arg1;
- (void)onIPXXReportBlockDump:(id)arg1;
- (void)onIPXXStrategy:(id)arg1;
- (BOOL)parseCommonNode:(struct XmlReaderNode_t *)arg1 toConfig:(id)arg2;
- (id)getConfigFilePath;
- (void)saveDumpReportConfig;
- (BOOL)updateAlreadyUploadCnt;
- (void)checkUpdateUploadCntStrategy;
- (id)getDateStringFromDate:(id)arg1;
- (void)loadConfig;
- (void)onTimeOffsetTime;
- (void)onTimeCheck;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

