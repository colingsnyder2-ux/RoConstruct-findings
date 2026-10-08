// roc 2007-03 0062f2a0  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f2a0
//
// 0062f2a0  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0062f2a3  8b4034               mov eax, dword ptr [eax + 0x34]
// 0062f2a6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0062f2a0 {
    char pad[52];
    int m_x;
};
struct S_func_0062f2a0 {
    char pad[112];
    I_func_0062f2a0* m_p;
    int f();
};
int S_func_0062f2a0::f()
{
    return m_p->m_x;
}
