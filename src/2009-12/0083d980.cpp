// roc 2009-12 0083d980  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d980
//
// 0083d980  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 0083d986  83c00a               add eax, 0xa
// 0083d989  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006ea240@ns_ROCX00003f@@QAEHXZ)

namespace ns_ROCX00003f {
struct S_func_006ea240 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_006ea240::f()
{
    return m_x + 0xa;
}
}
