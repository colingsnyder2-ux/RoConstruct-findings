// roc 2008-06 0074f8f0  unit: CXTPReportHyperlinks  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f8f0
//
// 0074f8f0  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0074f8f3  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0074f8f9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0074f8f0 {
    char pad[648];
    int m_x;
};
struct S_func_0074f8f0 {
    char pad[60];
    I_func_0074f8f0* m_p;
    int f();
};
int S_func_0074f8f0::f()
{
    return m_p->m_x;
}
