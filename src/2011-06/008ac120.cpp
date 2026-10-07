// roc 2011-06 008ac120  unit: CXTPReportPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ac120
//
// 008ac120  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 008ac126  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008ac120 {
    char pad0[612];
    int m_x;
    int f();
};
int S_func_008ac120::f()
{
    return m_x;
}
