//
//  WelcomeWindowController.h
//  ReiKey
//
//  Created by Patrick Wardle on 12/24/18.
//  Copyright © 2018 Objective-See. All rights reserved.
//

@import Cocoa;

#import <objc/message.h>

@interface WelcomeWindowController : NSWindowController

/* PROPERTIES */

//sync view controller
@property(nonatomic, retain)NSViewController* welcomeViewController;

//welcome view
@property (strong) IBOutlet NSView *welcomeView;

//config view
@property (strong) IBOutlet NSView *configureView;

//allow apple bins/apps
@property (weak) IBOutlet NSButton *startAtLogin;

//allow 3rd-party installed apps
@property (weak) IBOutlet NSButton *runWithIcon;

//support view
@property (strong) IBOutlet NSView *supportView;

/* METHODS */

@end
