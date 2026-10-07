// roc 2008-06 0068e950  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e950
//
// 0068e950  8a81188a0000         mov al, byte ptr [ecx + 0x8a18]
// 0068e956  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e950 {
    char pad0[35352];
    char m_x;
    char f();
};
char S_func_0068e950::f()
{
    return m_x;
}
