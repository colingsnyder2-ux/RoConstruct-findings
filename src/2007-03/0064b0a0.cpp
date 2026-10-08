// roc 2007-03 0064b0a0  unit: seg_00640000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064b0a0
//
// 0064b0a0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0064b0a3  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 0064b0a9  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0064b0a0 {
    char pad[176];
    int m_x;
};
struct S_func_0064b0a0 {
    char pad[36];
    I_func_0064b0a0* m_p;
    int f();
};
int S_func_0064b0a0::f()
{
    return m_p->m_x;
}
