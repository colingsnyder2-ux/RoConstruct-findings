// roc 2009-12 004bfff0  unit: Ogre::RbxSpatialHashedSceneNode  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004bfff0
//
// 004bfff0  d981a8000000         fld dword ptr [ecx + 0xa8]
// 004bfff6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006d8a30@ns_ROCX00006b@@QAEMXZ)

namespace ns_ROCX00006b {
struct S_func_006d8a30 {
    char pad[168];
    float m_x;
    float f();
};
float S_func_006d8a30::f()
{
    return m_x;
}
}
