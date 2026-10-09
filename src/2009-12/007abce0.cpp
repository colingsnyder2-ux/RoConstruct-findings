// roc 2009-12 007abce0  unit: RBX::HUMAN::Climbing  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007abce0
//
// 007abce0  d94178               fld dword ptr [ecx + 0x78]
// 007abce3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0074c5d0@ns_ROCX000003@@QAEMXZ)

namespace ns_ROCX000003 {
struct S_func_0074c5d0 {
    char pad[120];
    float m_x;
    float f();
};
float S_func_0074c5d0::f()
{
    return m_x;
}
}
