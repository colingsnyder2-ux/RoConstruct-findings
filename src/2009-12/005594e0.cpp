// roc 2009-12 005594e0  unit: RBX::Network::ServerReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005594e0
//
// 005594e0  8b81d0290000         mov eax, dword ptr [ecx + 0x29d0]
// 005594e6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005080d0@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
struct S_func_005080d0 {
    char pad0[10704];
    int m_x;
    int f();
};
int S_func_005080d0::f()
{
    return m_x;
}
}
