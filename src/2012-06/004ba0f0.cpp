// roc 2012-06 004ba0f0  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ba0f0
//
// 004ba0f0  8b4140               mov eax, dword ptr [ecx + 0x40]
// 004ba0f3  8b8078080000         mov eax, dword ptr [eax + 0x878]
// 004ba0f9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_004ba0f0 {
    char pad[2168];
    int m_x;
};
struct S_func_004ba0f0 {
    char pad[64];
    I_func_004ba0f0* m_p;
    int f();
};
int S_func_004ba0f0::f()
{
    return m_p->m_x;
}
