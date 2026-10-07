// roc 2008-06 006b4ca0  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4ca0
//
// 006b4ca0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 006b4ca6  8b4014               mov eax, dword ptr [eax + 0x14]
// 006b4ca9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006b4ca0 {
    char pad[20];
    int m_x;
};
struct S_func_006b4ca0 {
    char pad[376];
    I_func_006b4ca0* m_p;
    int f();
};
int S_func_006b4ca0::f()
{
    return m_p->m_x;
}
