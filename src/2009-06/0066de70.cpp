// roc 2009-06 0066de70  unit: RBX::VHumanoid::?$EventDesc  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066de70
//
// 0066de70  d9442410             fld dword ptr [esp + 0x10]
// 0066de74  d9e1                 fabs 
// 0066de76  d9442404             fld dword ptr [esp + 4]
// 0066de7a  d9c0                 fld st(0)
// 0066de7c  d8c9                 fmul st(1)
// 0066de7e  d9c0                 fld st(0)
// 0066de80  d8ca                 fmul st(2)
// 0066de82  deca                 fmulp st(2)
// 0066de84  d9442408             fld dword ptr [esp + 8]
// 0066de88  d9c0                 fld st(0)
// 0066de8a  d8c9                 fmul st(1)
// 0066de8c  d8cc                 fmul st(4)
// 0066de8e  d9c2                 fld st(2)
// 0066de90  d84c240c             fmul dword ptr [esp + 0xc]
// 0066de94  dcc0                 fadd st(0), st(0)
// 0066de96  dec1                 faddp st(1)
// 0066de98  d8cc                 fmul st(4)
// 0066de9a  deeb                 fsubp st(3)
// 0066de9c  d9ee                 fldz 
// 0066de9e  d8db                 fcomp st(3)
// 0066dea0  dfe0                 fnstsw ax
// 0066dea2  f6c401               test ah, 1
// 0066dea5  750f                 jne 0x66deb6
// 0066dea7  ddda                 fstp st(2)
// 0066dea9  ddda                 fstp st(2)
// 0066deab  ddd9                 fstp st(1)
// 0066dead  ddd8                 fstp st(0)
// 0066deaf  d90540a48c00         fld dword ptr [0x8ca440]
// 0066deb5  c3                   ret 
// 0066deb6  d9ca                 fxch st(2)
// 0066deb8  d9fa                 fsqrt 
// 0066deba  d9ca                 fxch st(2)
// 0066debc  decb                 fmulp st(3)
// 0066debe  d9c0                 fld st(0)
// 0066dec0  d8c2                 fadd st(2)
// 0066dec2  d8f3                 fdiv st(3)
// 0066dec4  d9e8                 fld1 
// 0066dec6  d9f3                 fpatan 
// 0066dec8  d9542404             fst dword ptr [esp + 4]
// 0066decc  d9c9                 fxch st(1)
// 0066dece  dee2                 fsubrp st(2)
// 0066ded0  d9c9                 fxch st(1)
// 0066ded2  def2                 fdivrp st(2)
// 0066ded4  d9e8                 fld1 
// 0066ded6  d9c9                 fxch st(1)
// 0066ded8  d9ca                 fxch st(2)
// 0066deda  d9c9                 fxch st(1)
// 0066dedc  d9f3                 fpatan 
// 0066dede  d9542410             fst dword ptr [esp + 0x10]
// 0066dee2  ded9                 fcompp 
// 0066dee4  dfe0                 fnstsw ax
// 0066dee6  f6c405               test ah, 5
// 0066dee9  8d442410             lea eax, [esp + 0x10]
// 0066deed  7b04                 jnp 0x66def3
// 0066deef  8d442404             lea eax, [esp + 4]
// 0066def3  d900                 fld dword ptr [eax]
// 0066def5  c3                   ret 
// copied from an identical function in another client (function ?f@@YAMMMMM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 91% by EspClaude
#pragma float_control(precise, off)
// roc 2008-06 005ded80  unit: RBX::Message  size: 134 bytes

extern "C" double __cdecl fabs(double);
extern "C" double __cdecl sqrt(double);
extern "C" double __cdecl atan(double);
#pragma intrinsic(fabs, sqrt, atan)

extern const float invalidResult;

float __cdecl f(float speed, float distance, float height, float gravity)
{
    double g = fabs(gravity);
    double disc = speed*speed*speed*speed
        - (distance*distance*g + 2.0*(speed*speed)*height)*g;

    if (disc <= 0.0)
        return invalidResult;

    double root = sqrt(disc);
    double v2 = speed*speed;
    double upper = atan((root + v2) / (distance*g));
    speed = (float)upper;
    double lower = atan((v2 - root) / (g*distance));
    gravity = (float)lower;

    const float* result = lower < upper ? &gravity : &speed;
    return *result;
}