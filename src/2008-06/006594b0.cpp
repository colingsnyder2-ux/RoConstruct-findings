// from server: 69% by colin
// from server: 59% by king_originala
// roc 2008-06 006594b0  unit: RBX::BallBallContact  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006594b0
//
// 006594b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006594b4  d900                 fld dword ptr [eax]
// 006594b6  8b15ac259600         mov edx, dword ptr [0x9625ac]
// 006594bc  d9e8                 fld1 
// 006594be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006594c2  dcc1                 fadd st(1), st(0)
// 006594c4  d3e2                 shl edx, cl
// 006594c6  d94004               fld dword ptr [eax + 4]
// 006594c9  d8c1                 fadd st(1)
// 006594cb  8954240c             mov dword ptr [esp + 0xc], edx
// 006594cf  d94008               fld dword ptr [eax + 8]
// 006594d2  dec2                 faddp st(2)
// 006594d4  db44240c             fild dword ptr [esp + 0xc]
// 006594d8  d9c0                 fld st(0)
// 006594da  d9c0                 fld st(0)
// 006594dc  decd                 fmulp st(5)
// 006594de  d9c0                 fld st(0)
// 006594e0  decb                 fmulp st(3)
// 006594e2  decb                 fmulp st(3)
// 006594e4  d900                 fld dword ptr [eax]
// 006594e6  d8c9                 fmul st(1)
// 006594e8  d94004               fld dword ptr [eax + 4]
// 006594eb  d8ca                 fmul st(2)
// 006594ed  d94008               fld dword ptr [eax + 8]
// 006594f0  8b442404             mov eax, dword ptr [esp + 4]
// 006594f4  decb                 fmulp st(3)
// 006594f6  d9c9                 fxch st(1)
// 006594f8  d918                 fstp dword ptr [eax]
// 006594fa  d95804               fstp dword ptr [eax + 4]
// 006594fd  d95808               fstp dword ptr [eax + 8]
// 00659500  d9ca                 fxch st(2)
// 00659502  d9580c               fstp dword ptr [eax + 0xc]
// 00659505  d9c9                 fxch st(1)
// 00659507  d95810               fstp dword ptr [eax + 0x10]
// 0065950a  d95814               fstp dword ptr [eax + 0x14]
// 0065950d  c3                   ret 
#include <intrin.h>

extern int scaleBase;

struct Vector3 {
    float x, y, z;
};

struct Bounds {
    Vector3 low, high;
};

Bounds* __cdecl makeBounds(Bounds* result, int level, const Vector3& position)
{
    double highX = position.x + 1.0;
    _ReadWriteBarrier();
    double highY = position.y + 1.0;
    double highZ = position.z + 1.0;
    double scale = scaleBase << level;

    highX *= scale;
    highY *= scale;
    highZ *= scale;

    double lowX = position.x * scale;
    double lowY = position.y * scale;
    double lowZ = position.z * scale;

    result->low.x = (float)lowX;
    result->low.y = (float)lowY;
    result->low.z = (float)lowZ;
    result->high.x = (float)highX;
    result->high.y = (float)highY;
    result->high.z = (float)highZ;
    return result;
}
