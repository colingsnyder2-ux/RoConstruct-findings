// roc 2009-12 008bc140  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc140
//
// 008bc140  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008bc146  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 008bc14c  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007e1630@ns_ROCX000007@@QAEHXZ)

namespace ns_ROCX000007 {
struct I_func_007e1630 {
    char pad[288];
    int m_x;
};
struct S_func_007e1630 {
    char pad[284];
    I_func_007e1630* m_p;
    int f();
};
int S_func_007e1630::f()
{
    return m_p->m_x;
}
}
