// roc 2011-06 00875e10  unit: CXTPPropertyGridView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875e10
//
// 00875e10  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00875e16  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 00875e1c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00875e10 {
    char pad[324];
    int m_x;
};
struct S_func_00875e10 {
    char pad[176];
    I_func_00875e10* m_p;
    int f();
};
int S_func_00875e10::f()
{
    return m_p->m_x;
}
