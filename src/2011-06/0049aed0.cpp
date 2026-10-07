// roc 2011-06 0049aed0  unit: Ogre::IFrameDataCallback  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049aed0
//
// 0049aed0  8a81e8000000         mov al, byte ptr [ecx + 0xe8]
// 0049aed6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0049aed0 {
    char pad0[232];
    char m_x;
    char f();
};
char S_func_0049aed0::f()
{
    return m_x;
}
