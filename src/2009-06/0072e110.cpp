// roc 2009-06 0072e110  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072e110
//
// 0072e110  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 0072e116  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0072e119  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0072e110 {
    char pad[44];
    int m_x;
};
struct S_func_0072e110 {
    char pad[252];
    I_func_0072e110* m_p;
    int f();
};
int S_func_0072e110::f()
{
    return m_p->m_x;
}
