// roc 2009-06 004902a0  unit: Ogre::RbxTextureCompositorSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004902a0
//
// 004902a0  d9812c010000         fld dword ptr [ecx + 0x12c]
// 004902a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004902a0 {
    char pad[300];
    float m_x;
    float f();
};
float S_func_004902a0::f()
{
    return m_x;
}
