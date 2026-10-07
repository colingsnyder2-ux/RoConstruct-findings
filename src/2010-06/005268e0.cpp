// roc 2010-06 005268e0  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005268e0
//
// 005268e0  8d8114010000         lea eax, [ecx + 0x114]
// 005268e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005268e0 {
    char pad0[276];
    int m_x;
    int* f();
};
int* S_func_005268e0::f()
{
    return &m_x;
}
