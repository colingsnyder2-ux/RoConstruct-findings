// roc 2009-06 00481c10  unit: Ogre::RbxStaticCluster  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00481c10
//
// 00481c10  c74118feffffff       mov dword ptr [ecx + 0x18], 0xfffffffe
// 00481c17  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00481c10 {
    char pad0[24];
    int m_x;
    void f();
};
void S_func_00481c10::f()
{
    m_x = (int)0xfffffffe;
}
