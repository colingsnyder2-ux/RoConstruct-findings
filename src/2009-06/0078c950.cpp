// roc 2009-06 0078c950  unit: CXTPPropertyGridView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078c950
//
// 0078c950  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 0078c956  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 0078c95c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0078c950 {
    char pad[324];
    int m_x;
};
struct S_func_0078c950 {
    char pad[176];
    I_func_0078c950* m_p;
    int f();
};
int S_func_0078c950::f()
{
    return m_p->m_x;
}
