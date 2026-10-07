// roc 2009-06 0080ea10  unit: CXTPRibbonGroupControlPopup  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ea10
//
// 0080ea10  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0080ea13  8b4034               mov eax, dword ptr [eax + 0x34]
// 0080ea16  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0080ea10 {
    char pad[52];
    int m_x;
};
struct S_func_0080ea10 {
    char pad[48];
    I_func_0080ea10* m_p;
    int f();
};
int S_func_0080ea10::f()
{
    return m_p->m_x;
}
