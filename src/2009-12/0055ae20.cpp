// roc 2009-12 0055ae20  unit: RBX::Network::ServerReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055ae20
//
// 0055ae20  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 0055ae26  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00659850@ns_ROCX0000c2@@QAEHXZ)

namespace ns_ROCX0000c2 {
struct S_func_00659850 {
    char pad0[320];
    int m_x;
    int f();
};
int S_func_00659850::f()
{
    return m_x;
}
}
