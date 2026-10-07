// roc 2008-06 005d7510  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7510
//
// 005d7510  8d81c4010000         lea eax, [ecx + 0x1c4]
// 005d7516  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d7510 {
    char pad0[452];
    int m_x;
    int* f();
};
int* S_func_005d7510::f()
{
    return &m_x;
}
