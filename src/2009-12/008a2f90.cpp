// roc 2009-12 008a2f90  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2f90
//
// 008a2f90  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008a2f93  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0079c3b0@ns_ROCX000053@@QAEHXZ)

namespace ns_ROCX000053 {
struct S_func_0079c3b0 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_0079c3b0::f()
{
    return m_x;
}
}
