#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface User : PFUser

+ (id)user;
+ (User *)logInWithEmail:(NSString *)username password:(NSString *)password;

- (NSString *)firstName;
- (void)setFirstName:(NSString *)firstName;
- (NSString *)lastName;
- (void)setLastName:(NSString *)lastName;
- (NSNumber *)gender;
- (void)setGender:(NSString *)gender;

@end
