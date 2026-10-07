// roc 2009-06 006a1440  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1440
//
// 006a1440  d981f0020000         fld dword ptr [ecx + 0x2f0]
// 006a1446  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a1440 {
    char pad[752];
    float m_x;
    float f();
};
float S_func_006a1440::f()
{
    return m_x;
}
