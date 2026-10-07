// roc 2008-06 0068e960  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e960
//
// 0068e960  d981e48a0000         fld dword ptr [ecx + 0x8ae4]
// 0068e966  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e960 {
    char pad[35556];
    float m_x;
    float f();
};
float S_func_0068e960::f()
{
    return m_x;
}
