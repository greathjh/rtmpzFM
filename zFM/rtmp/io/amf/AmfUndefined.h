//
//  AmfUndefined.h
//  zFM
//
//  Created by zykhbl on 16-9-27.
//  Copyright (c) 2016年 zykhbl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AmfData.h"

@interface AmfUndefined : AmfData

+ (void)writeUndefinedTo:(Stream*)outStream;

@end
