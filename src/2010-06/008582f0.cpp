// roc 2010-06 008582f0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008582f0
//
// 008582f0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 008582f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008582f0 {
    char pad0[100];
    int m_x;
    int f();
};
int S_func_008582f0::f()
{
    return m_x;
}
