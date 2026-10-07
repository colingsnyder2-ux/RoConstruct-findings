// roc 2007-08 006aa2d0  unit: CXTPRibbonBar  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006aa2d0
//
// 006aa2d0  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 006aa2d6  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 006aa2dc  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006aa2d0 {
    char pad[468];
    int m_x;
};
struct S_func_006aa2d0 {
    char pad[612];
    I_func_006aa2d0* m_p;
    int f();
};
int S_func_006aa2d0::f()
{
    return m_p->m_x;
}
