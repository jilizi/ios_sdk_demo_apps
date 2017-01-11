/*
 *
 *  ZDCChatAgent.h
 *  ZDCChat
 *
 *  Created by Zendesk on 01/12/2014.
 *
 *  Copyright (c) 2015 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */


#import <Foundation/Foundation.h>


/**
 * An agent who is a part of the conversartion.
 */
@interface ZDCChatAgent : NSObject


/**
 * Agent id (nickname).
 */
@property (nonatomic, strong) NSString *agentId;

/**
 * Agent display name.
 */
@property (nonatomic, strong) NSString *displayName;

/**
 * Agent title.
 */
@property (nonatomic, strong) NSString *title;

/**
 * URL of the agents avatar, may be nil.
 */
@property (nonatomic, strong) NSString *avatarURL;

/**
 * True if the agent is currently typing in this conversation.
 */
@property (nonatomic, assign) BOOL typing;


@end

