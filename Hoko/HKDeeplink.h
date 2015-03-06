//
//  HKDeeplink.h
//  Hoko
//
//  Created by Hoko, S.A. on 23/07/14.
//  Copyright (c) 2015 Hoko, S.A. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HKDeeplink : NSObject

+ (instancetype)deeplinkWithRoute:(NSString *)route
                  routeParameters:(NSDictionary *)routeParameters
                  queryParameters:(NSDictionary *)queryParameters;

- (instancetype)initWithRoute:(NSString *)route
              routeParameters:(NSDictionary *)routeParameters
              queryParameters:(NSDictionary *)queryParameters;

@property (nonatomic, strong, readonly) NSString *route;
@property (nonatomic, strong, readonly) NSDictionary *queryParameters;
@property (nonatomic, strong, readonly) NSDictionary *routeParameters;

@end

