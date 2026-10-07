// roc 2011-06 00816800  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816800
//
// 00816800  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 00816806  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00816800 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_00816800::f()
{
    return m_x;
}
