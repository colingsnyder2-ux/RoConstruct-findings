// roc 2011-06 004306d0  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004306d0
//
// 004306d0  c7819c01000001000000 mov dword ptr [ecx + 0x19c], 1
// 004306da  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004306d0 {
    char pad0[412];
    int m_x;
    void f();
};
void S_func_004306d0::f()
{
    m_x = (int)1;
}
