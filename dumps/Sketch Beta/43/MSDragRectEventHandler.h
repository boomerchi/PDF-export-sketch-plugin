//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSDragGestureRecognizer, NSCursor;

@interface MSDragRectEventHandler : MSEventHandler
{
    MSDragGestureRecognizer *_dragGestureRecognizer;
    NSCursor *_cursor;
    struct CGRect _insertionRect;
}

@property(retain, nonatomic) NSCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) MSDragGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(nonatomic) struct CGRect insertionRect; // @synthesize insertionRect=_insertionRect;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)shouldHideExportBar;
- (void)cursorUpdate:(id)arg1;
- (id)layerSnapper;
- (BOOL)shouldDrawLayerSelection;
- (void)prepareGraphicsContext;
- (void)drawRectPreview;
- (void)drawGuidesAndMeasurementsInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (id)currentGroup;
- (BOOL)handlesHandToolItself;
- (void)keyDown:(id)arg1;
- (id)performActionWithRect:(struct CGRect)arg1 constrainProportions:(BOOL)arg2;
- (void)handleDrag:(id)arg1;
- (struct CGRect)drawingRectForInsertionRect:(struct CGRect)arg1;
- (struct CGPoint)makeDiagonalTranslation:(struct CGPoint)arg1;
- (struct CGRect)calculateInsertionRect:(id)arg1 inLayer:(id)arg2;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end
