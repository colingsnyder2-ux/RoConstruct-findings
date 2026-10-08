// roc 2007-03 006bc680  unit: seg_006b0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc680
//
// 006bc680  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006bc683  8b80f8010000         mov eax, dword ptr [eax + 0x1f8]
// 006bc689  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006bc680 {
    char pad[504];
    int m_x;
};
struct S_func_006bc680 {
    char pad[60];
    I_func_006bc680* m_p;
    int f();
};
int S_func_006bc680::f()
{
    return m_p->m_x;
}
