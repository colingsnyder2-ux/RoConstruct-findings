// from server: 30% by colin
// roc 2007-08 00601880  unit: RBX::Humanoid  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601880
//
// 00601880  deca                 fmulp st(2)
// 00601882  d8cb                 fmul st(3)
// 00601884  d9ca                 fxch st(2)
// 00601886  d8cb                 fmul st(3)
// 00601888  d9c9                 fxch st(1)
// 0060188a  decb                 fmulp st(3)
// 0060188c  d94624               fld dword ptr [esi + 0x24]
// 0060188f  dec2                 faddp st(2)
// 00601891  d84628               fadd dword ptr [esi + 0x28]
// 00601894  d9462c               fld dword ptr [esi + 0x2c]
// 00601897  dec3                 faddp st(3)
// 00601899  d9c9                 fxch st(1)
// 0060189b  d95f24               fstp dword ptr [edi + 0x24]
// 0060189e  d95f28               fstp dword ptr [edi + 0x28]
// 006018a1  d95f2c               fstp dword ptr [edi + 0x2c]
// 006018a4  5f                   pop edi
// 006018a5  5e                   pop esi
// 006018a6  83c410               add esp, 0x10
// 006018a9  c20c00               ret 0xc

struct S {
    char pad[0x24];
    float m24;
    float m28;
    float m2c;

    void f(float a, float b, float c, float d);
};

void S::f(float a, float b, float c, float d) {
    float x = m24 * a;
    float y = m28 * b;
    float z = m2c * c;
    float w = d;
    m24 = x + w;
    m28 = y + w;
    m2c = z + w;
}
