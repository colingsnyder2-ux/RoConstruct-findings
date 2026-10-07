// roc 2010-06 00903600  unit: Ogre::RbxArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00903600
//
// 00903600  c7410800000000       mov dword ptr [ecx + 8], 0
// 00903607  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00903600 {
    char pad0[8];
    int m_x;
    void f();
};
void S_func_00903600::f()
{
    m_x = (int)0;
}
