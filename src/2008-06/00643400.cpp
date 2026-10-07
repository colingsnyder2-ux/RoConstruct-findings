// roc 2008-06 00643400  unit: RBX::HUMAN::Landed  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643400
//
// 00643400  d981c4000000         fld dword ptr [ecx + 0xc4]
// 00643406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00643400 {
    char pad[196];
    float m_x;
    float f();
};
float S_func_00643400::f()
{
    return m_x;
}
