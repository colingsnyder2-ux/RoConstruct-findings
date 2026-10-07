// roc 2011-06 008a60d0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a60d0
//
// 008a60d0  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 008a60d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a60d0 {
    char pad0[604];
    int m_x;
    int f();
};
int S_func_008a60d0::f()
{
    return m_x;
}
