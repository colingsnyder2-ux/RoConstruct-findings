// roc 2009-12 00484cb0  unit: Ogre::RbxSceneManagerFactory  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00484cb0
//
// 00484cb0  8b8128080000         mov eax, dword ptr [ecx + 0x828]
// 00484cb6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00484cb0 {
    char pad0[2088];
    int m_x;
    int f();
};
int S_func_00484cb0::f()
{
    return m_x;
}
