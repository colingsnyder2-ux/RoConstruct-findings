// roc 2009-06 0041a890  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a890
//
// 0041a890  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0041a893  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041a890 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_0041a890::f()
{
    return m_x;
}
