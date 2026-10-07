// roc 2011-06 008f7ed0  unit: CXTPRibbonTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7ed0
//
// 008f7ed0  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 008f7ed6  e9f52a0000           jmp 0x8fa9d0
// auto-matched from its assembly shape

struct P_func_008f7ed0 { void g(); };
struct S_func_008f7ed0 {
    char pad[132];
    P_func_008f7ed0* m_p;
    void f();
};
void S_func_008f7ed0::f()
{
    m_p->g();
}
