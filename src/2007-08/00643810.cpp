// roc 2007-08 00643810  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643810
//
// 00643810  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00643816  8b4014               mov eax, dword ptr [eax + 0x14]
// 00643819  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00643810 {
    char pad[20];
    int m_x;
};
struct S_func_00643810 {
    char pad[376];
    I_func_00643810* m_p;
    int f();
};
int S_func_00643810::f()
{
    return m_p->m_x;
}
