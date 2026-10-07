// roc 2009-06 006cf7f0  unit: RBX::HUMAN::Climbing  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cf7f0
//
// 006cf7f0  d94168               fld dword ptr [ecx + 0x68]
// 006cf7f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006cf7f0 {
    char pad[104];
    float m_x;
    float f();
};
float S_func_006cf7f0::f()
{
    return m_x;
}
