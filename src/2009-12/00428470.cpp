// roc 2009-12 00428470  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428470
//
// 00428470  c7819c01000001000000 mov dword ptr [ecx + 0x19c], 1
// 0042847a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00427840@ns_ROCX000062@@QAEXXZ)

namespace ns_ROCX000062 {
struct S_func_00427840 {
    char pad0[412];
    int m_x;
    void f();
};
void S_func_00427840::f()
{
    m_x = (int)1;
}
}
