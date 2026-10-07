// roc 2008-06 0068e8c0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e8c0
//
// 0068e8c0  8a8148010000         mov al, byte ptr [ecx + 0x148]
// 0068e8c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e8c0 {
    char pad0[328];
    char m_x;
    char f();
};
char S_func_0068e8c0::f()
{
    return m_x;
}
