// roc 2010-06 00445620  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445620
//
// 00445620  8a4144               mov al, byte ptr [ecx + 0x44]
// 00445623  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445620 {
    char pad0[68];
    char m_x;
    char f();
};
char S_func_00445620::f()
{
    return m_x;
}
