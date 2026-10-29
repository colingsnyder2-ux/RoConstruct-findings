// roc 2009-06 006fb8c0  unit: RBX::HUMAN::GettingUp  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fb8c0
//
// 006fb8c0  8bc1                 mov eax, ecx
// 006fb8c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fb8c6  d901                 fld dword ptr [ecx]
// 006fb8c8  d918                 fstp dword ptr [eax]
// 006fb8ca  d94104               fld dword ptr [ecx + 4]
// 006fb8cd  d95804               fstp dword ptr [eax + 4]
// 006fb8d0  d94108               fld dword ptr [ecx + 8]
// 006fb8d3  b901000000           mov ecx, 1
// 006fb8d8  d95808               fstp dword ptr [eax + 8]
// 006fb8db  840df8c6a300         test byte ptr [0xa3c6f8], cl
// 006fb8e1  751a                 jne 0x6fb8fd
// 006fb8e3  d9ee                 fldz 
// 006fb8e5  090df8c6a300         or dword ptr [0xa3c6f8], ecx
// 006fb8eb  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 006fb8f1  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 006fb8f7  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 006fb8fd  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 006fb903  d9580c               fstp dword ptr [eax + 0xc]
// 006fb906  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 006fb90c  d95810               fstp dword ptr [eax + 0x10]
// 006fb90f  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 006fb915  d95814               fstp dword ptr [eax + 0x14]
// 006fb918  c20400               ret 4
// copied from an identical function in another client (function ?init@S@@QAEPAU1@PBM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    float f14;
    S* init(const float* src);
};

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern unsigned int g_96f050;

S* S::init(const float* src) {
    f0 = src[0];
    f4 = src[1];
    f8 = src[2];
    if (!(g_96f050 & 1)) {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }
    fC = g_96f044;
    f10 = g_96f048;
    f14 = g_96f04c;
    return this;
}