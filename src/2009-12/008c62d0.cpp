// roc 2009-12 008c62d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c62d0
//
// 008c62d0  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008c62d3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0041a850@ns_ROCX000035@@QAEHXZ)

namespace ns_ROCX000035 {
struct S_func_0041a850 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_0041a850::f()
{
    return m_x;
}
}
