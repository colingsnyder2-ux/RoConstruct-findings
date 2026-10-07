// roc 2008-06 0068e8e0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e8e0
//
// 0068e8e0  8d815c010000         lea eax, [ecx + 0x15c]
// 0068e8e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e8e0 {
    char pad0[348];
    int m_x;
    int* f();
};
int* S_func_0068e8e0::f()
{
    return &m_x;
}
