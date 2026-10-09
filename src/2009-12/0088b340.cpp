// roc 2009-12 0088b340  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b340
//
// 0088b340  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 0088b346  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007b0480@ns_ROCX00006b@@QAEHXZ)

namespace ns_ROCX00006b {
struct S_func_007b0480 {
    char pad0[400];
    int m_x;
    int f();
};
int S_func_007b0480::f()
{
    return m_x;
}
}
