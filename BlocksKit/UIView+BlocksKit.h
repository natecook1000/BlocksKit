//
//  UIView+BlocksKit.h
//  BlocksKit
//

/** Convenience on-touch methods for UIView.

 Includes code by the following:

 - Kevin O'Neill.  <https://github.com/kevinoneill>. 2011. BSD.
 - Jake Marsh.     <https://github.com/jakemarsh>.   2011. 
 - Zach Waldowski. <https://github.com/zwaldowski>.  2011. MIT.
 */
@interface UIView (BlocksKit)

/** Abstract creation of a block-backed UITapGestureRecognizer.

 This method allows for the recognition of any arbitrary number
 of fingers tapping any number of times on a view.  An instance
 of UITapGesture recognizer is allocated for the block and added
 to the recieving view.

 @param numberOfTouches The number of fingers tapping that will trigger the block.
 @param numberOfTaps The number of taps required to trigger the block.
 @param block The handler for the UITapGestureRecognizer
 @see whenTapped:
 @see whenDoubleTapped:
 */
- (void)whenTouches:(NSUInteger)numberOfTouches tapped:(NSUInteger)numberOfTaps handler:(void (^)())block;

/** Adds a recognizer for one finger tapping once.

 @param block The handler for the tap recognizer
 @see whenDoubleTapped:
 @see whenTouches:tapped:handler:
 */
- (void)whenTapped:(void (^)())block;

/** Adds a recognizer for one finger tapping twice.
 
 @param block The handler for the tap recognizer
 @see whenTapped:
 @see whenTouches:tapped:handler:
 */
- (void)whenDoubleTapped:(void (^)())block;

/** Adds a block that gets called on a finger down.

 Internally, this method overrides the touchesBegan:withEvent:
 selector of UIView and is mechanically similar to
 UIControlEventTouchDown.

 @param block The handler for the touch recognizer
 */
- (void)whenTouchedDown:(void (^)())block;

/** Adds a block that gets called on a finger up.
 
 Internally, this method overrides the touchesBegan:withEvent:
 selector of UIView and is mechanically similar to
 UIControlEventTouchCancel.
 
 @param block The handler for the touch recognizer
 */
- (void)whenTouchedUp:(void (^)())block;

@end
