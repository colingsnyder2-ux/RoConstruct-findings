// roc 2008-06 00598be0  unit: RBX::NullController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598be0
//
// 00598be0  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 00598be6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598be0 {
    char pad[488];
    float m_x;
    float f();
};
float S_func_00598be0::f()
{
    return m_x;
}
