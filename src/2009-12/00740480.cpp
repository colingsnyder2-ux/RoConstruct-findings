// roc 2009-12 00740480  unit: RBX::VirtualHardwareDevice  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00740480
//
// 00740480  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00740483  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006b15d0@ns_ROCX000003@@QAEHXZ)

namespace ns_ROCX000003 {
struct S_func_006b15d0 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_006b15d0::f()
{
    return m_x;
}
}
