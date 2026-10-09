// roc 2009-12 005df760  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df760
//
// 005df760  8d4118               lea eax, [ecx + 0x18]
// 005df763  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006a7990@ns_ROCX000033@@QAEPAHXZ)

namespace ns_ROCX000033 {
struct S_func_006a7990 {
    char pad0[24];
    int m_x;
    int* f();
};
int* S_func_006a7990::f()
{
    return &m_x;
}
}
