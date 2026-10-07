// roc 2011-06 0066bec0  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066bec0
//
// 0066bec0  d98178010000         fld dword ptr [ecx + 0x178]
// 0066bec6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066bec0 {
    char pad[376];
    float m_x;
    float f();
};
float S_func_0066bec0::f()
{
    return m_x;
}
