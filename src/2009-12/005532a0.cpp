// roc 2009-12 005532a0  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005532a0
//
// 005532a0  8a81d4060000         mov al, byte ptr [ecx + 0x6d4]
// 005532a6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004f5360@ns_ROCX000003@@QAEDXZ)

namespace ns_ROCX000003 {
struct S_func_004f5360 {
    char pad0[1748];
    char m_x;
    char f();
};
char S_func_004f5360::f()
{
    return m_x;
}
}
