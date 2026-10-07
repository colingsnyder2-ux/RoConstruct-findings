// roc 2009-06 00839500  unit: Ogre::RbxSubEntity  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00839500
//
// 00839500  8a4150               mov al, byte ptr [ecx + 0x50]
// 00839503  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00839500 {
    char pad0[80];
    char m_x;
    char f();
};
char S_func_00839500::f()
{
    return m_x;
}
