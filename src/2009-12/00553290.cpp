// roc 2009-12 00553290  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553290
//
// 00553290  8a81d5060000         mov al, byte ptr [ecx + 0x6d5]
// 00553296  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004f5350@ns_ROCX000002@@QAEDXZ)

namespace ns_ROCX000002 {
struct S_func_004f5350 {
    char pad0[1749];
    char m_x;
    char f();
};
char S_func_004f5350::f()
{
    return m_x;
}
}
