// roc 2011-06 005a6ff0  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a6ff0
//
// 005a6ff0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 005a6ff6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a6ff0 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_005a6ff0::f()
{
    return m_x;
}
