// from server: 100% by colin
// roc 2008-06 0066eb30  unit: RBX::HUMAN::GettingUp  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066eb30
//
// 0066eb30  8bc1                 mov eax, ecx
// 0066eb32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066eb36  d901                 fld dword ptr [ecx]
// 0066eb38  d918                 fstp dword ptr [eax]
// 0066eb3a  d94104               fld dword ptr [ecx + 4]
// 0066eb3d  d95804               fstp dword ptr [eax + 4]
// 0066eb40  d94108               fld dword ptr [ecx + 8]
// 0066eb43  b901000000           mov ecx, 1
// 0066eb48  d95808               fstp dword ptr [eax + 8]
// 0066eb4b  840d50f09600         test byte ptr [0x96f050], cl
// 0066eb51  751a                 jne 0x66eb6d
// 0066eb53  d9ee                 fldz 
// 0066eb55  090d50f09600         or dword ptr [0x96f050], ecx
// 0066eb5b  d91544f09600         fst dword ptr [0x96f044]
// 0066eb61  d91548f09600         fst dword ptr [0x96f048]
// 0066eb67  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0066eb6d  d90544f09600         fld dword ptr [0x96f044]
// 0066eb73  d9580c               fstp dword ptr [eax + 0xc]
// 0066eb76  d90548f09600         fld dword ptr [0x96f048]
// 0066eb7c  d95810               fstp dword ptr [eax + 0x10]
// 0066eb7f  d9054cf09600         fld dword ptr [0x96f04c]
// 0066eb85  d95814               fstp dword ptr [eax + 0x14]
// 0066eb88  c20400               ret 4

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
