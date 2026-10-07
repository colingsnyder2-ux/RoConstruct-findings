// roc 2011-06 00714fa0  unit: RBX::TouchTransmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714fa0
//
// 00714fa0  d98150030000         fld dword ptr [ecx + 0x350]
// 00714fa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714fa0 {
    char pad[848];
    float m_x;
    float f();
};
float S_func_00714fa0::f()
{
    return m_x;
}
