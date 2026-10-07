// roc 2011-06 00536680  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536680
//
// 00536680  8d4160               lea eax, [ecx + 0x60]
// 00536683  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00536680 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_00536680::f()
{
    return &m_x;
}
