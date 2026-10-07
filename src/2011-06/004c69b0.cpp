// roc 2011-06 004c69b0  unit: RBX::Network::VPlayer::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c69b0
//
// 004c69b0  8b81e8010000         mov eax, dword ptr [ecx + 0x1e8]
// 004c69b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c69b0 {
    char pad0[488];
    int m_x;
    int f();
};
int S_func_004c69b0::f()
{
    return m_x;
}
