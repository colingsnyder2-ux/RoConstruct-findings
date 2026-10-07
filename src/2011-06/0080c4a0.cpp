// roc 2011-06 0080c4a0  unit: CXTPControlAction  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c4a0
//
// 0080c4a0  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0080c4a3  8b4034               mov eax, dword ptr [eax + 0x34]
// 0080c4a6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0080c4a0 {
    char pad[52];
    int m_x;
};
struct S_func_0080c4a0 {
    char pad[112];
    I_func_0080c4a0* m_p;
    int f();
};
int S_func_0080c4a0::f()
{
    return m_p->m_x;
}
