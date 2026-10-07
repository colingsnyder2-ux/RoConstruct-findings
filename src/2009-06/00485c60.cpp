// roc 2009-06 00485c60  unit: Ogre::RbxMeshPartAdapter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485c60
//
// 00485c60  8d81c4000000         lea eax, [ecx + 0xc4]
// 00485c66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00485c60 {
    char pad0[196];
    int m_x;
    int* f();
};
int* S_func_00485c60::f()
{
    return &m_x;
}
