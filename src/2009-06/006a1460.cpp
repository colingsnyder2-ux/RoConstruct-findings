// roc 2009-06 006a1460  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1460
//
// 006a1460  d981f8020000         fld dword ptr [ecx + 0x2f8]
// 006a1466  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a1460 {
    char pad[760];
    float m_x;
    float f();
};
float S_func_006a1460::f()
{
    return m_x;
}
