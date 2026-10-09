// roc 2009-12 008c6320  unit: CXTPPropertyGridInplaceButton  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6320
//
// 008c6320  8b4144               mov eax, dword ptr [ecx + 0x44]
// 008c6323  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007eb780@ns_ROCX000028@@QAEHXZ)

namespace ns_ROCX000028 {
struct S_func_007eb780 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_007eb780::f()
{
    return m_x;
}
}
