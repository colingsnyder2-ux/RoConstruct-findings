// roc 2008-06 0042ea80  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ea80
//
// 0042ea80  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0042ea86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042ea80 {
    char pad0[376];
    int m_x;
    int f();
};
int S_func_0042ea80::f()
{
    return m_x;
}
