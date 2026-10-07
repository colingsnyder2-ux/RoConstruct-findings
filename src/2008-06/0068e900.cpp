// roc 2008-06 0068e900  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e900
//
// 0068e900  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0068e906  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e900 {
    char pad0[280];
    int m_x;
    int f();
};
int S_func_0068e900::f()
{
    return m_x;
}
