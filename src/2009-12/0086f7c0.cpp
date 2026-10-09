// roc 2009-12 0086f7c0  unit: CXTPDockingPaneAutoHidePanel  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f7c0
//
// 0086f7c0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0086f7c3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00809ae0@ns_ROCX000074@@QAEHXZ)

namespace ns_ROCX000074 {
struct S_func_00809ae0 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_00809ae0::f()
{
    return m_x;
}
}
