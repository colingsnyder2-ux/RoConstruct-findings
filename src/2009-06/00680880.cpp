// roc 2009-06 00680880  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680880
//
// 00680880  d981bc000000         fld dword ptr [ecx + 0xbc]
// 00680886  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00680880 {
    char pad[188];
    float m_x;
    float f();
};
float S_func_00680880::f()
{
    return m_x;
}
