// roc 2009-06 00475200  unit: Ogre::RbxSceneManagerFactory  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00475200
//
// 00475200  8a410c               mov al, byte ptr [ecx + 0xc]
// 00475203  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00475200 {
    char pad0[12];
    char m_x;
    char f();
};
char S_func_00475200::f()
{
    return m_x;
}
