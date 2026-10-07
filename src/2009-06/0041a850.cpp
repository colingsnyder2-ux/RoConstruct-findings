// roc 2009-06 0041a850  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a850
//
// 0041a850  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0041a853  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041a850 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_0041a850::f()
{
    return m_x;
}
