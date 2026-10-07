// roc 2008-06 0068eaa0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068eaa0
//
// 0068eaa0  8a81818b0000         mov al, byte ptr [ecx + 0x8b81]
// 0068eaa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068eaa0 {
    char pad0[35713];
    char m_x;
    char f();
};
char S_func_0068eaa0::f()
{
    return m_x;
}
