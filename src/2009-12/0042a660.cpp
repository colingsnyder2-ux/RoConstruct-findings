// roc 2009-12 0042a660  unit: CSelectionPropGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042a660
//
// 0042a660  8b8170020000         mov eax, dword ptr [ecx + 0x270]
// 0042a666  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0042ab90@ns_ROCX000052@@QAEHXZ)

namespace ns_ROCX000052 {
struct S_func_0042ab90 {
    char pad0[624];
    int m_x;
    int f();
};
int S_func_0042ab90::f()
{
    return m_x;
}
}
