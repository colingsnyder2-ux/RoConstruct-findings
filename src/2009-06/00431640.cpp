// roc 2009-06 00431640  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431640
//
// 00431640  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00431646  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00431640 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_00431640::f()
{
    return m_x;
}
