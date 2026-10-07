// roc 2008-06 0068c940  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c940
//
// 0068c940  d981508a0000         fld dword ptr [ecx + 0x8a50]
// 0068c946  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c940 {
    char pad[35408];
    float m_x;
    float f();
};
float S_func_0068c940::f()
{
    return m_x;
}
