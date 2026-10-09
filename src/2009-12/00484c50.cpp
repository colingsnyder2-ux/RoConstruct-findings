// roc 2009-12 00484c50  unit: Ogre::RbxSceneManagerFactory  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00484c50
//
// 00484c50  c74118feffffff       mov dword ptr [ecx + 0x18], 0xfffffffe
// 00484c57  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00481c10@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
struct S_func_00481c10 {
    char pad0[24];
    int m_x;
    void f();
};
void S_func_00481c10::f()
{
    m_x = (int)0xfffffffe;
}
}
