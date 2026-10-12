// from server: 100% by king_originala
// roc 2008-06 00509c80  unit: G3D::Shader  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509c80
//
// 00509c80  d94104               fld dword ptr [ecx + 4]
// 00509c83  d901                 fld dword ptr [ecx]
// 00509c85  dcc8                 fmul st(0), st(0)
// 00509c87  d9c1                 fld st(1)
// 00509c89  deca                 fmulp st(2)
// 00509c8b  dec1                 faddp st(1)
// 00509c8d  d9fa                 fsqrt 
// 00509c8f  d9442404             fld dword ptr [esp + 4]
// 00509c93  d8d9                 fcomp st(1)
// 00509c95  dfe0                 fnstsw ax
// 00509c97  f6c405               test ah, 5
// 00509c9a  7a13                 jp 0x509caf
// 00509c9c  d9e8                 fld1 
// 00509c9e  d8f1                 fdiv st(1)
// 00509ca0  d901                 fld dword ptr [ecx]
// 00509ca2  d8c9                 fmul st(1)
// 00509ca4  d919                 fstp dword ptr [ecx]
// 00509ca6  d84904               fmul dword ptr [ecx + 4]
// 00509ca9  d95904               fstp dword ptr [ecx + 4]
// 00509cac  c20400               ret 4
// 00509caf  ddd8                 fstp st(0)
// 00509cb1  d9ee                 fldz 
// 00509cb3  c20400               ret 4

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct S {
    float x, y;
    float normalize(float tolerance);
};

float S::normalize(float tolerance) {
    double length = sqrt(x * x + y * y);
    if (length > tolerance) {
        double inverse = 1.0 / length;
        x = (float)(x * inverse);
        y = (float)(y * inverse);
        return (float)length;
    }
    return 0.0f;
}
