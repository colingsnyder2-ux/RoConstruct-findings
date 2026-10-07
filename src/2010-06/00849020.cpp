// roc 2010-06 00849020  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849020
//
// 00849020  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 00849026  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00849020 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_00849020::f()
{
    return m_x;
}
