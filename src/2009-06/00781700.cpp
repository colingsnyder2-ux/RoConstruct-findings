// roc 2009-06 00781700  unit: CXTPStatusBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781700
//
// 00781700  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00781706  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00781700 {
    char pad0[228];
    int m_x;
    int f();
};
int S_func_00781700::f()
{
    return m_x;
}
