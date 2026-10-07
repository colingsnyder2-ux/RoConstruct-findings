// roc 2010-06 008321f0  unit: CXTPRibbonTheme  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008321f0
//
// 008321f0  8b81c8050000         mov eax, dword ptr [ecx + 0x5c8]
// 008321f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008321f0 {
    char pad0[1480];
    int m_x;
    int f();
};
int S_func_008321f0::f()
{
    return m_x;
}
