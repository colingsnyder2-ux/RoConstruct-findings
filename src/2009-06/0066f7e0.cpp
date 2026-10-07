// roc 2009-06 0066f7e0  unit: RBX::Block  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f7e0
//
// 0066f7e0  d94114               fld dword ptr [ecx + 0x14]
// 0066f7e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066f7e0 {
    char pad[20];
    float m_x;
    float f();
};
float S_func_0066f7e0::f()
{
    return m_x;
}
