// roc 2010-06 004535a0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004535a0
//
// 004535a0  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 004535a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004535a0 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_004535a0::f()
{
    return m_x;
}
