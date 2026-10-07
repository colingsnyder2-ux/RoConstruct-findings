// roc 2008-06 0068e930  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e930
//
// 0068e930  8b81148a0000         mov eax, dword ptr [ecx + 0x8a14]
// 0068e936  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068e930 {
    char pad0[35348];
    int m_x;
    int f();
};
int S_func_0068e930::f()
{
    return m_x;
}
