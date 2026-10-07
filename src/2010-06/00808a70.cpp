// roc 2010-06 00808a70  unit: CXTPTabClientWnd::CWorkspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808a70
//
// 00808a70  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00808a76  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00808a7c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00808a70 {
    char pad[188];
    int m_x;
};
struct S_func_00808a70 {
    char pad[144];
    I_func_00808a70* m_p;
    int f();
};
int S_func_00808a70::f()
{
    return m_p->m_x;
}
