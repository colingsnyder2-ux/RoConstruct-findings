// roc 2008-06 004a1a30  unit: RBX::Network::Server::ClientProxy  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1a30
//
// 004a1a30  8b81682d0000         mov eax, dword ptr [ecx + 0x2d68]
// 004a1a36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a1a30 {
    char pad0[11624];
    int m_x;
    int f();
};
int S_func_004a1a30::f()
{
    return m_x;
}
