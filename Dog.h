//
//  Dog.h
//  StoredModel

#import "StoredModel.h"

@interface Dog : StoredModel

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDate *createdAt;
@end

