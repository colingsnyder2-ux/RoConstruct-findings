// roc 2010-06 007a9db0  unit: CXTPControlAction  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9db0
//
// 007a9db0  8b4170               mov eax, dword ptr [ecx + 0x70]
// 007a9db3  8b4034               mov eax, dword ptr [eax + 0x34]
// 007a9db6  c3                   ret 
// auto-matched from its assembly shape

struct I_func_007a9db0 {
    char pad[52];
    int m_x;
};
struct S_func_007a9db0 {
    char pad[112];
    I_func_007a9db0* m_p;
    int f();
};
int S_func_007a9db0::f()
{
    return m_p->m_x;
}
