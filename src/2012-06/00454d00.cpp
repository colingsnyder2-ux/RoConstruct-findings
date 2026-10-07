// roc 2012-06 00454d00  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00454d00
//
// 00454d00  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00454d06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00454d00 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_00454d00::f()
{
    return m_x;
}
