// roc 2008-06 00701340  unit: CXTPTabClientWnd::CWorkspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701340
//
// 00701340  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00701346  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0070134c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00701340 {
    char pad[188];
    int m_x;
};
struct S_func_00701340 {
    char pad[144];
    I_func_00701340* m_p;
    int f();
};
int S_func_00701340::f()
{
    return m_p->m_x;
}
