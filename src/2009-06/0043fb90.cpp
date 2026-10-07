// roc 2009-06 0043fb90  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043fb90
//
// 0043fb90  8a4141               mov al, byte ptr [ecx + 0x41]
// 0043fb93  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043fb90 {
    char pad0[65];
    char m_x;
    char f();
};
char S_func_0043fb90::f()
{
    return m_x;
}
