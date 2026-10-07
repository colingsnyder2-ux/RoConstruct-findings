// roc 2007-08 00719270  unit: CXTPRibbonBar  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00719270
//
// 00719270  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00719273  8b4034               mov eax, dword ptr [eax + 0x34]
// 00719276  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00719270 {
    char pad[52];
    int m_x;
};
struct S_func_00719270 {
    char pad[48];
    I_func_00719270* m_p;
    int f();
};
int S_func_00719270::f()
{
    return m_p->m_x;
}
