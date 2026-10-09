// roc 2009-12 008a9c10  unit: CXTPDockingPaneAutoHideWnd  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9c10
//
// 008a9c10  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008a9c16  8b4014               mov eax, dword ptr [eax + 0x14]
// 008a9c19  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007cee00@ns_ROCX0000cd@@QAEHXZ)

namespace ns_ROCX0000cd {
struct I_func_007cee00 {
    char pad[20];
    int m_x;
};
struct S_func_007cee00 {
    char pad[144];
    I_func_007cee00* m_p;
    int f();
};
int S_func_007cee00::f()
{
    return m_p->m_x;
}
}
