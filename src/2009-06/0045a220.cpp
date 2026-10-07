// roc 2009-06 0045a220  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a220
//
// 0045a220  8d8190000000         lea eax, [ecx + 0x90]
// 0045a226  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045a220 {
    char pad0[144];
    int m_x;
    int* f();
};
int* S_func_0045a220::f()
{
    return &m_x;
}
