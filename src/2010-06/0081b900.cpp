// roc 2010-06 0081b900  unit: CXTPPropertyGridView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081b900
//
// 0081b900  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 0081b906  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 0081b90c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0081b900 {
    char pad[324];
    int m_x;
};
struct S_func_0081b900 {
    char pad[176];
    I_func_0081b900* m_p;
    int f();
};
int S_func_0081b900::f()
{
    return m_p->m_x;
}
