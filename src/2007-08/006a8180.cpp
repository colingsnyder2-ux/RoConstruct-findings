// roc 2007-08 006a8180  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8180
//
// 006a8180  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 006a8186  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a8180 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_006a8180::f()
{
    return m_x;
}
