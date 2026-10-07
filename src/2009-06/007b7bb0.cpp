// roc 2009-06 007b7bb0  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7bb0
//
// 007b7bb0  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 007b7bb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b7bb0 {
    char pad0[604];
    int m_x;
    int f();
};
int S_func_007b7bb0::f()
{
    return m_x;
}
