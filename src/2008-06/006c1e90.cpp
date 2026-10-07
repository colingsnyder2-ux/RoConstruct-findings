// roc 2008-06 006c1e90  unit: CXTPToolBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1e90
//
// 006c1e90  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 006c1e96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c1e90 {
    char pad0[220];
    int m_x;
    int f();
};
int S_func_006c1e90::f()
{
    return m_x;
}
