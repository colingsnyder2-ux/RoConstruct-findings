// roc 2011-06 0081a920  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a920
//
// 0081a920  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0081a926  8b4014               mov eax, dword ptr [eax + 0x14]
// 0081a929  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0081a920 {
    char pad[20];
    int m_x;
};
struct S_func_0081a920 {
    char pad[376];
    I_func_0081a920* m_p;
    int f();
};
int S_func_0081a920::f()
{
    return m_p->m_x;
}
