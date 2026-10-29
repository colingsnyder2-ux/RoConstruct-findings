// roc 2009-06 00550f50  unit: RBX::HeadBuilder  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00550f50
//
// 00550f50  83ec0c               sub esp, 0xc
// 00550f53  d9ee                 fldz 
// 00550f55  56                   push esi
// 00550f56  8bf1                 mov esi, ecx
// 00550f58  d916                 fst dword ptr [esi]
// 00550f5a  d95e04               fstp dword ptr [esi + 4]
// 00550f5d  57                   push edi
// 00550f5e  d90560a48c00         fld dword ptr [0x8ca460]
// 00550f64  8b3ddce88900         mov edi, dword ptr [0x89e8dc]
// 00550f6a  d9c0                 fld st(0)
// 00550f6c  d9e0                 fchs 
// 00550f6e  d95c2410             fstp dword ptr [esp + 0x10]
// 00550f72  d95c240c             fstp dword ptr [esp + 0xc]
// 00550f76  ffd7                 call edi
// 00550f78  89442408             mov dword ptr [esp + 8], eax
// 00550f7c  db442408             fild dword ptr [esp + 8]
// 00550f80  d944240c             fld dword ptr [esp + 0xc]
// 00550f84  d9442410             fld dword ptr [esp + 0x10]
// 00550f88  dce9                 fsub st(1), st(0)
// 00550f8a  d9ca                 fxch st(2)
// 00550f8c  dec9                 fmulp st(1)
// 00550f8e  d80d00e88b00         fmul dword ptr [0x8be800]
// 00550f94  dec1                 faddp st(1)
// 00550f96  d91e                 fstp dword ptr [esi]
// 00550f98  d90560a48c00         fld dword ptr [0x8ca460]
// 00550f9e  d9c0                 fld st(0)
// 00550fa0  d9e0                 fchs 
// 00550fa2  d95c2408             fstp dword ptr [esp + 8]
// 00550fa6  d95c240c             fstp dword ptr [esp + 0xc]
// 00550faa  ffd7                 call edi
// 00550fac  89442410             mov dword ptr [esp + 0x10], eax
// 00550fb0  db442410             fild dword ptr [esp + 0x10]
// 00550fb4  d944240c             fld dword ptr [esp + 0xc]
// 00550fb8  d9442408             fld dword ptr [esp + 8]
// 00550fbc  dce9                 fsub st(1), st(0)
// 00550fbe  d9ca                 fxch st(2)
// 00550fc0  dec9                 fmulp st(1)
// 00550fc2  d80d00e88b00         fmul dword ptr [0x8be800]
// 00550fc8  dec1                 faddp st(1)
// 00550fca  d95e04               fstp dword ptr [esi + 4]
// 00550fcd  ffd7                 call edi
// 00550fcf  89442410             mov dword ptr [esp + 0x10], eax
// 00550fd3  db442410             fild dword ptr [esp + 0x10]
// 00550fd7  d80d00e88b00         fmul dword ptr [0x8be800]
// 00550fdd  d81d4cad8b00         fcomp dword ptr [0x8bad4c]
// 00550fe3  dfe0                 fnstsw ax
// 00550fe5  f6c441               test ah, 0x41
// 00550fe8  7507                 jne 0x550ff1
// 00550fea  b801000000           mov eax, 1
// 00550fef  eb02                 jmp 0x550ff3
// 00550ff1  33c0                 xor eax, eax
// 00550ff3  884608               mov byte ptr [esi + 8], al
// 00550ff6  ffd7                 call edi
// 00550ff8  89442410             mov dword ptr [esp + 0x10], eax
// 00550ffc  db442410             fild dword ptr [esp + 0x10]
// 00551000  d80d00e88b00         fmul dword ptr [0x8be800]
// 00551006  d81d4cad8b00         fcomp dword ptr [0x8bad4c]
// 0055100c  dfe0                 fnstsw ax
// 0055100e  f6c441               test ah, 0x41
// 00551011  7510                 jne 0x551023
// 00551013  b801000000           mov eax, 1
// 00551018  884609               mov byte ptr [esi + 9], al
// 0055101b  5f                   pop edi
// 0055101c  8bc6                 mov eax, esi
// 0055101e  5e                   pop esi
// 0055101f  83c40c               add esp, 0xc
// 00551022  c3                   ret 
// 00551023  33c0                 xor eax, eax
// 00551025  884609               mov byte ptr [esi + 9], al
// 00551028  5f                   pop edi
// 00551029  8bc6                 mov eax, esi
// 0055102b  5e                   pop esi
// 0055102c  83c40c               add esp, 0xc
// 0055102f  c3                   ret 
// copied from an identical function in another client (function ?init@S@@QAEPAU1@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma float_control(precise, off)

extern "C" int (__cdecl *rand)();

extern const float g_826e3c;
const float g_826e40 = 1.0f / 32767.0f;
const float g_819bac = 0.5f;

struct S {
    float x;
    float y;
    bool b8;
    bool b9;
    S* init();
};

S* S::init()
{
    x = 0.0f;
    y = 0.0f;

    int (__cdecl *random)() = rand;

    float na = -g_826e3c;
    float a = g_826e3c;
    int r1 = random();
    x = na + (a - na) * (float)r1 * g_826e40;

    float nb = -g_826e3c;
    float b = g_826e3c;
    int r2 = random();
    y = nb + (b - nb) * (float)r2 * g_826e40;

    int r3 = random();
    b8 = (float)r3 * g_826e40 > g_819bac;

    int r4 = random();
    b9 = (float)r4 * g_826e40 > g_819bac;

    return this;
}