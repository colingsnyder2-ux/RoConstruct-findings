// roc 2011-06 0092b790  unit: Ogre::RbxSceneManagerFactory  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092b790
//
// 0092b790  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0092b793  05d0450000           add eax, 0x45d0
// 0092b798  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0092b790 {
    char pad0[28];
    int m_x;
    int f();
};
int S_func_0092b790::f()
{
    return m_x + 0x45d0;
}
