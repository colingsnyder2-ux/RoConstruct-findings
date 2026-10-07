// roc 2009-06 00485c70  unit: Ogre::RbxMeshPartAdapter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485c70
//
// 00485c70  8d81dc000000         lea eax, [ecx + 0xdc]
// 00485c76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00485c70 {
    char pad0[220];
    int m_x;
    int* f();
};
int* S_func_00485c70::f()
{
    return &m_x;
}
