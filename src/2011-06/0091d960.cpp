// roc 2011-06 0091d960  unit: RBX::ViewRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0091d960
//
// 0091d960  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0091d963  8b8078080000         mov eax, dword ptr [eax + 0x878]
// 0091d969  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0091d960 {
    char pad[2168];
    int m_x;
};
struct S_func_0091d960 {
    char pad[64];
    I_func_0091d960* m_p;
    int f();
};
int S_func_0091d960::f()
{
    return m_p->m_x;
}
