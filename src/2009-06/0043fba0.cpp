// roc 2009-06 0043fba0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043fba0
//
// 0043fba0  8a4128               mov al, byte ptr [ecx + 0x28]
// 0043fba3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0043fba0 {
    char pad0[40];
    char m_x;
    char f();
};
char S_func_0043fba0::f()
{
    return m_x;
}
