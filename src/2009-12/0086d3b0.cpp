// roc 2009-12 0086d3b0  unit: CXTCaption  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d3b0
//
// 0086d3b0  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0086d3b3  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0086d3b9  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00792390@ns_ROCX000035@@QAEHXZ)

namespace ns_ROCX000035 {
struct I_func_00792390 {
    char pad[648];
    int m_x;
};
struct S_func_00792390 {
    char pad[60];
    I_func_00792390* m_p;
    int f();
};
int S_func_00792390::f()
{
    return m_p->m_x;
}
}
