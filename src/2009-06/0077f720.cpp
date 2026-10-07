// roc 2009-06 0077f720  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f720
//
// 0077f720  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0077f723  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0077f720 {
    char pad0[76];
    int m_x;
    int f();
};
int S_func_0077f720::f()
{
    return m_x;
}
