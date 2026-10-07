// roc 2010-06 00501390  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501390
//
// 00501390  8a81d8290000         mov al, byte ptr [ecx + 0x29d8]
// 00501396  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00501390 {
    char pad0[10712];
    char m_x;
    char f();
};
char S_func_00501390::f()
{
    return m_x;
}
