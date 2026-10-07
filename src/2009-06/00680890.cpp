// roc 2009-06 00680890  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680890
//
// 00680890  d981c0000000         fld dword ptr [ecx + 0xc0]
// 00680896  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00680890 {
    char pad[192];
    float m_x;
    float f();
};
float S_func_00680890::f()
{
    return m_x;
}
