// roc 2010-06 005268f0  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005268f0
//
// 005268f0  8d81e4000000         lea eax, [ecx + 0xe4]
// 005268f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005268f0 {
    char pad0[228];
    int m_x;
    int* f();
};
int* S_func_005268f0::f()
{
    return &m_x;
}
