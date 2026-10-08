// roc 2007-08 0042f5b0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f5b0
//
// 0042f5b0  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 0042f5b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042f5b0 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_0042f5b0::f()
{
    return m_x;
}
