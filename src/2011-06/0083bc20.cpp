// roc 2011-06 0083bc20  unit: CXTPReportControl  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083bc20
//
// 0083bc20  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0083bc23  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0083bc29  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0083bc20 {
    char pad[256];
    int m_x;
};
struct S_func_0083bc20 {
    char pad[36];
    I_func_0083bc20* m_p;
    int f();
};
int S_func_0083bc20::f()
{
    return m_p->m_x;
}
