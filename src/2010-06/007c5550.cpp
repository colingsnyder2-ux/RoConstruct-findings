// roc 2010-06 007c5550  unit: CXTPToolBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5550
//
// 007c5550  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 007c5556  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c5550 {
    char pad0[220];
    int m_x;
    int f();
};
int S_func_007c5550::f()
{
    return m_x;
}
