// roc 2012-06 004b0080  unit: Ogre::IFrameDataCallback  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0080
//
// 004b0080  8a81d8000000         mov al, byte ptr [ecx + 0xd8]
// 004b0086  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b0080 {
    char pad0[216];
    char m_x;
    char f();
};
char S_func_004b0080::f()
{
    return m_x;
}
