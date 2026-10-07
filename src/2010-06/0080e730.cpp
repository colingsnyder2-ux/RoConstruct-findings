// roc 2010-06 0080e730  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e730
//
// 0080e730  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0080e733  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0080e730 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_0080e730::f()
{
    return m_x;
}
