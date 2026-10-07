// roc 2008-06 007356e0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007356e0
//
// 007356e0  8b81c8050000         mov eax, dword ptr [ecx + 0x5c8]
// 007356e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007356e0 {
    char pad0[1480];
    int m_x;
    int f();
};
int S_func_007356e0::f()
{
    return m_x;
}
