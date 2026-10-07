// roc 2011-06 008f6e80  unit: CXTPRibbonGroupControlPopup  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6e80
//
// 008f6e80  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008f6e83  8b4034               mov eax, dword ptr [eax + 0x34]
// 008f6e86  c3                   ret 
// auto-matched from its assembly shape

struct I_func_008f6e80 {
    char pad[52];
    int m_x;
};
struct S_func_008f6e80 {
    char pad[48];
    I_func_008f6e80* m_p;
    int f();
};
int S_func_008f6e80::f()
{
    return m_p->m_x;
}
