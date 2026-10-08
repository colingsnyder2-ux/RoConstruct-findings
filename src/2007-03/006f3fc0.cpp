// roc 2007-03 006f3fc0  unit: seg_006f0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f3fc0
//
// 006f3fc0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006f3fc3  8b4038               mov eax, dword ptr [eax + 0x38]
// 006f3fc6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006f3fc0 {
    char pad[56];
    int m_x;
};
struct S_func_006f3fc0 {
    char pad[88];
    I_func_006f3fc0* m_p;
    int f();
};
int S_func_006f3fc0::f()
{
    return m_p->m_x;
}
