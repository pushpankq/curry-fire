//
//  ShortHand.h
//  Created by Devin Ross on 4/17/15.
//
/*
 
 curryfire || https://github.com/devinross/curry-fire
 
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 
 */



#ifndef curryfire_ShortHand_h
#define curryfire_ShortHand_h

@import UIKit;
@import Foundation;

UIKIT_STATIC_INLINE NSValue* NSCGPointMake(CGFloat x, CGFloat y);
UIKIT_STATIC_INLINE NSValue* NSCGPointMake(CGFloat x, CGFloat y){
    return [NSValue valueWithCGPoint:CGPointMake(x,y)];
}

UIKIT_STATIC_INLINE NSValue* NSCGPoint(CGPoint point);
UIKIT_STATIC_INLINE NSValue* NSCGPoint(CGPoint point){
    return [NSValue valueWithCGPoint:point];
}

UIKIT_STATIC_INLINE NSValue* NSCATransform3D(CATransform3D transform);
UIKIT_STATIC_INLINE NSValue* NSCATransform3D(CATransform3D transform){
    return [NSValue valueWithCATransform3D:transform];
}

#endif
