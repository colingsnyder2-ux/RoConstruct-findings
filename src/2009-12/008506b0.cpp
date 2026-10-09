// roc 2009-12 008506b0  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008506b0
//
// 008506b0  8b4144               mov eax, dword ptr [ecx + 0x44]
// 008506b3  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00775940@ns_ROCX0000b1@@QAEHH@Z)

namespace ns_ROCX0000b1 {
struct S_func_00775940 {
    char pad0[68];
    int m_x;
    int f(int a1);
};
int S_func_00775940::f(int a1)
{
    return m_x;
}
}
