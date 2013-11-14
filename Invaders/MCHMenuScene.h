//
//  MCHMyScene.h
//  Invaders
//

//  Copyright (c) 2013 Marc Henderson. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface MCHMenuScene : SKScene

@property (strong,atomic)SKLabelNode *playButton;
@property (strong,atomic)SKLabelNode *leaderboardButton;
@property (strong,atomic)SKLabelNode *title;
@property (strong,atomic)SKLabelNode *subtitle;
@property (strong,atomic)SKSpriteNode *fordHead;
@property (strong,atomic)SKSpriteNode *fordHead2;

@end