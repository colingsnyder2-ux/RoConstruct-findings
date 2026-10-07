// roc 2009-06 004fb930  unit: RBX::Network::ServerReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fb930
//
// 004fb930  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 004fb936  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004fb930 {
    char pad0[336];
    int m_x;
    int f();
};
int S_func_004fb930::f()
{
    return m_x;
}
