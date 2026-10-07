// roc 2009-06 00839610  unit: Ogre::RbxSubEntity  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00839610
//
// 00839610  d98138010000         fld dword ptr [ecx + 0x138]
// 00839616  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00839610 {
    char pad[312];
    float m_x;
    float f();
};
float S_func_00839610::f()
{
    return m_x;
}
