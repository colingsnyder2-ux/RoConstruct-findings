// roc 2011-06 00714fc0  unit: RBX::TouchTransmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714fc0
//
// 00714fc0  d98158030000         fld dword ptr [ecx + 0x358]
// 00714fc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714fc0 {
    char pad[856];
    float m_x;
    float f();
};
float S_func_00714fc0::f()
{
    return m_x;
}
