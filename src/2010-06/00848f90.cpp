// roc 2010-06 00848f90  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848f90
//
// 00848f90  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 00848f96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00848f90 {
    char pad0[604];
    int m_x;
    int f();
};
int S_func_00848f90::f()
{
    return m_x;
}
