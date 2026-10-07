// roc 2011-06 008a8670  unit: CXTPRibbonBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a8670
//
// 008a8670  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 008a8676  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 008a867c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008a8670 {
    char pad[480];
    int m_x;
};
struct S_func_008a8670 {
    char pad[616];
    I_func_008a8670* m_p;
    int f();
};
int S_func_008a8670::f()
{
    return m_p->m_x;
}
