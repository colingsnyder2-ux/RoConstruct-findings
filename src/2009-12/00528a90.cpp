// roc 2009-12 00528a90  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528a90
//
// 00528a90  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00528a96  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00529f30@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
struct S_func_00529f30 {
    char pad0[248];
    int m_x;
    int f();
};
int S_func_00529f30::f()
{
    return m_x;
}
}
