// roc 2007-08 00689740  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689740
//
// 00689740  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00689746  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00689740 {
    char pad0[140];
    int m_x;
    int f();
};
int S_func_00689740::f()
{
    return m_x;
}
