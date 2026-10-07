// roc 2008-06 0068e970  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e970
//
// 0068e970  8b81488a0000         mov eax, dword ptr [ecx + 0x8a48]
// 0068e976  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e970 {
    char pad0[35400];
    int m_x;
    int f();
};
int S_func_0068e970::f()
{
    return m_x;
}
