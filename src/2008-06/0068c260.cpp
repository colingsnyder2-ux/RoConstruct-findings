// roc 2008-06 0068c260  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c260
//
// 0068c260  d981a4010000         fld dword ptr [ecx + 0x1a4]
// 0068c266  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c260 {
    char pad[420];
    float m_x;
    float f();
};
float S_func_0068c260::f()
{
    return m_x;
}
