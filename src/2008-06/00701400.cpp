// roc 2008-06 00701400  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701400
//
// 00701400  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00701406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00701400 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_00701400::f()
{
    return m_x;
}
