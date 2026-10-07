// roc 2009-06 00480ea0  unit: Ogre::RbxPart  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480ea0
//
// 00480ea0  c781e001000000000000 mov dword ptr [ecx + 0x1e0], 0
// 00480eaa  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00480ea0 {
    char pad0[480];
    int m_x;
    void f();
};
void S_func_00480ea0::f()
{
    m_x = (int)0;
}
