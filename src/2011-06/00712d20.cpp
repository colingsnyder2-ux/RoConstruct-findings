// roc 2011-06 00712d20  unit: RBX::VSkateboardPlatform::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00712d20
//
// 00712d20  d981c4000000         fld dword ptr [ecx + 0xc4]
// 00712d26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00712d20 {
    char pad[196];
    float m_x;
    float f();
};
float S_func_00712d20::f()
{
    return m_x;
}
