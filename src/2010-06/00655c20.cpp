// roc 2010-06 00655c20  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00655c20
//
// 00655c20  d981c4000000         fld dword ptr [ecx + 0xc4]
// 00655c26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00655c20 {
    char pad[196];
    float m_x;
    float f();
};
float S_func_00655c20::f()
{
    return m_x;
}
