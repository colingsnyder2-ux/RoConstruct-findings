// roc 2010-06 0085dd50  unit: CXTPDockingPaneAutoHideWnd  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085dd50
//
// 0085dd50  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0085dd56  8b4014               mov eax, dword ptr [eax + 0x14]
// 0085dd59  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0085dd50 {
    char pad[20];
    int m_x;
};
struct S_func_0085dd50 {
    char pad[144];
    I_func_0085dd50* m_p;
    int f();
};
int S_func_0085dd50::f()
{
    return m_p->m_x;
}
