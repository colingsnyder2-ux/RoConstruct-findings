// roc 2009-12 00566190  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00566190
//
// 00566190  8b81500b0000         mov eax, dword ptr [ecx + 0xb50]
// 00566196  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004feaf0@ns_ROCX00000f@@QAEHXZ)

namespace ns_ROCX00000f {
struct S_func_004feaf0 {
    char pad0[2896];
    int m_x;
    int f();
};
int S_func_004feaf0::f()
{
    return m_x;
}
}
