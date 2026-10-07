// roc 2011-06 00712d30  unit: RBX::VSkateboardPlatform::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00712d30
//
// 00712d30  d981c8000000         fld dword ptr [ecx + 0xc8]
// 00712d36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00712d30 {
    char pad[200];
    float m_x;
    float f();
};
float S_func_00712d30::f()
{
    return m_x;
}
