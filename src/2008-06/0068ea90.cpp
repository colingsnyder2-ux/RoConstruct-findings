// roc 2008-06 0068ea90  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068ea90
//
// 0068ea90  8a81808b0000         mov al, byte ptr [ecx + 0x8b80]
// 0068ea96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0068ea90 {
    char pad0[35712];
    char m_x;
    char f();
};
char S_func_0068ea90::f()
{
    return m_x;
}
