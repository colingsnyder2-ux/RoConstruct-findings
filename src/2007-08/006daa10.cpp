// roc 2007-08 006daa10  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006daa10
//
// 006daa10  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006daa13  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006daa10 {
    char pad0[24];
    int m_x;
    int f();
};
int S_func_006daa10::f()
{
    return m_x;
}
