// roc 2009-12 008973a0  unit: CXTPRibbonBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008973a0
//
// 008973a0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 008973a6  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 008973ac  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007ba180@ns_ROCX000090@@QAEHXZ)

namespace ns_ROCX000090 {
struct I_func_007ba180 {
    char pad[480];
    int m_x;
};
struct S_func_007ba180 {
    char pad[616];
    I_func_007ba180* m_p;
    int f();
};
int S_func_007ba180::f()
{
    return m_p->m_x;
}
}
