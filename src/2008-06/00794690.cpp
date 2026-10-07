// roc 2008-06 00794690  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794690
//
// 00794690  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00794693  e9c8f5ffff           jmp 0x793c60
// auto-matched from its assembly shape

struct P_func_00794690 { void g(); };
struct S_func_00794690 {
    char pad[52];
    P_func_00794690* m_p;
    void f();
};
void S_func_00794690::f()
{
    m_p->g();
}
