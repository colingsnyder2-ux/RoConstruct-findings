// roc 2011-06 00844ea0  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844ea0
//
// 00844ea0  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 00844ea6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00844ea0 {
    char pad0[1128];
    int m_x;
    int f();
};
int S_func_00844ea0::f()
{
    return m_x;
}
