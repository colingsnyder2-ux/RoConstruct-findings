// roc 2011-06 008a64b0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a64b0
//
// 008a64b0  8b818c020000         mov eax, dword ptr [ecx + 0x28c]
// 008a64b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a64b0 {
    char pad0[652];
    int m_x;
    int f();
};
int S_func_008a64b0::f()
{
    return m_x;
}
