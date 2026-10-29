// roc 2009-12 004c4830  unit: Ogre::RbxCluster  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c4830
//
// 004c4830  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004c4833  2b411c               sub eax, dword ptr [ecx + 0x1c]
// 004c4836  c1f803               sar eax, 3
// 004c4839  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00967ac0@ns_ROCX000008@@QAEHXZ)

namespace ns_ROCX000008 {
// from server: 100% by tester
struct S_func_00967ac0 {
    char pad0[0x1c];
    int m_begin;
    int m_end;
    int f();
};

int S_func_00967ac0::f()
{
    return (m_end - m_begin) >> 3;
}
}
