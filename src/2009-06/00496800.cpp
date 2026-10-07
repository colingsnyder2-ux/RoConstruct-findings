// roc 2009-06 00496800  unit: Ogre::TwoDManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00496800
//
// 00496800  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00496806  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00496800 {
    char pad0[284];
    int m_x;
    int f();
};
int S_func_00496800::f()
{
    return m_x;
}
