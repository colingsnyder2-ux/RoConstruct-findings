// roc 2010-06 0074c5d0  unit: RBX::HUMAN::Climbing  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074c5d0
//
// 0074c5d0  d94178               fld dword ptr [ecx + 0x78]
// 0074c5d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074c5d0 {
    char pad[120];
    float m_x;
    float f();
};
float S_func_0074c5d0::f()
{
    return m_x;
}
