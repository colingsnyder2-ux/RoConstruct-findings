// roc 2010-06 00445670  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445670
//
// 00445670  8a4162               mov al, byte ptr [ecx + 0x62]
// 00445673  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445670 {
    char pad0[98];
    char m_x;
    char f();
};
char S_func_00445670::f()
{
    return m_x;
}
