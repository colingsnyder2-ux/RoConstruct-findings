// roc 2011-06 008f98d0  unit: CXTPDialogBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f98d0
//
// 008f98d0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 008f98d3  e908e6ffff           jmp 0x8f7ee0
// auto-matched from its assembly shape

struct P_func_008f98d0 { void g(); };
struct S_func_008f98d0 {
    char pad[52];
    P_func_008f98d0* m_p;
    void f();
};
void S_func_008f98d0::f()
{
    m_p->g();
}
