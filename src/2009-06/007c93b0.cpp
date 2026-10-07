// roc 2009-06 007c93b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c93b0
//
// 007c93b0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 007c93b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c93b0 {
    char pad0[100];
    int m_x;
    int f();
};
int S_func_007c93b0::f()
{
    return m_x;
}
