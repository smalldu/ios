//
//  UIColor+IRCCloud.h
//  IRCCloud
//
//  Created by Sam Steele on 2/25/13.
//  Copyright (c) 2013 IRCCloud, Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (IRCCloud)
+(UIColor *)backgroundBlueColor;
+(UIColor *)selectedBlueColor;
+(UIColor *)ownersGroupColor;
+(UIColor *)adminsGroupColor;
+(UIColor *)opsGroupColor;
+(UIColor *)halfopsGroupColor;
+(UIColor *)voicedGroupColor;
+(UIColor *)ownersHeadingColor;
+(UIColor *)adminsHeadingColor;
+(UIColor *)opsHeadingColor;
+(UIColor *)halfopsHeadingColor;
+(UIColor *)voicedHeadingColor;
+(UIColor *)membersHeadingColor;
+(UIColor *)timestampColor;
+(UIColor *)colorFromHexString:(NSString *)hexString;
+(UIColor *)mIRCColor:(int)color;
+(UIColor *)errorBackgroundColor;
+(UIColor *)statusBackgroundColor;
+(UIColor *)selfBackgroundColor;
+(UIColor *)highlightBackgroundColor;
+(UIColor *)noticeBackgroundColor;
+(UIColor *)timestampBackgroundColor;
+(UIColor *)newMsgsBackgroundColor;
@end