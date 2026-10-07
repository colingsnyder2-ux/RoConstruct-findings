// roc 2009-06 004f5360  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5360
//
// 004f5360  8a81d4060000         mov al, byte ptr [ecx + 0x6d4]
// 004f5366  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f5360 {
    char pad0[1748];
    char m_x;
    char f();
};
char S_func_004f5360::f()
{
    return m_x;
}
