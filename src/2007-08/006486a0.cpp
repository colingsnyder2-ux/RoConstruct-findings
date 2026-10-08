// roc 2007-08 006486a0  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006486a0
//
// 006486a0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 006486a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006486a0 {
    char pad0[176];
    int m_x;
    int f();
};
int S_func_006486a0::f()
{
    return m_x;
}
