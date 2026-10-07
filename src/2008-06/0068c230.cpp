// roc 2008-06 0068c230  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c230
//
// 0068c230  8b818c010000         mov eax, dword ptr [ecx + 0x18c]
// 0068c236  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068c230 {
    char pad0[396];
    int m_x;
    int f();
};
int S_func_0068c230::f()
{
    return m_x;
}
