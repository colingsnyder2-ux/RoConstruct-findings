// roc 2008-06 006a6e80  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6e80
//
// 006a6e80  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 006a6e86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a6e80 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_006a6e80::f()
{
    return m_x;
}
