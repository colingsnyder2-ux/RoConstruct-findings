// roc 2008-06 00722250  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722250
//
// 00722250  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 00722256  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00722250 {
    char pad0[604];
    int m_x;
    int f();
};
int S_func_00722250::f()
{
    return m_x;
}
