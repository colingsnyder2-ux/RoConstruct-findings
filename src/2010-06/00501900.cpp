// roc 2010-06 00501900  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501900
//
// 00501900  8b81d8060000         mov eax, dword ptr [ecx + 0x6d8]
// 00501906  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00501900 {
    char pad0[1752];
    int m_x;
    int f();
};
int S_func_00501900::f()
{
    return m_x;
}
