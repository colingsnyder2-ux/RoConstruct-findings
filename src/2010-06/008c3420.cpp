// roc 2010-06 008c3420  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c3420
//
// 008c3420  8b4104               mov eax, dword ptr [ecx + 4]
// 008c3423  8b80a00a0000         mov eax, dword ptr [eax + 0xaa0]
// 008c3429  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008c3420 {
    char pad[2720];
    int m_x;
};
struct S_func_008c3420 {
    char pad[4];
    I_func_008c3420* m_p;
    int f();
};
int S_func_008c3420::f()
{
    return m_p->m_x;
}
