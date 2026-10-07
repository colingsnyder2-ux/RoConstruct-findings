// roc 2008-06 0068e9c0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e9c0
//
// 0068e9c0  8a81f88a0000         mov al, byte ptr [ecx + 0x8af8]
// 0068e9c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e9c0 {
    char pad0[35576];
    char m_x;
    char f();
};
char S_func_0068e9c0::f()
{
    return m_x;
}
