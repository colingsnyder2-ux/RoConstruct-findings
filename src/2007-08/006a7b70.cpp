// roc 2007-08 006a7b70  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7b70
//
// 006a7b70  8b8158020000         mov eax, dword ptr [ecx + 0x258]
// 006a7b76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a7b70 {
    char pad0[600];
    int m_x;
    int f();
};
int S_func_006a7b70::f()
{
    return m_x;
}
