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

//socket消息的回调  推送类型： 1）通知公告 2）在线交流 3）系统消息 4）学习任务 5)日程提醒
  //Socket+++++状态码：InfoDic[@"code"]=1004为->新消息推送
- (void)webSocketDidReceiveMsg:(NSDictionary *)InfoDic;
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



- (void)closeSocket;//退出登录关闭连接
- (void)openSocket;//开启连接

- (void)closeSocketForBackground;//进入后台/锁屏关闭连接
- (void)oppenWebSocket;//进入程序重连socket



@end

NS_ASSUME_NONNULL_END
