//
//  ZLCustomeSegmentControlView.h
//  CustomeSegmentControl
//
//  Created by chengzhitong on 15/8/25.
//  Copyright (c) 2015年 chengzhitong. All rights reserved.
//


#import <UIKit/UIKit.h>

typedef void(^ButtonOnClickBlock)(NSInteger tag, NSString * title);

@interface CTCustomSegmentView : UIView

@property (nonatomic, strong) NSArray *titles;                      //标题数组
@property (nonatomic, strong) UIColor *titlesCustomColor;          //标题的常规颜色
@property (nonatomic, strong) UIColor *titlesHeightLightColor;      //标题高亮颜色
@property (nonatomic, strong) UIColor *backgroundHeightLightColor;  //高亮时的颜色
@property (nonatomic, strong) UIFont *titlesFont;                   //标题的字号
@property (nonatomic, assign) CGFloat duration;                     //运动时间
@property (nonatomic, assign) BOOL  isAnimation;                    //是否需要动画

/**
 *  点击按钮的回调
 *
 *  @param block 点击按钮的Block
 */
-(void) setButtonOnClickBlock: (ButtonOnClickBlock) block;

@end
