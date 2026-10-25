// from server: 100% by colin
// roc 2008-06 005ded80  unit: RBX::Message  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ded80
//
// 005ded80  d9442410             fld dword ptr [esp + 0x10]
// 005ded84  d9e1                 fabs 
// 005ded86  d9442404             fld dword ptr [esp + 4]
// 005ded8a  d9c0                 fld st(0)
// 005ded8c  d8c9                 fmul st(1)
// 005ded8e  d9c0                 fld st(0)
// 005ded90  d8ca                 fmul st(2)
// 005ded92  deca                 fmulp st(2)
// 005ded94  d9442408             fld dword ptr [esp + 8]
// 005ded98  d9c0                 fld st(0)
// 005ded9a  d8c9                 fmul st(1)
// 005ded9c  d8cc                 fmul st(4)
// 005ded9e  d9c2                 fld st(2)
// 005deda0  d84c240c             fmul dword ptr [esp + 0xc]
// 005deda4  dcc0                 fadd st(0), st(0)
// 005deda6  dec1                 faddp st(1)
// 005deda8  d8cc                 fmul st(4)
// 005dedaa  deeb                 fsubp st(3)
// 005dedac  d9ee                 fldz 
// 005dedae  d8db                 fcomp st(3)
// 005dedb0  dfe0                 fnstsw ax
// 005dedb2  f6c401               test ah, 1
// 005dedb5  750f                 jne 0x5dedc6
// 005dedb7  ddda                 fstp st(2)
// 005dedb9  ddda                 fstp st(2)
// 005dedbb  ddd9                 fstp st(1)
// 005dedbd  ddd8                 fstp st(0)
// 005dedbf  d905b0718200         fld dword ptr [0x8271b0]
// 005dedc5  c3                   ret 
// 005dedc6  d9ca                 fxch st(2)
// 005dedc8  d9fa                 fsqrt 
// 005dedca  d9ca                 fxch st(2)
// 005dedcc  decb                 fmulp st(3)
// 005dedce  d9c0                 fld st(0)
// 005dedd0  d8c2                 fadd st(2)
// 005dedd2  d8f3                 fdiv st(3)
// 005dedd4  d9e8                 fld1 
// 005dedd6  d9f3                 fpatan 
// 005dedd8  d9542404             fst dword ptr [esp + 4]
// 005deddc  d9c9                 fxch st(1)
// 005dedde  dee2                 fsubrp st(2)
// 005dede0  d9c9                 fxch st(1)
// 005dede2  def2                 fdivrp st(2)
// 005dede4  d9e8                 fld1 
// 005dede6  d9c9                 fxch st(1)
// 005dede8  d9ca                 fxch st(2)
// 005dedea  d9c9                 fxch st(1)
// 005dedec  d9f3                 fpatan 
// 005dedee  d9542410             fst dword ptr [esp + 0x10]
// 005dedf2  ded9                 fcompp 
// 005dedf4  dfe0                 fnstsw ax
// 005dedf6  f6c405               test ah, 5
// 005dedf9  8d442410             lea eax, [esp + 0x10]
// 005dedfd  7b04                 jnp 0x5dee03
// 005dedff  8d442404             lea eax, [esp + 4]
// 005dee03  d900                 fld dword ptr [eax]
// 005dee05  c3                   ret 

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
