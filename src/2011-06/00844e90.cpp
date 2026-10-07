// roc 2011-06 00844e90  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844e90
//
// 00844e90  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 00844e96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00844e90 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_00844e90::f()
{
    return m_x;
}
