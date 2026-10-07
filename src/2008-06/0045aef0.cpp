// roc 2008-06 0045aef0  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045aef0
//
// 0045aef0  8d81a4010000         lea eax, [ecx + 0x1a4]
// 0045aef6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045aef0 {
    char pad0[420];
    int m_x;
    int* f();
};
int* S_func_0045aef0::f()
{
    return &m_x;
}
