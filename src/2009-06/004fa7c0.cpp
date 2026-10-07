// roc 2009-06 004fa7c0  unit: RBX::Network::ServerReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fa7c0
//
// 004fa7c0  8b81142f0000         mov eax, dword ptr [ecx + 0x2f14]
// 004fa7c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fa7c0 {
    char pad0[12052];
    int m_x;
    int f();
};
int S_func_004fa7c0::f()
{
    return m_x;
}
