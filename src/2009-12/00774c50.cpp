// roc 2009-12 00774c50  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774c50
//
// 00774c50  8d4120               lea eax, [ecx + 0x20]
// 00774c53  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006a79a0@ns_ROCX000034@@QAEPAHXZ)

namespace ns_ROCX000034 {
struct S_func_006a79a0 {
    char pad0[32];
    int m_x;
    int* f();
};
int* S_func_006a79a0::f()
{
    return &m_x;
}
}
