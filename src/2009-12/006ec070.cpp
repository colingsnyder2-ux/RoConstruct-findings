// roc 2009-12 006ec070  unit: RBX::Geometry  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec070
//
// 006ec070  c7410403000000       mov dword ptr [ecx + 4], 3
// 006ec077  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0066f640@ns_ROCX0000e0@@QAEXXZ)

namespace ns_ROCX0000e0 {
struct S_func_0066f640 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_0066f640::f()
{
    m_x = (int)3;
}
}
