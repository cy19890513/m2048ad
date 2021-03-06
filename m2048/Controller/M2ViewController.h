//
//  M2ViewController.h
//  m2048
//

//  Copyright (c) 2014 Danqing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>
#import <VungleSDK/VungleSDK.h>

@interface M2ViewController : UIViewController<VungleSDKDelegate>

- (void)updateScore:(NSInteger)score;

- (void)endGame:(BOOL)won;

@end
