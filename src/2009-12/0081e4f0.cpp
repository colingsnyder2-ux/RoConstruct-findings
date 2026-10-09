// roc 2009-12 0081e4f0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e4f0
//
// 0081e4f0  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0081e4f3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0077f720@ns_ROCX0000d6@@QAEHXZ)

namespace ns_ROCX0000d6 {
struct S_func_0077f720 {
    char pad0[76];
    int m_x;
    int f();
};
int S_func_0077f720::f()
{
    return m_x;
}
}
