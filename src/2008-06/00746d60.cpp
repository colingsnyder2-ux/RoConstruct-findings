// roc 2008-06 00746d60  unit: CXTPReportPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746d60
//
// 00746d60  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 00746d66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00746d60 {
    char pad0[612];
    int m_x;
    int f();
};
int S_func_00746d60::f()
{
    return m_x;
}
