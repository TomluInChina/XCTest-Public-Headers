//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCUIElement.h>

@class NSArray, NSDictionary, NSString, XCAccessibilityElement, XCApplicationQuery, XCUIApplicationImpl;

@interface XCUIApplication : XCUIElement
{
    BOOL _ancillary;
    XCUIElement *_keyboard;
    NSArray *_launchArguments;
    NSDictionary *_launchEnvironment;
    XCUIApplicationImpl *_applicationImpl;
    XCApplicationQuery *_applicationQuery;
    unsigned long long _generation;
}

+ (id)keyPathsForValuesAffectingRunning;
+ (id)appWithPID:(int)arg1;
@property unsigned long long generation; // @synthesize generation=_generation;
@property(retain) XCApplicationQuery *applicationQuery; // @synthesize applicationQuery=_applicationQuery;
@property(readonly) XCUIApplicationImpl *applicationImpl; // @synthesize applicationImpl=_applicationImpl;
@property BOOL ancillary; // @synthesize ancillary=_ancillary;
@property(copy, nonatomic) NSDictionary *launchEnvironment; // @synthesize launchEnvironment=_launchEnvironment;
@property(copy, nonatomic) NSArray *launchArguments; // @synthesize launchArguments=_launchArguments;
@property(readonly) XCUIElement *keyboard; // @synthesize keyboard=_keyboard;
- (void)_restoreActiveState;
@property(readonly) long long activationPolicy;
- (void)_waitForQuiescence;
- (void)terminate;
- (void)_launchUsingXcode:(BOOL)arg1;
- (void)launch;
- (id)application;
@property(readonly, nonatomic) BOOL running;
@property(nonatomic) int processID;
@property(nonatomic) unsigned long long state;
- (id)description;
- (id)lastSnapshot;
- (id)query;
- (void)clearQuery;
@property(readonly) XCAccessibilityElement *accessibilityElement;
- (unsigned long long)elementType;
@property(readonly) NSString *bundleID;
@property(readonly) NSString *path;
- (id)initPrivateWithPath:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (void)dealloc;

@end

