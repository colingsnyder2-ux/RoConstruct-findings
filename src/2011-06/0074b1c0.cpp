// roc 2011-06 0074b1c0  unit: RBX::Joint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074b1c0
//
// 0074b1c0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0074b1c3  8b4034               mov eax, dword ptr [eax + 0x34]
// 0074b1c6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0074b1c0 {
    char pad[52];
    int m_x;
};
struct S_func_0074b1c0 {
    char pad[24];
    I_func_0074b1c0* m_p;
    int f();
};
int S_func_0074b1c0::f()
{
    return m_p->m_x;
}
