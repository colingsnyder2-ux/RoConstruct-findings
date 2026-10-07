// roc 2010-06 007d2550  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2550
//
// 007d2550  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 007d2553  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007d2550 {
    char pad0[76];
    int m_x;
    int f();
};
int S_func_007d2550::f()
{
    return m_x;
}
