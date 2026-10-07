// roc 2011-06 008167f0  unit: CPatchedControlComboBox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008167f0
//
// 008167f0  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 008167f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008167f0 {
    char pad0[440];
    int m_x;
    int f();
};
int S_func_008167f0::f()
{
    return m_x;
}
