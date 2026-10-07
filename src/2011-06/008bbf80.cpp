// roc 2011-06 008bbf80  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bbf80
//
// 008bbf80  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008bbf83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008bbf80 {
    char pad0[24];
    int m_x;
    int f();
};
int S_func_008bbf80::f()
{
    return m_x;
}
