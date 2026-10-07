// roc 2008-06 007247f0  unit: CXTPRibbonBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007247f0
//
// 007247f0  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 007247f6  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 007247fc  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007247f0 {
    char pad[480];
    int m_x;
};
struct S_func_007247f0 {
    char pad[616];
    I_func_007247f0* m_p;
    int f();
};
int S_func_007247f0::f()
{
    return m_p->m_x;
}
