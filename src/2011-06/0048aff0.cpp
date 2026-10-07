// roc 2011-06 0048aff0  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aff0
//
// 0048aff0  8d4158               lea eax, [ecx + 0x58]
// 0048aff3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0048aff0 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_0048aff0::f()
{
    return &m_x;
}
