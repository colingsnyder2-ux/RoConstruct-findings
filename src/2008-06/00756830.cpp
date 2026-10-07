// roc 2008-06 00756830  unit: CXTPDockingPaneAutoHideWnd  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756830
//
// 00756830  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00756836  8b4014               mov eax, dword ptr [eax + 0x14]
// 00756839  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00756830 {
    char pad[20];
    int m_x;
};
struct S_func_00756830 {
    char pad[144];
    I_func_00756830* m_p;
    int f();
};
int S_func_00756830::f()
{
    return m_p->m_x;
}
