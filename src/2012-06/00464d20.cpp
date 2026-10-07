// roc 2012-06 00464d20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d20
//
// 00464d20  8b4108               mov eax, dword ptr [ecx + 8]
// 00464d23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d20 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_00464d20::f()
{
    return m_x;
}
