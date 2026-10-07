// roc 2008-06 006b5ba0  unit: CXTPCommandBar  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5ba0
//
// 006b5ba0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 006b5ba6  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006b5ba9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006b5ba0 {
    char pad[44];
    int m_x;
};
struct S_func_006b5ba0 {
    char pad[252];
    I_func_006b5ba0* m_p;
    int f();
};
int S_func_006b5ba0::f()
{
    return m_p->m_x;
}
