// roc 2011-06 0088f280  unit: CXTPRibbonTheme  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088f280
//
// 0088f280  8b81c8050000         mov eax, dword ptr [ecx + 0x5c8]
// 0088f286  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0088f280 {
    char pad0[1480];
    int m_x;
    int f();
};
int S_func_0088f280::f()
{
    return m_x;
}
