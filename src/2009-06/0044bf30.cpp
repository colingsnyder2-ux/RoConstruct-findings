// roc 2009-06 0044bf30  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044bf30
//
// 0044bf30  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 0044bf36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0044bf30 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_0044bf30::f()
{
    return m_x;
}
