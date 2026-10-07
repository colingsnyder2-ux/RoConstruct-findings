// roc 2009-06 007cfe50  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cfe50
//
// 007cfe50  8b442404             mov eax, dword ptr [esp + 4]
// 007cfe54  894118               mov dword ptr [ecx + 0x18], eax
// 007cfe57  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007cfe50 {
    char pad0[24];
    int m_x;
    void f(int a1);
};
void S_func_007cfe50::f(int a1)
{
    m_x = (int)a1;
}
