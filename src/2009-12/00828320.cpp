// roc 2009-12 00828320  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828320
//
// 00828320  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00828323  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00828329  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0074d560@ns_ROCX00001e@@QAEHXZ)

namespace ns_ROCX00001e {
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
}
