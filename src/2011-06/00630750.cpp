// roc 2011-06 00630750  unit: RBX::Network::VPlayer::?$RemoteEventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00630750
//
// 00630750  8d81fc010000         lea eax, [ecx + 0x1fc]
// 00630756  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00630750 {
    char pad0[508];
    int m_x;
    int* f();
};
int* S_func_00630750::f()
{
    return &m_x;
}
