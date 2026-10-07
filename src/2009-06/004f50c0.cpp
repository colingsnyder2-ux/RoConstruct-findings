// roc 2009-06 004f50c0  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f50c0
//
// 004f50c0  8b81d8060000         mov eax, dword ptr [ecx + 0x6d8]
// 004f50c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f50c0 {
    char pad0[1752];
    int m_x;
    int f();
};
int S_func_004f50c0::f()
{
    return m_x;
}
