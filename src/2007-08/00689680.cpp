// roc 2007-08 00689680  unit: CXTPTabClientWnd::CWorkspace  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00689680
//
// 00689680  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00689686  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0068968c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00689680 {
    char pad[188];
    int m_x;
};
struct S_func_00689680 {
    char pad[140];
    I_func_00689680* m_p;
    int f();
};
int S_func_00689680::f()
{
    return m_p->m_x;
}
