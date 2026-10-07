// roc 2009-06 007b7f90  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7f90
//
// 007b7f90  8b818c020000         mov eax, dword ptr [ecx + 0x28c]
// 007b7f96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b7f90 {
    char pad0[652];
    int m_x;
    int f();
};
int S_func_007b7f90::f()
{
    return m_x;
}
