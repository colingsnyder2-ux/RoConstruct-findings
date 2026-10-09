// roc 2009-12 0041acd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041acd0
//
// 0041acd0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0041acd3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0041a890@ns_ROCX000037@@QAEHXZ)

namespace ns_ROCX000037 {
struct S_func_0041a890 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_0041a890::f()
{
    return m_x;
}
}
