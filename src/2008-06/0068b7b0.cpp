// roc 2008-06 0068b7b0  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b7b0
//
// 0068b7b0  8b81cc010000         mov eax, dword ptr [ecx + 0x1cc]
// 0068b7b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068b7b0 {
    char pad0[460];
    int m_x;
    int f();
};
int S_func_0068b7b0::f()
{
    return m_x;
}
