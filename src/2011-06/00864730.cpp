// roc 2011-06 00864730  unit: CXTPTabClientWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864730
//
// 00864730  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 00864736  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00864730 {
    char pad0[140];
    int m_x;
    int f();
};
int S_func_00864730::f()
{
    return m_x;
}
