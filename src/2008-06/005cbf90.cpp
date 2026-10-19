// from server: 71% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 50% by colin
// roc 2008-06 005cbf90  unit: RBX::Camera  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cbf90
//
// 005cbf90  837c240400           cmp dword ptr [esp + 4], 0
// 005cbf95  d98198010000         fld dword ptr [ecx + 0x198]
// 005cbf9b  d8a1c8010000         fsub dword ptr [ecx + 0x1c8]
// 005cbfa1  d9819c010000         fld dword ptr [ecx + 0x19c]
// 005cbfa7  d8a1cc010000         fsub dword ptr [ecx + 0x1cc]
// 005cbfad  d981a0010000         fld dword ptr [ecx + 0x1a0]
// 005cbfb3  d8a1d0010000         fsub dword ptr [ecx + 0x1d0]
// 005cbfb9  dcc8                 fmul st(0), st(0)
// 005cbfbb  d9c1                 fld st(1)
// 005cbfbd  deca                 fmulp st(2)
// 005cbfbf  dec1                 faddp st(1)
// 005cbfc1  d9c1                 fld st(1)
// 005cbfc3  deca                 fmulp st(2)
// 005cbfc5  dec1                 faddp st(1)
// 005cbfc7  d9fa                 fsqrt 
// 005cbfc9  7e12                 jle 0x5cbfdd
// 005cbfcb  d81dac9b8100         fcomp dword ptr [0x819bac]
// 005cbfd1  dfe0                 fnstsw ax
// 005cbfd3  f6c441               test ah, 0x41
// 005cbfd6  7412                 je 0x5cbfea
// 005cbfd8  33c0                 xor eax, eax
// 005cbfda  c20400               ret 4

struct S_func_005cbf90 {
    char pad0[0x198];
    float m_198;
    float m_19c;
    float m_1a0;
    char pad1[0x1c8 - 0x1a4];
    float m_1c8;
    float m_1cc;
    float m_1d0;
    float f(int arg);
};

extern float g_819bac;
extern "C" float __stdcall sqrtf(float);

float S_func_005cbf90::f(int arg)
{
    float dx = m_198 - m_1c8;
    float dy = m_19c - m_1cc;
    float dz = m_1a0 - m_1d0;
    float dist = dx * dy + dx * dy + dz * dz;
    float len = sqrtf(dist);
    if (arg > 0) {
        if (!(len > g_819bac)) {
            return len;
        }
        return 0.0f;
    }
    return len;
}
