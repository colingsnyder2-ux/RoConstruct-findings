// roc 2009-06 006a1420  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1420
//
// 006a1420  8b81fc020000         mov eax, dword ptr [ecx + 0x2fc]
// 006a1426  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a1420 {
    char pad0[764];
    int m_x;
    int f();
};
int S_func_006a1420::f()
{
    return m_x;
}
