// roc 2007-08 0042f5e0  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f5e0
//
// 0042f5e0  c7819001000001000000 mov dword ptr [ecx + 0x190], 1
// 0042f5ea  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042f5e0 {
    char pad0[400];
    int m_x;
    void f();
};
void S_func_0042f5e0::f()
{
    m_x = (int)1;
}
