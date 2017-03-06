//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSLayer;

@interface MSSnapItem : NSObject
{
    MSLayer *_layer;
}

+ (id)snapLinesForLayer:(id)arg1;
+ (id)snapperObjectWithLayers:(id)arg1;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)snapItemForDrawing;
- (struct CGRect)distanceRectangleToItem:(id)arg1 axis:(unsigned long long)arg2;
- (id)description;
@property(nonatomic) struct CGRect rect;
- (struct CGRect)boundsRect;
- (void)concatAncestorsAndSelfTransforms;
- (struct CGAffineTransform)preDrawingTransform;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
- (double)rotation;
- (BOOL)shouldConstrainProportions;
- (BOOL)supportsResizingForSnapping;
- (struct CGRect)originalRect;
- (id)otherLayersForSnapping;
- (id)otherLayersForSizeSnapping;
- (id)artboardForSnapping;
- (id)snapLines;
- (id)snapEnumerations;
- (void)snapInBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayer:(id)arg1;

@end
