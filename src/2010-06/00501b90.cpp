// roc 2010-06 00501b90  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501b90
//
// 00501b90  8a81d5060000         mov al, byte ptr [ecx + 0x6d5]
// 00501b96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00501b90 {
    char pad0[1749];
    char m_x;
    char f();
};
char S_func_00501b90::f()
{
    return m_x;
}
