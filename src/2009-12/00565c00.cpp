// roc 2009-12 00565c00  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00565c00
//
// 00565c00  8b81800b0000         mov eax, dword ptr [ecx + 0xb80]
// 00565c06  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004fe560@ns_ROCX00000e@@QAEHXZ)

namespace ns_ROCX00000e {
struct S_func_004fe560 {
    char pad0[2944];
    int m_x;
    int f();
};
int S_func_004fe560::f()
{
    return m_x;
}
}
