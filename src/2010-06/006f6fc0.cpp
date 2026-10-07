// roc 2010-06 006f6fc0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f6fc0
//
// 006f6fc0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 006f6fc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f6fc0 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_006f6fc0::f()
{
    return m_x;
}
