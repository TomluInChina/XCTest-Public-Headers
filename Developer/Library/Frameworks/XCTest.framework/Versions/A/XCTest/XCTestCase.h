//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTest.h>

@class NSInvocation, XCTestCaseRun;

@interface XCTestCase : XCTest
{
    NSInvocation *_invocation;
    XCTestCaseRun *_testCaseRun;
    BOOL _continueAfterFailure;
}

+ (id)testInvocations;
+ (BOOL)isInheritingTestCases;
+ (id)testCaseWithSelector:(SEL)arg1;
+ (id)testCaseWithInvocation:(id)arg1;
+ (void)tearDown;
+ (void)setUp;
+ (id)defaultTestSuite;
+ (id)xct_allTestMethodInvocations;
+ (id)xct_testMethodInvocations;
+ (id)xct_allSubclasses;
@property BOOL continueAfterFailure; // @synthesize continueAfterFailure=_continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun; // @synthesize testCaseRun=_testCaseRun;
- (unsigned long long)numberOfTestIterationsForTestWithSelector:(SEL)arg1;
- (void)afterTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)beforeTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)tearDownTestWithSelector:(SEL)arg1;
- (void)setUpTestWithSelector:(SEL)arg1;
- (void)performTest:(id)arg1;
- (void)invokeTest;
- (Class)testRunClass;
- (void)_recordUnexpectedFailureWithDescription:(id)arg1 exception:(id)arg2;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (void)setInvocation:(id)arg1;
- (id)invocation;
- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned long long)testCaseCount;
- (SEL)selector;
- (id)initWithSelector:(SEL)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)init;

@end
