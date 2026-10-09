// roc 2009-12 00757740  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757740
//
// 00757740  8a8194010000         mov al, byte ptr [ecx + 0x194]
// 00757746  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006de300@ns_ROCX000078@@QAEDXZ)

namespace ns_ROCX000078 {
struct S_func_006de300 {
    char pad0[404];
    char m_x;
    char f();
};
char S_func_006de300::f()
{
    return m_x;
}
}
