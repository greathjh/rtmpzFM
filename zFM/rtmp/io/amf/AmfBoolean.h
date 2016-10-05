//
//  AmfBoolean.h
//  zFM
//
//  Created by zykhbl on 16-9-23.
//  Copyright (c) 2016年 zykhbl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AmfData.h"

@interface AmfBoolean : AmfData

@property (nonatomic, assign) double value;

- (id)initWithValue:(BOOL)v;

@end
