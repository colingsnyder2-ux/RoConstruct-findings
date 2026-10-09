// roc 2009-12 004c0010  unit: Ogre::RbxSpatialHashedSceneNode  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c0010
//
// 004c0010  d981b0000000         fld dword ptr [ecx + 0xb0]
// 004c0016  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006d8a40@ns_ROCX00006c@@QAEMXZ)

namespace ns_ROCX00006c {
struct S_func_006d8a40 {
    char pad[176];
    float m_x;
    float f();
};
float S_func_006d8a40::f()
{
    return m_x;
}
}
