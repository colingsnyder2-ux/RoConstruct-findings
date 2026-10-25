// from server: 100% by king_originala
// roc 2008-06 004c9d40  unit: RBX::VInstance::?$NonFactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9d40
//
// 004c9d40  d9410c               fld dword ptr [ecx + 0xc]
// 004c9d43  d94108               fld dword ptr [ecx + 8]
// 004c9d46  d94104               fld dword ptr [ecx + 4]
// 004c9d49  d901                 fld dword ptr [ecx]
// 004c9d4b  dcc8                 fmul st(0), st(0)
// 004c9d4d  d9c1                 fld st(1)
// 004c9d4f  deca                 fmulp st(2)
// 004c9d51  dec1                 faddp st(1)
// 004c9d53  d9c1                 fld st(1)
// 004c9d55  deca                 fmulp st(2)
// 004c9d57  dec1                 faddp st(1)
// 004c9d59  d9c1                 fld st(1)
// 004c9d5b  deca                 fmulp st(2)
// 004c9d5d  dec1                 faddp st(1)
// 004c9d5f  d9fa                 fsqrt 
// 004c9d61  d9e8                 fld1 
// 004c9d63  def1                 fdivrp st(1)
// 004c9d65  d901                 fld dword ptr [ecx]
// 004c9d67  d8c9                 fmul st(1)
// 004c9d69  d919                 fstp dword ptr [ecx]
// 004c9d6b  d94104               fld dword ptr [ecx + 4]
// 004c9d6e  d8c9                 fmul st(1)
// 004c9d70  d95904               fstp dword ptr [ecx + 4]
// 004c9d73  d9c0                 fld st(0)
// 004c9d75  d84908               fmul dword ptr [ecx + 8]
// 004c9d78  d95908               fstp dword ptr [ecx + 8]
// 004c9d7b  d8490c               fmul dword ptr [ecx + 0xc]
// 004c9d7e  d9590c               fstp dword ptr [ecx + 0xc]
// 004c9d81  c3                   ret 

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct S {
    float x, y, z, w;
    void normalize();
};

void S::normalize()
{
    float inverse = 1.0f / (float)sqrt(x * x + y * y + z * z + w * w);
    x *= inverse;
    y *= inverse;
    z *= inverse;
    w *= inverse;
}
