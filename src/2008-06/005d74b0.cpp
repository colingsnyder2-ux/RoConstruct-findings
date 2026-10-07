// roc 2008-06 005d74b0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d74b0
//
// 005d74b0  d981a8010000         fld dword ptr [ecx + 0x1a8]
// 005d74b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d74b0 {
    char pad[424];
    float m_x;
    float f();
};
float S_func_005d74b0::f()
{
    return m_x;
}
