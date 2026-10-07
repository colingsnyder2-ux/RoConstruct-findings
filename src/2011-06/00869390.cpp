// roc 2011-06 00869390  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869390
//
// 00869390  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00869393  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00869390 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_00869390::f()
{
    return m_x;
}
