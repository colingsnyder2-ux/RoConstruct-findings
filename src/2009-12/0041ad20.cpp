// roc 2009-12 0041ad20  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad20
//
// 0041ad20  8b4168               mov eax, dword ptr [ecx + 0x68]
// 0041ad23  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0041a8e0@ns_ROCX00003a@@QAEHXZ)

namespace ns_ROCX00003a {
struct S_func_0041a8e0 {
    char pad0[104];
    int m_x;
    int f();
};
int S_func_0041a8e0::f()
{
    return m_x;
}
}
