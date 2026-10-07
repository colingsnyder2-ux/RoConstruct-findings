// roc 2012-06 00464d60  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d60
//
// 00464d60  8a4179               mov al, byte ptr [ecx + 0x79]
// 00464d63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464d60 {
    char pad0[121];
    char m_x;
    char f();
};
char S_func_00464d60::f()
{
    return m_x;
}
