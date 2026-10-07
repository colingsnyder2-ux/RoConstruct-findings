// roc 2010-06 006d80b0  unit: RBX::VSkateboardPlatform::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d80b0
//
// 006d80b0  d981f0000000         fld dword ptr [ecx + 0xf0]
// 006d80b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d80b0 {
    char pad[240];
    float m_x;
    float f();
};
float S_func_006d80b0::f()
{
    return m_x;
}
