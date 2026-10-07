// roc 2009-06 0043fbb0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043fbb0
//
// 0043fbb0  8a4129               mov al, byte ptr [ecx + 0x29]
// 0043fbb3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043fbb0 {
    char pad0[41];
    char m_x;
    char f();
};
char S_func_0043fbb0::f()
{
    return m_x;
}
