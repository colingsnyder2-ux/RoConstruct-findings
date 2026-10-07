// roc 2008-06 005d74c0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d74c0
//
// 005d74c0  d981ac010000         fld dword ptr [ecx + 0x1ac]
// 005d74c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d74c0 {
    char pad[428];
    float m_x;
    float f();
};
float S_func_005d74c0::f()
{
    return m_x;
}
