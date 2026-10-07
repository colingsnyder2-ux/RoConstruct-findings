// roc 2011-06 00450400  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450400
//
// 00450400  8b4104               mov eax, dword ptr [ecx + 4]
// 00450403  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00450400 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_00450400::f()
{
    return m_x;
}
