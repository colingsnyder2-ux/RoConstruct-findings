// roc 2008-06 006d4df0  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4df0
//
// 006d4df0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006d4df3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006d4df9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006d4df0 {
    char pad[256];
    int m_x;
};
struct S_func_006d4df0 {
    char pad[36];
    I_func_006d4df0* m_p;
    int f();
};
int S_func_006d4df0::f()
{
    return m_p->m_x;
}
