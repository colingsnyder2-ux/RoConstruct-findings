// roc 2011-06 008270a0  unit: CXTPToolBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008270a0
//
// 008270a0  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 008270a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008270a0 {
    char pad0[220];
    int m_x;
    int f();
};
int S_func_008270a0::f()
{
    return m_x;
}
