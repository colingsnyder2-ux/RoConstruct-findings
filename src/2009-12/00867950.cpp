// roc 2009-12 00867950  unit: CXTPPropertyGridView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867950
//
// 00867950  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00867956  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 0086795c  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0078c950@ns_ROCX000013@@QAEHXZ)

namespace ns_ROCX000013 {
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
}
