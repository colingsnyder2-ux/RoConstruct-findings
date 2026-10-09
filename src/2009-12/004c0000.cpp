// roc 2009-12 004c0000  unit: Ogre::RbxSpatialHashedSceneNode  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c0000
//
// 004c0000  d981ac000000         fld dword ptr [ecx + 0xac]
// 004c0006  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006e5c60@ns_ROCX000004@@QAEMXZ)

namespace ns_ROCX000004 {
struct S_func_006e5c60 {
    char pad[172];
    float m_x;
    float f();
};
float S_func_006e5c60::f()
{
    return m_x;
}
}
