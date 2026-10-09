// roc 2009-12 005df790  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df790
//
// 005df790  d9412c               fld dword ptr [ecx + 0x2c]
// 005df793  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006df420@ns_ROCX000000@@QAEMXZ)

namespace ns_ROCX000000 {
struct S_func_006df420 {
    char pad[44];
    float m_x;
    float f();
};
float S_func_006df420::f()
{
    return m_x;
}
}
