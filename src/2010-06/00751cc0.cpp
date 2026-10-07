// roc 2010-06 00751cc0  unit: RBX::Body  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00751cc0
//
// 00751cc0  d981d0000000         fld dword ptr [ecx + 0xd0]
// 00751cc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00751cc0 {
    char pad[208];
    float m_x;
    float f();
};
float S_func_00751cc0::f()
{
    return m_x;
}
