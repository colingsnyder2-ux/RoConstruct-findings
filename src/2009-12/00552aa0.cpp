// roc 2009-12 00552aa0  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552aa0
//
// 00552aa0  8a81d8290000         mov al, byte ptr [ecx + 0x29d8]
// 00552aa6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00501390@ns_ROCX000005@@QAEDXZ)

namespace ns_ROCX000005 {
struct S_func_00501390 {
    char pad0[10712];
    char m_x;
    char f();
};
char S_func_00501390::f()
{
    return m_x;
}
}
