// roc 2011-06 004dced0  unit: RBX::Network::ServerReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dced0
//
// 004dced0  8b81101d0000         mov eax, dword ptr [ecx + 0x1d10]
// 004dced6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004dced0 {
    char pad0[7440];
    int m_x;
    int f();
};
int S_func_004dced0::f()
{
    return m_x;
}
