// roc 2009-12 00441dd0  unit: Ogre::RbxCluster  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00441dd0
//
// 00441dd0  8b4104               mov eax, dword ptr [ecx + 4]
// 00441dd3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00485c90@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
struct S_func_00485c90 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_00485c90::f()
{
    return m_x;
}
}
