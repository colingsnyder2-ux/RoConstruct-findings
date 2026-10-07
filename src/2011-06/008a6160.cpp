// roc 2011-06 008a6160  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6160
//
// 008a6160  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 008a6166  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a6160 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_008a6160::f()
{
    return m_x;
}
