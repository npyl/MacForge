//
//  MF_accountManager.h
//  MacForge
//
//  Created by Wolfgang Baird on 12/25/19.
//  Copyright © 2019 MacEnhance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MF_accountManager : NSObject

- (BOOL)createAccountWithUsername:(NSString *)username
                            email:(NSString *)email
                      andPassword:(NSString *)password
                            error:(NSError **)error;
- (BOOL)loginAccountWithUsername:(NSString *)username
                           email:(NSString *)email
                     andPassword:(NSString *)password
                           error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
