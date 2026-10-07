// roc 2008-06 004208b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004208b0
//
// 004208b0  8b4150               mov eax, dword ptr [ecx + 0x50]
// 004208b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004208b0 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_004208b0::f()
{
    return m_x;
}
