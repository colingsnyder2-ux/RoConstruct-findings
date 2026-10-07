// roc 2011-06 0094ec00  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0094ec00
//
// 0094ec00  8d4148               lea eax, [ecx + 0x48]
// 0094ec03  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0094ec00 {
    char pad0[72];
    int m_x;
    int* f();
};
int* S_func_0094ec00::f()
{
    return &m_x;
}
