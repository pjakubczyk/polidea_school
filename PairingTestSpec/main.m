//
//  main.m
//  PairingTestSpec
//
//  Created by Polidea Sp. z o.o. on 03.04.2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PTAppDelegate.h"
#import <Cedar-iOS/Cedar-iOS.h>

int main(int argc, char *argv[]) {
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
    
    int retVal = UIApplicationMain(argc, argv, nil, @"CedarApplicationDelegate");
    [pool release];
    return retVal;
}