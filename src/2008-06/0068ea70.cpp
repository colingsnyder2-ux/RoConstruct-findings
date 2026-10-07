// roc 2008-06 0068ea70  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068ea70
//
// 0068ea70  8b817c8b0000         mov eax, dword ptr [ecx + 0x8b7c]
// 0068ea76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068ea70 {
    char pad0[35708];
    int m_x;
    int f();
};
int S_func_0068ea70::f()
{
    return m_x;
}
