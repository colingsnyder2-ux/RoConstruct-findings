// roc 2007-08 006ba7a0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba7a0
//
// 006ba7a0  8b81a8050000         mov eax, dword ptr [ecx + 0x5a8]
// 006ba7a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ba7a0 {
    char pad0[1448];
    int m_x;
    int f();
};
int S_func_006ba7a0::f()
{
    return m_x;
}
