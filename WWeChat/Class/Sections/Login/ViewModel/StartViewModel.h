//
//  StartViewModel.h
//  WWeChat
//
//  Created by WzxJiang on 16/6/29.
//  Copyright © 2016年 WzxJiang. All rights reserved.
//

#import "LoginViewModel.h"

@interface StartViewModel : LoginViewModel

- (void)autoLoginWithSuccess:(SuccessBlock)successBlock
                     failure:(FailureBlock)failureBlock;

@end
