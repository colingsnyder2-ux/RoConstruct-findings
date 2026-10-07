// roc 2010-06 007b4350  unit: CPatchedControlComboBox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b4350
//
// 007b4350  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 007b4356  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b4350 {
    char pad0[440];
    int m_x;
    int f();
};
int S_func_007b4350::f()
{
    return m_x;
}
