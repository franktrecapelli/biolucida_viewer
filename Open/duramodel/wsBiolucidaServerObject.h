//
//  wsBiolucidaServerObject.h
//  Open
//
//  Created by Rich Stoner on 12/23/13.
//  Copyright (c) 2013 WholeSlide. All rights reserved.
//

#import "wsServerObject.h"

@interface wsBiolucidaServerObject : wsServerObject

-(void) loginWithCredentials:(NSDictionary*) credentials;

@end

