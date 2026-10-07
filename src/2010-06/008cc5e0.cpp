// roc 2010-06 008cc5e0  unit: Ogre::RbxSceneManagerFactory  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cc5e0
//
// 008cc5e0  8b8130080000         mov eax, dword ptr [ecx + 0x830]
// 008cc5e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008cc5e0 {
    char pad0[2096];
    int m_x;
    int f();
};
int S_func_008cc5e0::f()
{
    return m_x;
}
