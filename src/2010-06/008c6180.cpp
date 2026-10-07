// roc 2010-06 008c6180  unit: RBX::AdornRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c6180
//
// 008c6180  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008c6183  8b8050080000         mov eax, dword ptr [eax + 0x850]
// 008c6189  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008c6180 {
    char pad[2128];
    int m_x;
};
struct S_func_008c6180 {
    char pad[12];
    I_func_008c6180* m_p;
    int f();
};
int S_func_008c6180::f()
{
    return m_p->m_x;
}
