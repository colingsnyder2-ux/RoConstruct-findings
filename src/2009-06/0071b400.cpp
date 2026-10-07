// roc 2009-06 0071b400  unit: CPatchedControlComboBox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b400
//
// 0071b400  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 0071b406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071b400 {
    char pad0[440];
    int m_x;
    int f();
};
int S_func_0071b400::f()
{
    return m_x;
}
