// roc 2012-06 00464cf0  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464cf0
//
// 00464cf0  8b4104               mov eax, dword ptr [ecx + 4]
// 00464cf3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464cf0 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_00464cf0::f()
{
    return m_x;
}
