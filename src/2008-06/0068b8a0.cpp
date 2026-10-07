// roc 2008-06 0068b8a0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b8a0
//
// 0068b8a0  8d811c420000         lea eax, [ecx + 0x421c]
// 0068b8a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068b8a0 {
    char pad0[16924];
    int m_x;
    int* f();
};
int* S_func_0068b8a0::f()
{
    return &m_x;
}
