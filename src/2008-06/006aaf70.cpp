// roc 2008-06 006aaf70  unit: CXTPControlAction  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aaf70
//
// 006aaf70  8b4170               mov eax, dword ptr [ecx + 0x70]
// 006aaf73  8b4034               mov eax, dword ptr [eax + 0x34]
// 006aaf76  c3                   ret 
// auto-matched from its assembly shape

struct I_func_006aaf70 {
    char pad[52];
    int m_x;
};
struct S_func_006aaf70 {
    char pad[112];
    I_func_006aaf70* m_p;
    int f();
};
int S_func_006aaf70::f()
{
    return m_p->m_x;
}
