// roc 2009-12 00674a30  unit: RBX::UnifiedWidget  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00674a30
//
// 00674a30  c781a800000000000000 mov dword ptr [ecx + 0xa8], 0
// 00674a3a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005dd8e0@ns_ROCX000047@@QAEXXZ)

namespace ns_ROCX000047 {
struct S_func_005dd8e0 {
    char pad0[168];
    int m_x;
    void f();
};
void S_func_005dd8e0::f()
{
    m_x = (int)0;
}
}
