// roc 2009-12 004b7910  unit: Ogre::RbxArchiveFactory  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b7910
//
// 004b7910  8d4108               lea eax, [ecx + 8]
// 004b7913  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004981c0@ns_ROCX000002@@QAEPAHXZ)

namespace ns_ROCX000002 {
struct S_func_004981c0 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_004981c0::f()
{
    return &m_x;
}
}
