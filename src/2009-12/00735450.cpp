// roc 2009-12 00735450  unit: RBX::VObjectValue::?$EventDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00735450
//
// 00735450  c6818001000000       mov byte ptr [ecx + 0x180], 0
// 00735457  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_006b4630@ns_ROCX000046@@QAEXH@Z)

namespace ns_ROCX000046 {
struct S_func_006b4630 {
    char pad0[384];
    char m_x;
    void f(int a1);
};
void S_func_006b4630::f(int a1)
{
    m_x = (char)0;
}
}
