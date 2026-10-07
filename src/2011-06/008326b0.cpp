// roc 2011-06 008326b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008326b0
//
// 008326b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 008326b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008326b0 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_008326b0::f()
{
    return m_x;
}
