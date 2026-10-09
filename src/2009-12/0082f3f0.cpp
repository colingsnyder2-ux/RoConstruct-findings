// roc 2009-12 0082f3f0  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082f3f0
//
// 0082f3f0  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 0082f3f6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00754590@ns_ROCX000036@@QAEHXZ)

namespace ns_ROCX000036 {
struct S_func_00754590 {
    char pad0[1128];
    int m_x;
    int f();
};
int S_func_00754590::f()
{
    return m_x;
}
}
