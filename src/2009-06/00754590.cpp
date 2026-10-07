// roc 2009-06 00754590  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00754590
//
// 00754590  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 00754596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00754590 {
    char pad0[1128];
    int m_x;
    int f();
};
int S_func_00754590::f()
{
    return m_x;
}
