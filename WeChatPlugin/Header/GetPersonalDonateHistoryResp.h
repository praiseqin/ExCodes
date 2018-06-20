//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GetPersonalDonateHistoryResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTotalAmount:1;
    unsigned int hasTotalCount:1;
    unsigned int totalAmount;
    unsigned int totalCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetTotalCount:) unsigned int totalCount; // @synthesize totalCount;
@property(readonly, nonatomic) BOOL hasTotalCount; // @synthesize hasTotalCount;
@property(nonatomic, setter=SetTotalAmount:) unsigned int totalAmount; // @synthesize totalAmount;
@property(readonly, nonatomic) BOOL hasTotalAmount; // @synthesize hasTotalAmount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addList:(id)arg1;
- (void)addListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
- (id)listList;
- (id)init;

@end
