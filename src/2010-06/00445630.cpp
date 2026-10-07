// roc 2010-06 00445630  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445630
//
// 00445630  8a4145               mov al, byte ptr [ecx + 0x45]
// 00445633  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445630 {
    char pad0[69];
    char m_x;
    char f();
};
char S_func_00445630::f()
{
    return m_x;
}
