// roc 2011-06 008baf20  unit: CXTPDockingPaneAutoHideWnd  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008baf20
//
// 008baf20  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008baf26  8b4014               mov eax, dword ptr [eax + 0x14]
// 008baf29  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008baf20 {
    char pad[20];
    int m_x;
};
struct S_func_008baf20 {
    char pad[144];
    I_func_008baf20* m_p;
    int f();
};
int S_func_008baf20::f()
{
    return m_p->m_x;
}
