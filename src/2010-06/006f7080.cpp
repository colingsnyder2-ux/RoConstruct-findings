// roc 2010-06 006f7080  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7080
//
// 006f7080  8a81bd020000         mov al, byte ptr [ecx + 0x2bd]
// 006f7086  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f7080 {
    char pad0[701];
    char m_x;
    char f();
};
char S_func_006f7080::f()
{
    return m_x;
}
