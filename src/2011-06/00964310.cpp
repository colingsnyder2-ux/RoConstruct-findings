// roc 2011-06 00964310  unit: Ogre::RbxArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00964310
//
// 00964310  c7410800000000       mov dword ptr [ecx + 8], 0
// 00964317  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00964310 {
    char pad0[8];
    int m_x;
    void f();
};
void S_func_00964310::f()
{
    m_x = (int)0;
}
