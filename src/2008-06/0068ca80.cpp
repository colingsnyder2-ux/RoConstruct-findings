// roc 2008-06 0068ca80  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068ca80
//
// 0068ca80  8d81b88a0000         lea eax, [ecx + 0x8ab8]
// 0068ca86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068ca80 {
    char pad0[35512];
    int m_x;
    int* f();
};
int* S_func_0068ca80::f()
{
    return &m_x;
}
