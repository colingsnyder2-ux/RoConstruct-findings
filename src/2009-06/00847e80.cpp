// roc 2009-06 00847e80  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847e80
//
// 00847e80  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00847e83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00847e80 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_00847e80::f()
{
    return m_x;
}
