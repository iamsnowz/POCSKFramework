//
//  EkoUserRepository.h
//  EkoChat
//
//  Created by eko on 1/25/18.
//  Copyright © 2018 eko. All rights reserved.
//

@import Foundation;

#import "EkoClient.h"
#import "EkoObject.h"
#import "EkoUser.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Repository provides access users and collections
 */
@interface EkoUserRepository : NSObject

@property (strong, readonly, nonatomic) EkoClient *client;

/**
   Designated intializer

   @param client A valid context instance
   @return returns the instance
 */
- (nonnull instancetype)initWithClient:(nonnull EkoClient *)client NS_DESIGNATED_INITIALIZER;

/**
   @param userId userId
 */
- (nonnull EkoObject<EkoUser *> *)userForId:(nonnull NSString *)userId;

// Block call of `init` and `new` because this object cannot be created directly
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END