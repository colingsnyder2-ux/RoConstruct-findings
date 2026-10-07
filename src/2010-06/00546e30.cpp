// roc 2010-06 00546e30  unit: RBX::RbxG3D::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00546e30
//
// 00546e30  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00546e33  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00546e30 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_00546e30::f()
{
    return m_x;
}
