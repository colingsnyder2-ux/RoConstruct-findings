// roc 2010-06 006f7070  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7070
//
// 006f7070  8a8195010000         mov al, byte ptr [ecx + 0x195]
// 006f7076  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f7070 {
    char pad0[405];
    char m_x;
    char f();
};
char S_func_006f7070::f()
{
    return m_x;
}
