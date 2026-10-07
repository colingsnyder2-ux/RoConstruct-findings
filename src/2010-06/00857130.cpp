// roc 2010-06 00857130  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857130
//
// 00857130  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00857133  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00857130 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_00857130::f()
{
    return m_x;
}
