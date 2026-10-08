// roc 2007-08 006daa20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006daa20
//
// 006daa20  8b442404             mov eax, dword ptr [esp + 4]
// 006daa24  894118               mov dword ptr [ecx + 0x18], eax
// 006daa27  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006daa20 {
    char pad0[24];
    int m_x;
    void f(int a1);
};
void S_func_006daa20::f(int a1)
{
    m_x = (int)a1;
}
