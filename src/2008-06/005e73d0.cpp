// roc 2008-06 005e73d0  unit: RBX::Ball  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e73d0
//
// 005e73d0  d94110               fld dword ptr [ecx + 0x10]
// 005e73d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e73d0 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_005e73d0::f()
{
    return m_x;
}
