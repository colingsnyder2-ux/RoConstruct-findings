// roc 2010-06 0089e310  unit: CXTPRibbonGroupControlPopup  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e310
//
// 0089e310  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0089e313  8b4034               mov eax, dword ptr [eax + 0x34]
// 0089e316  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0089e310 {
    char pad[52];
    int m_x;
};
struct S_func_0089e310 {
    char pad[48];
    I_func_0089e310* m_p;
    int f();
};
int S_func_0089e310::f()
{
    return m_p->m_x;
}
