/* Copyright (c) 2012 Scott Lembcke and Howling Moon Software
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

// Constants for the different Z-layers
enum Z_LAYERS {
	Z_BACKGROUND,
	Z_BALLS,
	Z_BALL_HIGHLIGHTS,
	Z_OVERLAY,
	Z_PARTICLES,
	Z_FOREGROUND,
	Z_PHYSICS_DEBUG,
	Z_MENU,
};


static inline cpFloat frand(){return (cpFloat)arc4random()/(cpFloat)UINT32_MAX;}
static inline cpFloat frand_unit(){return 2.0f*frand() - 1.0f;}

// This layer bit is only set for balls.
// This is used when querying for balls by touch.
static const cpLayers PhysicsBallOnlyBit = 1<<31;

// These are the layer bitmasks used for balls and edges.
static const cpLayers PhysicsEdgeLayers = ~PhysicsBallOnlyBit;
static const cpLayers PhysicsBallLayers = CP_ALL_LAYERS;
