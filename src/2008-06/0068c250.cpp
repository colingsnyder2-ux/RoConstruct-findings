// roc 2008-06 0068c250  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c250
//
// 0068c250  d981a0010000         fld dword ptr [ecx + 0x1a0]
// 0068c256  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c250 {
    char pad[416];
    float m_x;
    float f();
};
float S_func_0068c250::f()
{
    return m_x;
}
