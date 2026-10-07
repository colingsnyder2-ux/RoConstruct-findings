// roc 2009-06 004981c0  unit: Ogre::RbxArchiveFactory  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004981c0
//
// 004981c0  8d4108               lea eax, [ecx + 8]
// 004981c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004981c0 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_004981c0::f()
{
    return &m_x;
}
