// roc 2012-06 00464d10  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d10
//
// 00464d10  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00464d13  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d10 {
    char pad0[24];
    int m_x;
    int f();
};
int S_func_00464d10::f()
{
    return m_x;
}
