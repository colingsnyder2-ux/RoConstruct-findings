// roc 2010-06 007e3590  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e3590
//
// 007e3590  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 007e3596  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007e3590 {
    char pad0[1128];
    int m_x;
    int f();
};
int S_func_007e3590::f()
{
    return m_x;
}
