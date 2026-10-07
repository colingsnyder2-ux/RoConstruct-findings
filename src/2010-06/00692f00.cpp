// roc 2010-06 00692f00  unit: RBX::VHint::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692f00
//
// 00692f00  d981f0010000         fld dword ptr [ecx + 0x1f0]
// 00692f06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00692f00 {
    char pad[496];
    float m_x;
    float f();
};
float S_func_00692f00::f()
{
    return m_x;
}
