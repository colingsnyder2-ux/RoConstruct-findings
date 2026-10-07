// roc 2008-06 0068e890  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e890
//
// 0068e890  8a8120010000         mov al, byte ptr [ecx + 0x120]
// 0068e896  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e890 {
    char pad0[288];
    char m_x;
    char f();
};
char S_func_0068e890::f()
{
    return m_x;
}
