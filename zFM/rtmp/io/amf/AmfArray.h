//
//  AmfArray.h
//  zFM
//
//  Created by zykhbl on 16-9-27.
//  Copyright (c) 2016年 zykhbl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AmfData.h"

@interface AmfArray : AmfData

@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, assign) int size;

@end
