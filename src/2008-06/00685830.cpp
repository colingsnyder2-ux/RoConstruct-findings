// roc 2008-06 00685830  unit: Ogre::RbxSubEntity  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685830
//
// 00685830  d98138010000         fld dword ptr [ecx + 0x138]
// 00685836  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00685830 {
    char pad[312];
    float m_x;
    float f();
};
float S_func_00685830::f()
{
    return m_x;
}
