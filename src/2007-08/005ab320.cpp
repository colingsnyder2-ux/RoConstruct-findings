// from server: 58% by colin
// roc 2007-08 005ab320  unit: RBX::World  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab320
//
// 005ab320  8b542408             mov edx, dword ptr [esp + 8]
// 005ab324  d944240c             fld dword ptr [esp + 0xc]
// 005ab328  d9e8                 fld1 
// 005ab32a  56                   push esi
// 005ab32b  8b742408             mov esi, dword ptr [esp + 8]
// 005ab32f  33c9                 xor ecx, ecx
// 005ab331  2bf2                 sub esi, edx
// 005ab333  d90416               fld dword ptr [esi + edx]
// 005ab336  d902                 fld dword ptr [edx]
// 005ab338  d9c0                 fld st(0)
// 005ab33a  ddea                 fucomp st(2)
// 005ab33c  dfe0                 fnstsw ax
// 005ab33e  f6c444               test ah, 0x44
// 005ab341  7b1d                 jnp 0x5ab360
// 005ab343  d8e9                 fsubr st(1)
// 005ab345  d9e1                 fabs 
// 005ab347  d9c9                 fxch st(1)
// 005ab349  d9e1                 fabs 
// 005ab34b  d8c2                 fadd st(2)
// 005ab34d  d8cb                 fmul st(3)
// 005ab34f  ded9                 fcompp 
// 005ab351  dfe0                 fnstsw ax
// 005ab353  f6c401               test ah, 1
// 005ab356  740c                 je 0x5ab364
// 005ab358  ddd9                 fstp st(1)
// 005ab35a  32c0                 xor al, al
// 005ab35c  ddd8                 fstp st(0)
// 005ab35e  5e                   pop esi
// 005ab35f  c3                   ret 
// 005ab360  ddd8                 fstp st(0)
// 005ab362  ddd8                 fstp st(0)
// 005ab364  83c101               add ecx, 1
// 005ab367  83c204               add edx, 4
// 005ab36a  83f903               cmp ecx, 3
// 005ab36d  7cc4                 jl 0x5ab333
// 005ab36f  ddd9                 fstp st(1)
// 005ab371  b001                 mov al, 1
// 005ab373  ddd8                 fstp st(0)
// 005ab375  5e                   pop esi
// 005ab376  c3                   ret 

struct World {
    bool checkTolerance(const float* a, const float* b, float tol);
};

bool World::checkTolerance(const float* a, const float* b, float tol)
{
    int i = 0;
    const float* pa = a;
    const float* pb = b;
    while (i < 3) {
        float va = *pa;
        float vb = *pb;
        if (va != vb) {
            float d = va - vb;
            if (d < 0.0f) d = -d;
            float e = tol + tol;
            if (d > e) {
                return false;
            }
        }
        i++;
        pa++;
        pb++;
    }
    return true;
}
