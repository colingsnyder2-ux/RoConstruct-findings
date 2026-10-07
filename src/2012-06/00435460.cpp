// roc 2012-06 00435460  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435460
//
// 00435460  c7819c01000001000000 mov dword ptr [ecx + 0x19c], 1
// 0043546a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00435460 {
    char pad0[412];
    int m_x;
    void f();
};
void S_func_00435460::f()
{
    m_x = (int)1;
}
