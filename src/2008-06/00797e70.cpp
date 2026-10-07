// roc 2008-06 00797e70  unit: CXTPRibbonGroupControlPopup  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797e70
//
// 00797e70  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00797e73  8b4034               mov eax, dword ptr [eax + 0x34]
// 00797e76  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00797e70 {
    char pad[52];
    int m_x;
};
struct S_func_00797e70 {
    char pad[48];
    I_func_00797e70* m_p;
    int f();
};
int S_func_00797e70::f()
{
    return m_p->m_x;
}
