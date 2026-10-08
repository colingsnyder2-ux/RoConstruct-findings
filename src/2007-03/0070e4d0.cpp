// roc 2007-03 0070e4d0  unit: seg_00700000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e4d0
//
// 0070e4d0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0070e4d3  8b4034               mov eax, dword ptr [eax + 0x34]
// 0070e4d6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0070e4d0 {
    char pad[52];
    int m_x;
};
struct S_func_0070e4d0 {
    char pad[48];
    I_func_0070e4d0* m_p;
    int f();
};
int S_func_0070e4d0::f()
{
    return m_p->m_x;
}
