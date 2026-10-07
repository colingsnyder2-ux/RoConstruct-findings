// roc 2008-06 00714140  unit: CXTPPropertyGridView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714140
//
// 00714140  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00714146  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 0071414c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00714140 {
    char pad[324];
    int m_x;
};
struct S_func_00714140 {
    char pad[176];
    I_func_00714140* m_p;
    int f();
};
int S_func_00714140::f()
{
    return m_p->m_x;
}
