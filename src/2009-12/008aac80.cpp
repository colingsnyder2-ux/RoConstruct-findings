// roc 2009-12 008aac80  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aac80
//
// 008aac80  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008aac83  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0043fb80@ns_ROCX0000a1@@QAEHXZ)

namespace ns_ROCX0000a1 {
struct S_func_0043fb80 {
    char pad0[24];
    int m_x;
    int f();
};
int S_func_0043fb80::f()
{
    return m_x;
}
}
