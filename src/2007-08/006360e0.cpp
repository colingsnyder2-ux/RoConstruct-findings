// roc 2007-08 006360e0  unit: CPatchedControlComboBox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006360e0
//
// 006360e0  8b81ac010000         mov eax, dword ptr [ecx + 0x1ac]
// 006360e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006360e0 {
    char pad0[428];
    int m_x;
    int f();
};
int S_func_006360e0::f()
{
    return m_x;
}
