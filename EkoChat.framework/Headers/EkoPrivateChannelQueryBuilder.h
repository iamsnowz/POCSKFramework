//
//  EkoPrivateChannelQueryBuilder.h
//  EkoChat
//
//  Created by Michael Abadi Santoso on 2/4/20.
//  Copyright © 2020 eko. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EkoEnums.h"
#import "EkoClient.h"

NS_ASSUME_NONNULL_BEGIN
@interface EkoPrivateChannelQueryBuilder : NSObject

@property (nonnull, nonatomic, strong) NSArray<NSString *> *includingTags;
@property (nonnull, nonatomic, strong) NSArray<NSString *> *excludingTags;

- (nonnull instancetype)initWithIncludingTags:(nullable NSArray<NSString *> *)includingTags
                                excludingTags:(nullable NSArray<NSString *> *)excludingTags NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
@end
NS_ASSUME_NONNULL_END
