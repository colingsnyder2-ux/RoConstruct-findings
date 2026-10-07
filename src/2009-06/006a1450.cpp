// roc 2009-06 006a1450  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1450
//
// 006a1450  d981f4020000         fld dword ptr [ecx + 0x2f4]
// 006a1456  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a1450 {
    char pad[756];
    float m_x;
    float f();
};
float S_func_006a1450::f()
{
    return m_x;
}
