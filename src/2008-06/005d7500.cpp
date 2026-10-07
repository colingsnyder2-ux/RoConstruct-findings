// roc 2008-06 005d7500  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7500
//
// 005d7500  d981b0010000         fld dword ptr [ecx + 0x1b0]
// 005d7506  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d7500 {
    char pad[432];
    float m_x;
    float f();
};
float S_func_005d7500::f()
{
    return m_x;
}
