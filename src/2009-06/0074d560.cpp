// roc 2009-06 0074d560  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d560
//
// 0074d560  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0074d563  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0074d569  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0074d560 {
    char pad[256];
    int m_x;
};
struct S_func_0074d560 {
    char pad[36];
    I_func_0074d560* m_p;
    int f();
};
int S_func_0074d560::f()
{
    return m_p->m_x;
}
