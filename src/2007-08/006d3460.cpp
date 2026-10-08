// roc 2007-08 006d3460  unit: CXTPReportRow_Batch  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3460
//
// 006d3460  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006d3463  8b8000020000         mov eax, dword ptr [eax + 0x200]
// 006d3469  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006d3460 {
    char pad[512];
    int m_x;
};
struct S_func_006d3460 {
    char pad[60];
    I_func_006d3460* m_p;
    int f();
};
int S_func_006d3460::f()
{
    return m_p->m_x;
}
