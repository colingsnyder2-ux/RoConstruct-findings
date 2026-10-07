// roc 2009-06 006a1430  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1430
//
// 006a1430  8b8100030000         mov eax, dword ptr [ecx + 0x300]
// 006a1436  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a1430 {
    char pad0[768];
    int m_x;
    int f();
};
int S_func_006a1430::f()
{
    return m_x;
}
