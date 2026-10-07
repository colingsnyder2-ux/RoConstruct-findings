// roc 2010-06 00445650  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445650
//
// 00445650  8a4160               mov al, byte ptr [ecx + 0x60]
// 00445653  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445650 {
    char pad0[96];
    char m_x;
    char f();
};
char S_func_00445650::f()
{
    return m_x;
}
