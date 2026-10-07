// roc 2010-06 00526d70  unit: RBX::ViewG3D  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526d70
//
// 00526d70  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00526d73  8b80a00a0000         mov eax, dword ptr [eax + 0xaa0]
// 00526d79  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00526d70 {
    char pad[2720];
    int m_x;
};
struct S_func_00526d70 {
    char pad[48];
    I_func_00526d70* m_p;
    int f();
};
int S_func_00526d70::f()
{
    return m_p->m_x;
}
