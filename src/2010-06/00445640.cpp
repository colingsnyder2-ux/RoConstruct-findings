// roc 2010-06 00445640  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445640
//
// 00445640  8a415f               mov al, byte ptr [ecx + 0x5f]
// 00445643  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445640 {
    char pad0[95];
    char m_x;
    char f();
};
char S_func_00445640::f()
{
    return m_x;
}
