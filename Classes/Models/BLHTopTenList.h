//
//  BLHTopTenList.h
//  yssy
//
//  Created by Rurui Ye on 1/30/14.
//  Copyright (c) 2014 Rurui Ye. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLHTopTenList : NSObject
{
    NSMutableArray* postItems;
}
-(void) parse : (NSString *) content;
-(NSArray*) getPostItems;
@end
