// roc 2008-06 0068e920  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e920
//
// 0068e920  8a8190420000         mov al, byte ptr [ecx + 0x4290]
// 0068e926  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e920 {
    char pad0[17040];
    char m_x;
    char f();
};
char S_func_0068e920::f()
{
    return m_x;
}
