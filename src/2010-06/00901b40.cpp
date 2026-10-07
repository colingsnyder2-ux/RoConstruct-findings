// roc 2010-06 00901b40  unit: Ogre::RbxArchiveFactory  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00901b40
//
// 00901b40  8d4108               lea eax, [ecx + 8]
// 00901b43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00901b40 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_00901b40::f()
{
    return &m_x;
}
