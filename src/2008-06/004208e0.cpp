// roc 2008-06 004208e0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004208e0
//
// 004208e0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004208e3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004208e0 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_004208e0::f()
{
    return m_x;
}
