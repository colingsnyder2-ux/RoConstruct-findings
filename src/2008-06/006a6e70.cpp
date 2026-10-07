// roc 2008-06 006a6e70  unit: CPatchedControlComboBox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6e70
//
// 006a6e70  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 006a6e76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a6e70 {
    char pad0[440];
    int m_x;
    int f();
};
int S_func_006a6e70::f()
{
    return m_x;
}
