// roc 2009-12 00767520  unit: RBX::VHandles::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00767520
//
// 00767520  c681c800000001       mov byte ptr [ecx + 0xc8], 1
// 00767527  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006ee950@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
struct S_func_006ee950 {
    char pad0[200];
    char m_x;
    void f();
};
void S_func_006ee950::f()
{
    m_x = (char)1;
}
}
