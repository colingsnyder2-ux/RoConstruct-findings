// roc 2012-06 00464d30  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d30
//
// 00464d30  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00464d33  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d30 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_00464d30::f()
{
    return m_x;
}
