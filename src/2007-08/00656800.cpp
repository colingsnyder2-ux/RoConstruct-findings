// roc 2007-08 00656800  unit: CXTPReportRow_Batch  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656800
//
// 00656800  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00656803  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00656800 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_00656800::f()
{
    return m_x;
}
