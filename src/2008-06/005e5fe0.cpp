// roc 2008-06 005e5fe0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5fe0
//
// 005e5fe0  8b442404             mov eax, dword ptr [esp + 4]
// 005e5fe4  894118               mov dword ptr [ecx + 0x18], eax
// 005e5fe7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005e5fe0 {
    char pad0[24];
    int m_x;
    void f(int a1);
};
void S_func_005e5fe0::f(int a1)
{
    m_x = (int)a1;
}
