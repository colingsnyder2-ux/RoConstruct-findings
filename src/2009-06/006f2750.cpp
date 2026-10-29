// roc 2009-06 006f2750  unit: seg_006f0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f2750
//
// 006f2750  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f2754  d901                 fld dword ptr [ecx]
// 006f2756  8b442404             mov eax, dword ptr [esp + 4]
// 006f275a  d905385d8c00         fld dword ptr [0x8c5d38]
// 006f2760  dcc9                 fmul st(1), st(0)
// 006f2762  d9c9                 fxch st(1)
// 006f2764  d918                 fstp dword ptr [eax]
// 006f2766  d94104               fld dword ptr [ecx + 4]
// 006f2769  d8c9                 fmul st(1)
// 006f276b  d95804               fstp dword ptr [eax + 4]
// 006f276e  d84908               fmul dword ptr [ecx + 8]
// 006f2771  d95808               fstp dword ptr [eax + 8]
// 006f2774  c3                   ret 
// copied from an identical function in another client (function ?scaleBy20@RBX@@YA?AVVector3@G3D@@ABV23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace G3D { class Vector3 { public: float x, y, z; Vector3() {} Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
 Vector3 operator*(float s) const { return Vector3(x * s, y * s, z * s); } }; }
namespace RBX { G3D::Vector3 scaleBy20(const G3D::Vector3& v) { return v * 20.0f; } }