// roc 2009-12 005df750  unit: RBX::RbxG3D::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005df750
//
// 005df750  8a4104               mov al, byte ptr [ecx + 4]
// 005df753  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00847fa0@ns_ROCX0000cb@@QAEDXZ)

namespace ns_ROCX0000cb {
struct S_func_00847fa0 {
    char pad0[4];
    char m_x;
    char f();
};
char S_func_00847fa0::f()
{
    return m_x;
}
}
