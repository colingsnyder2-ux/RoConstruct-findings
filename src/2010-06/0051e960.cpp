// roc 2010-06 0051e960  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051e960
//
// 0051e960  8d4160               lea eax, [ecx + 0x60]
// 0051e963  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051e960 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_0051e960::f()
{
    return &m_x;
}
