// roc 2009-06 0066f810  unit: RBX::Ball  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f810
//
// 0066f810  d94110               fld dword ptr [ecx + 0x10]
// 0066f813  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066f810 {
    char pad[16];
    float m_x;
    float f();
};
float S_func_0066f810::f()
{
    return m_x;
}
