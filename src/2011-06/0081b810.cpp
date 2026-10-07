// roc 2011-06 0081b810  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081b810
//
// 0081b810  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 0081b816  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0081b819  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0081b810 {
    char pad[44];
    int m_x;
};
struct S_func_0081b810 {
    char pad[252];
    I_func_0081b810* m_p;
    int f();
};
int S_func_0081b810::f()
{
    return m_p->m_x;
}
