// roc 2010-06 008cc750  unit: Ogre::RbxSceneManagerFactory  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cc750
//
// 008cc750  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008cc753  05a0450000           add eax, 0x45a0
// 008cc758  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008cc750 {
    char pad0[24];
    int m_x;
    int f();
};
int S_func_008cc750::f()
{
    return m_x + 0x45a0;
}
