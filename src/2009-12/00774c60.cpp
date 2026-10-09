// roc 2009-12 00774c60  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774c60
//
// 00774c60  8d4104               lea eax, [ecx + 4]
// 00774c63  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006a79b0@ns_ROCX000035@@QAEPAHXZ)

namespace ns_ROCX000035 {
struct S_func_006a79b0 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_006a79b0::f()
{
    return &m_x;
}
}
