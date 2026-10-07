// roc 2009-06 0045a1e0  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a1e0
//
// 0045a1e0  8d810c010000         lea eax, [ecx + 0x10c]
// 0045a1e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045a1e0 {
    char pad0[268];
    int m_x;
    int* f();
};
int* S_func_0045a1e0::f()
{
    return &m_x;
}
