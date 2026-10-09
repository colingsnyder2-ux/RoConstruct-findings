// roc 2009-12 008549c0  unit: CXTPTabClientWnd::CWorkspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008549c0
//
// 008549c0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008549c6  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 008549cc  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00779c60@ns_ROCX0000bb@@QAEHXZ)

namespace ns_ROCX0000bb {
struct I_func_00779c60 {
    char pad[188];
    int m_x;
};
struct S_func_00779c60 {
    char pad[144];
    I_func_00779c60* m_p;
    int f();
};
int S_func_00779c60::f()
{
    return m_p->m_x;
}
}
