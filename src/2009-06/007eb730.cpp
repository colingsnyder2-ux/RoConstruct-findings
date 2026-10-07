// roc 2009-06 007eb730  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb730
//
// 007eb730  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007eb733  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007eb730 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_007eb730::f()
{
    return m_x;
}
