#ifndef CodeInteraction_h
#define CodeInteraction_h

#import <Foundation/Foundation.h>
#import "UIElementUtilities.h"
#import <Accessibility/Accessibility.h>

@interface CodeInfo : NSObject { }
@property (nonatomic, nonnull) NSString *query;
@property (nonatomic) NSInteger insertionPointerLine;
@property (nonatomic) NSRect frame;
@property (nonatomic) bool isAbbreviation;
@end

@interface CodeInteraction : NSObject { }
@property (nonatomic) NSMutableArray * _Nonnull allowlist;
- (BOOL)getCodeInfo:(CodeInfo* _Nonnull)codeInfo;
- (void)useCode:(NSString *_Nonnull)snippet isAbbreviation:(bool)isAbbreviation;
@end

#endif /* FocusedElementInfo_h */

