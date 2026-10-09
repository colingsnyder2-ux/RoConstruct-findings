// roc 2009-12 004b29b0  unit: Ogre::RbxTextureCompositorSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b29b0
//
// 004b29b0  d9817c010000         fld dword ptr [ecx + 0x17c]
// 004b29b6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00636c30@ns_ROCX00008e@@QAEMXZ)

namespace ns_ROCX00008e {
struct S_func_00636c30 {
    char pad[380];
    float m_x;
    float f();
};
float S_func_00636c30::f()
{
    return m_x;
}
}
