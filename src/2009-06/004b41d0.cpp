// roc 2009-06 004b41d0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b41d0
//
// 004b41d0  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 004b41d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b41d0 {
    char pad0[140];
    int m_x;
    int f();
};
int S_func_004b41d0::f()
{
    return m_x;
}
