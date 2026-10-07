// roc 2008-06 0068e910  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e910
//
// 0068e910  8d8174010000         lea eax, [ecx + 0x174]
// 0068e916  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e910 {
    char pad0[372];
    int m_x;
    int* f();
};
int* S_func_0068e910::f()
{
    return &m_x;
}
