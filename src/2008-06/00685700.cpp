// roc 2008-06 00685700  unit: Ogre::RbxSubEntity  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685700
//
// 00685700  8a4150               mov al, byte ptr [ecx + 0x50]
// 00685703  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00685700 {
    char pad0[80];
    char m_x;
    char f();
};
char S_func_00685700::f()
{
    return m_x;
}
