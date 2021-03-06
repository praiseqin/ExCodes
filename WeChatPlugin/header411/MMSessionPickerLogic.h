//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCharacterSet, NSMutableArray, NSMutableOrderedSet, NSString, WCContactData;

@interface MMSessionPickerLogic : NSObject
{
    NSMutableOrderedSet *_displayedRowsSet;
    NSMutableOrderedSet *_selectedUserNamesSet;
    NSMutableArray *_availableRows;
    NSMutableArray *_reservedRows;
    NSArray *_groupsForSearch;
    NSArray *_contactsForSearch;
    BOOL _needsDetermineAvailable;
    BOOL _needsDetermineDisplayed;
    NSCharacterSet *_strictLetterCharacterSet;
    BOOL _allowsMultipleSelection;
    BOOL _showsGroupChats;
    BOOL _showsOfficialAccounts;
    BOOL _showsOtherNonhumanChats;
    unsigned long long _type;
    WCContactData *_preSelectedContact;
    WCContactData *_assignedContact;
    NSArray *_filteredUserNames;
    NSString *_searchQuery;
    unsigned long long _keyboardFocusedRow;
    NSArray *_preSelectedUserNames;
    NSArray *_assignedUserNames;
}

@property(retain, nonatomic) NSArray *assignedUserNames; // @synthesize assignedUserNames=_assignedUserNames;
@property(retain, nonatomic) NSArray *preSelectedUserNames; // @synthesize preSelectedUserNames=_preSelectedUserNames;
@property(nonatomic) unsigned long long keyboardFocusedRow; // @synthesize keyboardFocusedRow=_keyboardFocusedRow;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) BOOL showsOtherNonhumanChats; // @synthesize showsOtherNonhumanChats=_showsOtherNonhumanChats;
@property(nonatomic) BOOL showsOfficialAccounts; // @synthesize showsOfficialAccounts=_showsOfficialAccounts;
@property(nonatomic) BOOL showsGroupChats; // @synthesize showsGroupChats=_showsGroupChats;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) NSArray *filteredUserNames; // @synthesize filteredUserNames=_filteredUserNames;
@property(retain, nonatomic) WCContactData *assignedContact; // @synthesize assignedContact=_assignedContact;
@property(retain, nonatomic) WCContactData *preSelectedContact; // @synthesize preSelectedContact=_preSelectedContact;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_normalizeNameString:(id)arg1;
- (id)generateGroupMemberList:(id)arg1;
- (unsigned long long)firstKeyboardFocusableRow;
- (BOOL)focusPreviousRow;
- (BOOL)focusNextRow;
- (void)deselectedContact:(id)arg1;
- (void)dePreSelectUserName:(id)arg1;
- (void)setChosen:(BOOL)arg1 forRow:(id)arg2;
- (void)resetGroupContactsForSearch;
- (void)resetContactsForSearch;
- (void)resetAllContactsForSearch;
- (void)resetDetermineDisplayedRows;
- (void)resetCommonData;
@property(readonly, nonatomic) BOOL isSearching;
@property(readonly, nonatomic) NSArray *selectedUserNames;
@property(readonly, nonatomic) NSArray *displayedRows;
- (void)_determineDisplayedRows;
- (id)pickerRowFromContact:(id)arg1;
- (void)_determineAvailableRows;
- (id)init;

@end

