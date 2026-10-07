// roc 2009-06 004968b0  unit: Ogre::TwoDManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004968b0
//
// 004968b0  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 004968b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004968b0 {
    char pad0[280];
    int m_x;
    int f();
};
int S_func_004968b0::f()
{
    return m_x;
}
