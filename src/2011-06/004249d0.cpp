// roc 2011-06 004249d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004249d0
//
// 004249d0  8b4150               mov eax, dword ptr [ecx + 0x50]
// 004249d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004249d0 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_004249d0::f()
{
    return m_x;
}
