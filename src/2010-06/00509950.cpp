// roc 2010-06 00509950  unit: RBX::Network::ServerReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00509950
//
// 00509950  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00509956  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00509950 {
    char pad0[320];
    int m_x;
    int f();
};
int S_func_00509950::f()
{
    return m_x;
}
