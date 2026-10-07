// roc 2008-06 0068c240  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c240
//
// 0068c240  8d8190010000         lea eax, [ecx + 0x190]
// 0068c246  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c240 {
    char pad0[400];
    int m_x;
    int* f();
};
int* S_func_0068c240::f()
{
    return &m_x;
}
