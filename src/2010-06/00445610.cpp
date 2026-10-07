// roc 2010-06 00445610  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445610
//
// 00445610  8a415d               mov al, byte ptr [ecx + 0x5d]
// 00445613  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445610 {
    char pad0[93];
    char m_x;
    char f();
};
char S_func_00445610::f()
{
    return m_x;
}
