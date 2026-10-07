// roc 2009-06 00499be0  unit: Ogre::RbxArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00499be0
//
// 00499be0  c7410800000000       mov dword ptr [ecx + 8], 0
// 00499be7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00499be0 {
    char pad0[8];
    int m_x;
    void f();
};
void S_func_00499be0::f()
{
    m_x = (int)0;
}
