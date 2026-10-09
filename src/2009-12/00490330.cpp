// roc 2009-12 00490330  unit: Ogre::RbxSubEntity  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00490330
//
// 00490330  8a4150               mov al, byte ptr [ecx + 0x50]
// 00490333  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00839500@ns_ROCX0000c7@@QAEDXZ)

namespace ns_ROCX0000c7 {
struct S_func_00839500 {
    char pad0[80];
    char m_x;
    char f();
};
char S_func_00839500::f()
{
    return m_x;
}
}
