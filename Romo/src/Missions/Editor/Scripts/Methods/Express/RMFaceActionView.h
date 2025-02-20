//
//  RMExpressActionView
//  Romo
//

#import "RMActionView.h"
#import <RMCharacter/RMCharacter.h>

@interface RMFaceActionView : RMActionView

@property (nonatomic) BOOL showingEmotion;

+ (NSString *)nameForEmotion:(RMCharacterEmotion)emotion;
+ (NSString *)nameForExpression:(RMCharacterExpression)expression;

+ (NSSet *)allowedEmotions;
+ (NSSet *)allowedExpressions;

@end
