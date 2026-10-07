// roc 2009-06 00680870  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680870
//
// 00680870  d981b8000000         fld dword ptr [ecx + 0xb8]
// 00680876  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00680870 {
    char pad[184];
    float m_x;
    float f();
};
float S_func_00680870::f()
{
    return m_x;
}
