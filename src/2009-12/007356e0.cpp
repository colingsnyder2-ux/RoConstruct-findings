// roc 2009-12 007356e0  unit: RBX::VObjectValue::?$EventDesc  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007356e0
//
// 007356e0  c6816401000000       mov byte ptr [ecx + 0x164], 0
// 007356e7  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006b48f0@ns_ROCX000047@@QAEXXZ)

namespace ns_ROCX000047 {
struct S_func_006b48f0 {
    char pad0[356];
    char m_x;
    void f();
};
void S_func_006b48f0::f()
{
    m_x = (char)0;
}
}
