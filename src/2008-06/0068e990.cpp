// roc 2008-06 0068e990  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e990
//
// 0068e990  d981ec8a0000         fld dword ptr [ecx + 0x8aec]
// 0068e996  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e990 {
    char pad[35564];
    float m_x;
    float f();
};
float S_func_0068e990::f()
{
    return m_x;
}
