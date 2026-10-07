// roc 2008-06 0044de00  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044de00
//
// 0044de00  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 0044de06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0044de00 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_0044de00::f()
{
    return m_x;
}
