// roc 2011-06 00630740  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00630740
//
// 00630740  8b81f4010000         mov eax, dword ptr [ecx + 0x1f4]
// 00630746  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00630740 {
    char pad0[500];
    int m_x;
    int f();
};
int S_func_00630740::f()
{
    return m_x;
}
