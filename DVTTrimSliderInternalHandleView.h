//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface DVTTrimSliderInternalHandleView : NSView
{
    BOOL _trailingSide;
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isTrailingSide) BOOL trailingSide; // @synthesize trailingSide=_trailingSide;
- (void)_drawHandleForegroundInBounds:(struct CGRect)arg1;
- (void)_drawHandleBackgroundInBounds:(struct CGRect)arg1;
- (void)_drawHandleInBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end

