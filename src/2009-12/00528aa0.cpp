// roc 2009-12 00528aa0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528aa0
//
// 00528aa0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00528aa6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00645280@ns_ROCX000099@@QAEHXZ)

namespace ns_ROCX000099 {
struct S_func_00645280 {
    char pad0[256];
    int m_x;
    int f();
};
int S_func_00645280::f()
{
    return m_x;
}
}
