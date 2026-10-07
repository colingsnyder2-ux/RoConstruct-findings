// roc 2009-06 00427810  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427810
//
// 00427810  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00427816  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00427810 {
    char pad0[376];
    int m_x;
    int f();
};
int S_func_00427810::f()
{
    return m_x;
}
