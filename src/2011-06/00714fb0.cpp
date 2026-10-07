// roc 2011-06 00714fb0  unit: RBX::TouchTransmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714fb0
//
// 00714fb0  d98154030000         fld dword ptr [ecx + 0x354]
// 00714fb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714fb0 {
    char pad[852];
    float m_x;
    float f();
};
float S_func_00714fb0::f()
{
    return m_x;
}
