// roc 2011-06 00713670  unit: RBX::VSkateboardController::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00713670
//
// 00713670  d981a4000000         fld dword ptr [ecx + 0xa4]
// 00713676  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00713670 {
    char pad[164];
    float m_x;
    float f();
};
float S_func_00713670::f()
{
    return m_x;
}
