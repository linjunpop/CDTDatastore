//
//  CDTQMatcherQueryExecutor.h
//  CloudantQueryObjc
//
//  Created by Michael Rhodes on 01/11/2014.
//  Copyright (c) 2014 Michael Rhodes. All rights reserved.
//

#import "CDTQQueryExecutor.h"

@interface CDTQMatcherQueryExecutor : CDTQQueryExecutor

- (instancetype)initWithDatabase:(FMDatabaseQueue *)database datastore:(CDTDatastore *)datastore;

@end
