// roc 2010-06 00445660  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445660
//
// 00445660  8a4161               mov al, byte ptr [ecx + 0x61]
// 00445663  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445660 {
    char pad0[97];
    char m_x;
    char f();
};
char S_func_00445660::f()
{
    return m_x;
}
