// roc 2009-12 005750c0  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005750c0
//
// 005750c0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005750c3  8b80900a0000         mov eax, dword ptr [eax + 0xa90]
// 005750c9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005750c0 {
    char pad[2704];
    int m_x;
};
struct S_func_005750c0 {
    char pad[16];
    I_func_005750c0* m_p;
    int f();
};
int S_func_005750c0::f()
{
    return m_p->m_x;
}
