// roc 2009-06 00792390  unit: CXTCaption  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00792390
//
// 00792390  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00792393  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 00792399  c3                   ret 
// auto-matched from its assembly shape

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
