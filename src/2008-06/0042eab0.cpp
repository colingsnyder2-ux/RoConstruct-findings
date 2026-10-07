// roc 2008-06 0042eab0  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042eab0
//
// 0042eab0  c7819c01000001000000 mov dword ptr [ecx + 0x19c], 1
// 0042eaba  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042eab0 {
    char pad0[412];
    int m_x;
    void f();
};
void S_func_0042eab0::f()
{
    m_x = (int)1;
}
