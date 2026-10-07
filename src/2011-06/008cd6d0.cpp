// roc 2011-06 008cd6d0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cd6d0
//
// 008cd6d0  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008cd6d6  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 008cd6dc  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008cd6d0 {
    char pad[288];
    int m_x;
};
struct S_func_008cd6d0 {
    char pad[284];
    I_func_008cd6d0* m_p;
    int f();
};
int S_func_008cd6d0::f()
{
    return m_p->m_x;
}
