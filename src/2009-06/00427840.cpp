// roc 2009-06 00427840  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427840
//
// 00427840  c7819c01000001000000 mov dword ptr [ecx + 0x19c], 1
// 0042784a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00427840 {
    char pad0[412];
    int m_x;
    void f();
};
void S_func_00427840::f()
{
    m_x = (int)1;
}
