// roc 2009-06 004c3f20  unit: RBX::Network::VPlayer::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c3f20
//
// 004c3f20  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 004c3f26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c3f20 {
    char pad0[232];
    int m_x;
    int f();
};
int S_func_004c3f20::f()
{
    return m_x;
}
