// roc 2010-06 00501ba0  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501ba0
//
// 00501ba0  8a81d4060000         mov al, byte ptr [ecx + 0x6d4]
// 00501ba6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00501ba0 {
    char pad0[1748];
    char m_x;
    char f();
};
char S_func_00501ba0::f()
{
    return m_x;
}
