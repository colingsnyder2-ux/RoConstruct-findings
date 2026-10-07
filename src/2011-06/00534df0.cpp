// roc 2011-06 00534df0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534df0
//
// 00534df0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00534df3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00534df0 {
    char pad0[32];
    int m_x;
    int f();
};
int S_func_00534df0::f()
{
    return m_x;
}
