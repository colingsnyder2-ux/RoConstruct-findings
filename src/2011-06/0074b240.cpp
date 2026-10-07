// roc 2011-06 0074b240  unit: RBX::Joint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074b240
//
// 0074b240  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0074b243  8b4024               mov eax, dword ptr [eax + 0x24]
// 0074b246  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0074b240 {
    char pad[36];
    int m_x;
};
struct S_func_0074b240 {
    char pad[24];
    I_func_0074b240* m_p;
    int f();
};
int S_func_0074b240::f()
{
    return m_p->m_x;
}
