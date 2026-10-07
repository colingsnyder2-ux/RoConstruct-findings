// roc 2009-06 00485c90  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485c90
//
// 00485c90  8b4104               mov eax, dword ptr [ecx + 4]
// 00485c93  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00485c90 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_00485c90::f()
{
    return m_x;
}
