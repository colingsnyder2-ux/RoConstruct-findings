// from server: 82% by colin
// roc 2007-08 00555810  unit: RBX::GuiTarget  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555810
//
// 00555810  d90564837a00         fld dword ptr [0x7a8364]
// 00555816  d999f4000000         fstp dword ptr [ecx + 0xf4]
// 0055581c  d90560837a00         fld dword ptr [0x7a8360]
// 00555822  d999f8000000         fstp dword ptr [ecx + 0xf8]
// 00555828  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 00555832  c3                   ret 

struct S_func_00555810 {
    char pad0[0xf4];
    float m_field_f4;
    float m_field_f8;
    int m_field_fc;
    void f();
};

extern float g_007a8364;
extern float g_007a8360;

void S_func_00555810::f()
{
    m_field_f4 = g_007a8364;
    m_field_f8 = g_007a8360;
    m_field_fc = 0;
}
