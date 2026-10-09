// roc 2009-12 007b2f30  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b2f30
//
// 007b2f30  c7410400000000       mov dword ptr [ecx + 4], 0
// 007b2f37  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_006d5c40@ns_ROCX000007@@QAEXH@Z)

namespace ns_ROCX000007 {
struct S_func_006d5c40 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_006d5c40::f(int a1)
{
    m_x = (int)0;
}
}
