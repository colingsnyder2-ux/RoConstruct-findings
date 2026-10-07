// roc 2011-06 008a68f0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a68f0
//
// 008a68f0  8b8148020000         mov eax, dword ptr [ecx + 0x248]
// 008a68f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a68f0 {
    char pad0[584];
    int m_x;
    int f();
};
int S_func_008a68f0::f()
{
    return m_x;
}
