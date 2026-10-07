// roc 2010-06 006d80c0  unit: RBX::VSkateboardPlatform::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d80c0
//
// 006d80c0  d981f4000000         fld dword ptr [ecx + 0xf4]
// 006d80c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d80c0 {
    char pad[244];
    float m_x;
    float f();
};
float S_func_006d80c0::f()
{
    return m_x;
}
