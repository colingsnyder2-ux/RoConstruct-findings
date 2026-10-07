// roc 2008-06 0068c900  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c900
//
// 0068c900  8d811c8a0000         lea eax, [ecx + 0x8a1c]
// 0068c906  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c900 {
    char pad0[35356];
    int m_x;
    int* f();
};
int* S_func_0068c900::f()
{
    return &m_x;
}
