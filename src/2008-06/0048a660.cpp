// roc 2008-06 0048a660  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a660
//
// 0048a660  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 0048a666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0048a660 {
    char pad0[416];
    int m_x;
    int f();
};
int S_func_0048a660::f()
{
    return m_x;
}
