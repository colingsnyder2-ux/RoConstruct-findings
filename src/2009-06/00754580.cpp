// roc 2009-06 00754580  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00754580
//
// 00754580  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 00754586  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00754580 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_00754580::f()
{
    return m_x;
}
