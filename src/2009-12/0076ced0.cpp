// roc 2009-12 0076ced0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076ced0
//
// 0076ced0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0076ced6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0071b410@ns_ROCX00001d@@QAEHXZ)

namespace ns_ROCX00001d {
struct S_func_0071b410 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_0071b410::f()
{
    return m_x;
}
}
