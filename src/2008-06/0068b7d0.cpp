// roc 2008-06 0068b7d0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b7d0
//
// 0068b7d0  8a81d0010000         mov al, byte ptr [ecx + 0x1d0]
// 0068b7d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068b7d0 {
    char pad0[464];
    char m_x;
    char f();
};
char S_func_0068b7d0::f()
{
    return m_x;
}
