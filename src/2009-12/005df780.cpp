// roc 2009-12 005df780  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df780
//
// 005df780  d94128               fld dword ptr [ecx + 0x28]
// 005df783  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00847ff0@ns_ROCX0000d0@@QAEMXZ)

namespace ns_ROCX0000d0 {
struct S_func_00847ff0 {
    char pad[40];
    float m_x;
    float f();
};
float S_func_00847ff0::f()
{
    return m_x;
}
}
