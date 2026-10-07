// roc 2010-06 00692e60  unit: RBX::VHint::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692e60
//
// 00692e60  d9818c010000         fld dword ptr [ecx + 0x18c]
// 00692e66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00692e60 {
    char pad[396];
    float m_x;
    float f();
};
float S_func_00692e60::f()
{
    return m_x;
}
