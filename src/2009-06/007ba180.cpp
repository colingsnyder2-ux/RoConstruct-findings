// roc 2009-06 007ba180  unit: CXTPRibbonBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ba180
//
// 007ba180  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 007ba186  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 007ba18c  c3                   ret 
// auto-matched from its assembly shape

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
