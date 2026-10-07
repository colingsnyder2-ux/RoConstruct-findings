// roc 2010-06 00445600  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445600
//
// 00445600  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00445603  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445600 {
    char pad0[28];
    int m_x;
    int f();
};
int S_func_00445600::f()
{
    return m_x;
}
