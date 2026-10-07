// roc 2010-06 007dc3a0  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dc3a0
//
// 007dc3a0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007dc3a3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007dc3a9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007dc3a0 {
    char pad[256];
    int m_x;
};
struct S_func_007dc3a0 {
    char pad[36];
    I_func_007dc3a0* m_p;
    int f();
};
int S_func_007dc3a0::f()
{
    return m_p->m_x;
}
