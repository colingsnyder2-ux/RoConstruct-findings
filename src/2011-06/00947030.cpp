// roc 2011-06 00947030  unit: Ogre::RbxSubEntity  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00947030
//
// 00947030  8a4150               mov al, byte ptr [ecx + 0x50]
// 00947033  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00947030 {
    char pad0[80];
    char m_x;
    char f();
};
char S_func_00947030::f()
{
    return m_x;
}
