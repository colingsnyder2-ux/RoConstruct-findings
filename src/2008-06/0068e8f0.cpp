// roc 2008-06 0068e8f0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e8f0
//
// 0068e8f0  8a8160010000         mov al, byte ptr [ecx + 0x160]
// 0068e8f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e8f0 {
    char pad0[352];
    char m_x;
    char f();
};
char S_func_0068e8f0::f()
{
    return m_x;
}
