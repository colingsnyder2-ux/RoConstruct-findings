// roc 2009-12 0041acb0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041acb0
//
// 0041acb0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0041acb3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0041a880@ns_ROCX000036@@QAEHXZ)

namespace ns_ROCX000036 {
struct S_func_0041a880 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_0041a880::f()
{
    return m_x;
}
}
