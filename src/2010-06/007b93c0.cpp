// roc 2010-06 007b93c0  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b93c0
//
// 007b93c0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 007b93c6  8b402c               mov eax, dword ptr [eax + 0x2c]
// 007b93c9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007b93c0 {
    char pad[44];
    int m_x;
};
struct S_func_007b93c0 {
    char pad[252];
    I_func_007b93c0* m_p;
    int f();
};
int S_func_007b93c0::f()
{
    return m_p->m_x;
}
