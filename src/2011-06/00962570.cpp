// roc 2011-06 00962570  unit: Ogre::RbxArchiveFactory  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00962570
//
// 00962570  8d4108               lea eax, [ecx + 8]
// 00962573  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00962570 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_00962570::f()
{
    return &m_x;
}
