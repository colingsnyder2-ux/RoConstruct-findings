// roc 2009-12 008a41b0  unit: DxUserInput  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a41b0
//
// 008a41b0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 008a41b3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007c93b0@ns_ROCX0000b8@@QAEHXZ)

namespace ns_ROCX0000b8 {
struct S_func_007c93b0 {
    char pad0[100];
    int m_x;
    int f();
};
int S_func_007c93b0::f()
{
    return m_x;
}
}
