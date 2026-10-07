// roc 2011-06 0074b230  unit: RBX::Joint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074b230
//
// 0074b230  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0074b233  8b4014               mov eax, dword ptr [eax + 0x14]
// 0074b236  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0074b230 {
    char pad[20];
    int m_x;
};
struct S_func_0074b230 {
    char pad[24];
    I_func_0074b230* m_p;
    int f();
};
int S_func_0074b230::f()
{
    return m_p->m_x;
}
