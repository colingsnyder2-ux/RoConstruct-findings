// roc 2009-06 004f5350  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5350
//
// 004f5350  8a81d5060000         mov al, byte ptr [ecx + 0x6d5]
// 004f5356  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f5350 {
    char pad0[1749];
    char m_x;
    char f();
};
char S_func_004f5350::f()
{
    return m_x;
}
