// roc 2009-12 00490360  unit: Ogre::RbxSubEntity  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00490360
//
// 00490360  d98168010000         fld dword ptr [ecx + 0x168]
// 00490366  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_008e4570@ns_ROCX00002a@@QAEMXZ)

namespace ns_ROCX00002a {
struct S_func_008e4570 {
    char pad[360];
    float m_x;
    float f();
};
float S_func_008e4570::f()
{
    return m_x;
}
}
