// roc 2009-06 00779c60  unit: CXTPTabClientWnd::CWorkspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779c60
//
// 00779c60  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00779c66  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00779c6c  c3                   ret 
// auto-matched from its assembly shape

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
