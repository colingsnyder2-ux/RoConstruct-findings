// roc 2008-06 005d7550  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7550
//
// 005d7550  8d81dc010000         lea eax, [ecx + 0x1dc]
// 005d7556  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d7550 {
    char pad0[476];
    int m_x;
    int* f();
};
int* S_func_005d7550::f()
{
    return &m_x;
}
