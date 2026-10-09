// roc 2009-12 00805250  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805250
//
// 00805250  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00805256  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00805259  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0072e110@ns_ROCX000053@@QAEHXZ)

namespace ns_ROCX000053 {
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
}
