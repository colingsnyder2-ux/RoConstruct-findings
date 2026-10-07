// roc 2010-06 008ee820  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ee820
//
// 008ee820  8d4148               lea eax, [ecx + 0x48]
// 008ee823  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008ee820 {
    char pad0[72];
    int m_x;
    int* f();
};
int* S_func_008ee820::f()
{
    return &m_x;
}
