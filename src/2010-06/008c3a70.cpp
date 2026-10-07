// roc 2010-06 008c3a70  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c3a70
//
// 008c3a70  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008c3a73  8b8054080000         mov eax, dword ptr [eax + 0x854]
// 008c3a79  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008c3a70 {
    char pad[2132];
    int m_x;
};
struct S_func_008c3a70 {
    char pad[40];
    I_func_008c3a70* m_p;
    int f();
};
int S_func_008c3a70::f()
{
    return m_p->m_x;
}
