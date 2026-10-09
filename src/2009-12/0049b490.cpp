// roc 2009-12 0049b490  unit: Ogre::RbxMeshPartAdapter  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049b490
//
// 0049b490  8d4148               lea eax, [ecx + 0x48]
// 0049b493  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_008ee820@ns_ROCX000030@@QAEPAHXZ)

namespace ns_ROCX000030 {
struct S_func_008ee820 {
    char pad0[72];
    int m_x;
    int* f();
};
int* S_func_008ee820::f()
{
    return &m_x;
}
}
