// roc 2009-12 006752c0  unit: RBX::TopMenuBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006752c0
//
// 006752c0  8a81bc000000         mov al, byte ptr [ecx + 0xbc]
// 006752c6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005de140@ns_ROCX000048@@QAEDXZ)

namespace ns_ROCX000048 {
struct S_func_005de140 {
    char pad0[188];
    char m_x;
    char f();
};
char S_func_005de140::f()
{
    return m_x;
}
}
