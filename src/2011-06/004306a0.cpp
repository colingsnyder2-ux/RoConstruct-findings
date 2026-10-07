// roc 2011-06 004306a0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004306a0
//
// 004306a0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 004306a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004306a0 {
    char pad0[376];
    int m_x;
    int f();
};
int S_func_004306a0::f()
{
    return m_x;
}
