// roc 2010-06 00870280  unit: ATL::CRegObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00870280
//
// 00870280  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00870286  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0087028c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00870280 {
    char pad[288];
    int m_x;
};
struct S_func_00870280 {
    char pad[284];
    I_func_00870280* m_p;
    int f();
};
int S_func_00870280::f()
{
    return m_p->m_x;
}
