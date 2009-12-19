//
//  MovingSprite.h
//  Copong
//
//  Created by Daniel Perez Alvarez on 11/28/09.
//  Copyright 2009 Daniel Perez Alvarez. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "cocos2d.h"

#import "Sprite+Utils.h"


@interface MovingSprite : Sprite
{
    CGPoint velocity_;
}

@property (nonatomic, assign) CGPoint velocity;

/** Updates the position of the sprite according to its velocity. */
- (void)move:(ccTime)dt;

@end


/** Clamps a value. */
static inline CGFloat clamp(CGFloat value, CGFloat min, CGFloat max)
{
    return (value < min ? min : (value > max ? max : value));
}