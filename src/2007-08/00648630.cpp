// roc 2007-08 00648630  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648630
//
// 00648630  8b4104               mov eax, dword ptr [ecx + 4]
// 00648633  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00648630 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_00648630::f()
{
    return m_x;
}
