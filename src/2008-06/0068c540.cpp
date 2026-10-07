// roc 2008-06 0068c540  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c540
//
// 0068c540  8a8124430000         mov al, byte ptr [ecx + 0x4324]
// 0068c546  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c540 {
    char pad0[17188];
    char m_x;
    char f();
};
char S_func_0068c540::f()
{
    return m_x;
}
