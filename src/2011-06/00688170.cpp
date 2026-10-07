// roc 2011-06 00688170  unit: RBX::VHumanoid::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688170
//
// 00688170  d981c0000000         fld dword ptr [ecx + 0xc0]
// 00688176  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00688170 {
    char pad[192];
    float m_x;
    float f();
};
float S_func_00688170::f()
{
    return m_x;
}
