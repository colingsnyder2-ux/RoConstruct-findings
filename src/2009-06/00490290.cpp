// roc 2009-06 00490290  unit: Ogre::RbxTextureCompositorSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00490290
//
// 00490290  d981c4000000         fld dword ptr [ecx + 0xc4]
// 00490296  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00490290 {
    char pad[196];
    float m_x;
    float f();
};
float S_func_00490290::f()
{
    return m_x;
}
