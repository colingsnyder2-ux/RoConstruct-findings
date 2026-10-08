// roc 2008-06 007222e0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007222e0
//
// 007222e0  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 007222e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007222e0 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_007222e0::f()
{
    return m_x;
}
