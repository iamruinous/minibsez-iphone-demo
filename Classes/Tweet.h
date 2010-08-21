//
//  Tweet.h
//  MiniBSez
//
//  Created by Integrum on 8/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <HTTPRiot/HTTPRiot.h>

@class HRRestModel;

@interface Tweet : HRRestModel {
    NSString *screenName;
    NSString *name;
    NSString *text;
    NSString *location;
    
}

@property (nonatomic, retain) NSString *screenName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *location;

+ (id)timelineForUser:(NSString *)user delegate:(id)delegate;
+ (id)publicTimelineWithDelegate:(id)delegate;
+ (void)restConnection:(NSURLConnection *)connection didFailWithError:(NSError *)error object:(id)object;

- (id)initWithTweetDictionary:(NSDictionary *)dict;
@end
