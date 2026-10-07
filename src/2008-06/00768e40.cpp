// roc 2008-06 00768e40  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00768e40
//
// 00768e40  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00768e46  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00768e4c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00768e40 {
    char pad[288];
    int m_x;
};
struct S_func_00768e40 {
    char pad[284];
    I_func_00768e40* m_p;
    int f();
};
int S_func_00768e40::f()
{
    return m_p->m_x;
}
