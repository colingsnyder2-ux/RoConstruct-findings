// roc 2011-06 00510340  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00510340
//
// 00510340  8a81181d0000         mov al, byte ptr [ecx + 0x1d18]
// 00510346  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00510340 {
    char pad0[7448];
    char m_x;
    char f();
};
char S_func_00510340::f()
{
    return m_x;
}
