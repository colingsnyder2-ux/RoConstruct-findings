// roc 2009-12 00553000  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553000
//
// 00553000  8b81d8060000         mov eax, dword ptr [ecx + 0x6d8]
// 00553006  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004f50c0@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
struct S_func_004f50c0 {
    char pad0[1752];
    int m_x;
    int f();
};
int S_func_004f50c0::f()
{
    return m_x;
}
}
