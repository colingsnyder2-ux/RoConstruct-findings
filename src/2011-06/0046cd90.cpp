// roc 2011-06 0046cd90  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046cd90
//
// 0046cd90  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 0046cd96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0046cd90 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_0046cd90::f()
{
    return m_x;
}
