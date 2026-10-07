// roc 2009-06 007e1630  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e1630
//
// 007e1630  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 007e1636  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 007e163c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007e1630 {
    char pad[288];
    int m_x;
};
struct S_func_007e1630 {
    char pad[284];
    I_func_007e1630* m_p;
    int f();
};
int S_func_007e1630::f()
{
    return m_p->m_x;
}
