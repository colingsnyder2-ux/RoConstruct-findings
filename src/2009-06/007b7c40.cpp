// roc 2009-06 007b7c40  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7c40
//
// 007b7c40  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 007b7c46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b7c40 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_007b7c40::f()
{
    return m_x;
}
