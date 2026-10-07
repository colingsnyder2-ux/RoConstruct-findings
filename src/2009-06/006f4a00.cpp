// roc 2009-06 006f4a00  unit: RBX::HUMAN::GettingUp  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4a00
//
// 006f4a00  d94104               fld dword ptr [ecx + 4]
// 006f4a03  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f4a00 {
    char pad[4];
    float m_x;
    float f();
};
float S_func_006f4a00::f()
{
    return m_x;
}
