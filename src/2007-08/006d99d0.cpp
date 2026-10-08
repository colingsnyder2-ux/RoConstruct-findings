// roc 2007-08 006d99d0  unit: CXTPDockingPaneAutoHideWnd  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d99d0
//
// 006d99d0  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 006d99d6  8b4014               mov eax, dword ptr [eax + 0x14]
// 006d99d9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006d99d0 {
    char pad[20];
    int m_x;
};
struct S_func_006d99d0 {
    char pad[140];
    I_func_006d99d0* m_p;
    int f();
};
int S_func_006d99d0::f()
{
    return m_p->m_x;
}
