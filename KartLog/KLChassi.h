//
//  KLChassi.h
//  KartLog
//
//  Created by Daniel Harlin on 2013-07-06.
//  Copyright (c) 2013 Daniel Harlin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KLChassi : NSObject {
    NSString *model; //
    NSString *builtYear;
}

@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *builtYear;

@end
