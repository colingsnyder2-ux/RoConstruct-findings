// roc 2009-12 0076cf80  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076cf80
//
// 0076cf80  8a8195010000         mov al, byte ptr [ecx + 0x195]
// 0076cf86  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006f7070@ns_ROCX000016@@QAEDXZ)

namespace ns_ROCX000016 {
struct S_func_006f7070 {
    char pad0[405];
    char m_x;
    char f();
};
char S_func_006f7070::f()
{
    return m_x;
}
}
