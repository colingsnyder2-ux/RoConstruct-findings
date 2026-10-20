// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_inputclampnativecee51dd06ee8b77a.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off)
#include "G3D/Vector2.h"
typedef G3D::Vector2 Vec2;
struct Rect { Vec2 low,high; Rect(const Vec2&a,const Vec2&b):low(a),high(b){} void merge(const Rect&); };
void f(const Vec2* motion,Vec2* overflow,Vec2* position,const Vec2* dimensions,int margin,float factor) {
 Vec2 half=*dimensions*0.5f;
 Vec2 negative=-half;
 float inset=(float)margin;
 Rect bounds(negative,half);
 bounds.low.x=inset+bounds.low.x; bounds.low.y+=inset;
 bounds.high.x-=inset; bounds.high.y-=inset;
 Vec2 original=*position;
 bounds.merge(Rect(original,original));
 Vec2 desired=*motion+original;
 Vec2 clamped=desired.clamp(bounds.low,bounds.high);
 Vec2 difference=desired-clamped;
 *position=clamped+difference*factor;
 *overflow+=difference;
}
