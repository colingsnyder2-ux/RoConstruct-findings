// roc 2009-12 0049b4a0  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049b4a0
//
// 0049b4a0  8d4160               lea eax, [ecx + 0x60]
// 0049b4a3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005103d0@ns_ROCX000005@@QAEPAHXZ)

namespace ns_ROCX000005 {
struct S_func_005103d0 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_005103d0::f()
{
    return &m_x;
}
}
