//
//  LGPsnInfoPush.h
//  LGSubjectCloud
//
//  Created by abc on 2019/12/11.
//  Copyright © 2019 Lancoo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@protocol LGPsnInfoPushDelegate <NSObject>

@optional


//Socket开启了长链接

- (void)LGPsnSocketDidOpen;

//Socket关闭了长链接
- (void)LGPsnSocketDidClose;


@end

@interface LGPsnInfoPush : NSObject

+ (LGPsnInfoPush *)defaultManager;

@property (nonatomic, weak) id<LGPsnInfoPushDelegate> LGPushDelegate;

/** 基础平台地址 */
@property (nonatomic, copy) NSString *BaseURL;
/** 用户ID */
@property (nonatomic, copy) NSString *UserID;
/** 用户类型 */
@property (nonatomic, assign) NSUInteger UserType;
/** token值 */
@property (nonatomic, copy) NSString *Token;
/** schoolID */
@property (nonatomic, copy) NSString *SchoolID;
/** 极光推送返回的设备ID */
@property (nonatomic, copy) NSString *JpushID;

/** 是否需要推送消息 */
@property (nonatomic,assign) BOOL  IsNeedPush;



- (void)closeSocket;//关闭连接
- (void)openSocket;//开启连接



@end

NS_ASSUME_NONNULL_END
