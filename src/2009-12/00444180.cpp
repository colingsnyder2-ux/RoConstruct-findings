// roc 2009-12 00444180  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444180
//
// 00444180  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00444183  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00510f60@ns_ROCX000006@@QAEHXZ)

namespace ns_ROCX000006 {
struct S_func_00510f60 {
    char pad0[28];
    int m_x;
    int f();
};
int S_func_00510f60::f()
{
    return m_x;
}
}
