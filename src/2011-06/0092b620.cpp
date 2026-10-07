// roc 2011-06 0092b620  unit: Ogre::RbxSceneManagerFactory  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092b620
//
// 0092b620  8b8148080000         mov eax, dword ptr [ecx + 0x848]
// 0092b626  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0092b620 {
    char pad0[2120];
    int m_x;
    int f();
};
int S_func_0092b620::f()
{
    return m_x;
}
