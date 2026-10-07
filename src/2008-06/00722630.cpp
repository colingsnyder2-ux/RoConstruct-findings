// roc 2008-06 00722630  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722630
//
// 00722630  8b818c020000         mov eax, dword ptr [ecx + 0x28c]
// 00722636  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00722630 {
    char pad0[652];
    int m_x;
    int f();
};
int S_func_00722630::f()
{
    return m_x;
}
