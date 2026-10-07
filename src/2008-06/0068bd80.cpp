// roc 2008-06 0068bd80  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bd80
//
// 0068bd80  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0068bd86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068bd80 {
    char pad0[192];
    int m_x;
    int f();
};
int S_func_0068bd80::f()
{
    return m_x;
}
