// from server: 100% by king_originala
// roc 2008-06 0060f3e0  unit: RBX::BlockBlockContact  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f3e0
//
// 0060f3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0060f3e4  d94004               fld dword ptr [eax + 4]
// 0060f3e7  33d2                 xor edx, edx
// 0060f3e9  d86110               fsub dword ptr [ecx + 0x10]
// 0060f3ec  d9e1                 fabs 
// 0060f3ee  d94008               fld dword ptr [eax + 8]
// 0060f3f1  d86114               fsub dword ptr [ecx + 0x14]
// 0060f3f4  d9e1                 fabs 
// 0060f3f6  d900                 fld dword ptr [eax]
// 0060f3f8  d821                 fsub dword ptr [ecx]
// 0060f3fa  d9e1                 fabs 
// 0060f3fc  d94004               fld dword ptr [eax + 4]
// 0060f3ff  d86104               fsub dword ptr [ecx + 4]
// 0060f402  d9e1                 fabs 
// 0060f404  d94008               fld dword ptr [eax + 8]
// 0060f407  d86108               fsub dword ptr [ecx + 8]
// 0060f40a  d9e1                 fabs 
// 0060f40c  d900                 fld dword ptr [eax]
// 0060f40e  d8610c               fsub dword ptr [ecx + 0xc]
// 0060f411  d9e1                 fabs 
// 0060f413  d8d5                 fcom st(5)
// 0060f415  dfe0                 fnstsw ax
// 0060f417  f6c441               test ah, 0x41
// 0060f41a  7509                 jne 0x60f425
// 0060f41c  ddd8                 fstp st(0)
// 0060f41e  ba01000000           mov edx, 1
// 0060f423  eb02                 jmp 0x60f427
// 0060f425  dddd                 fstp st(5)
// 0060f427  d9cb                 fxch st(3)
// 0060f429  d8d4                 fcom st(4)
// 0060f42b  dfe0                 fnstsw ax
// 0060f42d  f6c405               test ah, 5
// 0060f430  7a09                 jp 0x60f43b
// 0060f432  dddc                 fstp st(4)
// 0060f434  ba02000000           mov edx, 2
// 0060f439  eb02                 jmp 0x60f43d
// 0060f43b  ddd8                 fstp st(0)
// 0060f43d  d9c9                 fxch st(1)
// 0060f43f  d8d3                 fcom st(3)
// 0060f441  dfe0                 fnstsw ax
// 0060f443  f6c405               test ah, 5
// 0060f446  7a09                 jp 0x60f451
// 0060f448  dddb                 fstp st(3)
// 0060f44a  ba03000000           mov edx, 3
// 0060f44f  eb02                 jmp 0x60f453
// 0060f451  ddd8                 fstp st(0)
// 0060f453  d8d2                 fcom st(2)
// 0060f455  dfe0                 fnstsw ax
// 0060f457  f6c405               test ah, 5
// 0060f45a  7a09                 jp 0x60f465
// 0060f45c  ddda                 fstp st(2)
// 0060f45e  ba04000000           mov edx, 4
// 0060f463  eb02                 jmp 0x60f467
// 0060f465  ddd8                 fstp st(0)
// 0060f467  ded9                 fcompp 
// 0060f469  dfe0                 fnstsw ax
// 0060f46b  f6c405               test ah, 5
// 0060f46e  b805000000           mov eax, 5
// 0060f473  7b02                 jnp 0x60f477
// 0060f475  8bc2                 mov eax, edx
// 0060f477  c20400               ret 4

extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

struct Vector3 {
    float x, y, z;
};

struct S {
    Vector3 lower;
    Vector3 upper;
    int f(const Vector3& p);
};

int S::f(const Vector3& p)
{
    int result = 0;
    double d1 = fabs(p.y - upper.y);
    double d2 = fabs(p.z - upper.z);
    double d3 = fabs(p.x - lower.x);
    double d4 = fabs(p.y - lower.y);
    double d5 = fabs(p.z - lower.z);
    double minimum = fabs(p.x - upper.x);

    if (minimum > d1) {
        minimum = d1;
        result = 1;
    }
    if (d2 < minimum) {
        minimum = d2;
        result = 2;
    }
    if (d3 < minimum) {
        minimum = d3;
        result = 3;
    }
    if (d4 < minimum) {
        minimum = d4;
        result = 4;
    }
    if (d5 < minimum)
        result = 5;

    return result;
}
