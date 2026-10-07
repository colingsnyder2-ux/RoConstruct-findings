// roc 2008-06 00793c50  unit: CXTPRibbonTab  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793c50
//
// 00793c50  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00793c56  e9351b0000           jmp 0x795790
// auto-matched from its assembly shape

struct P_func_00793c50 { void g(); };
struct S_func_00793c50 {
    char pad[132];
    P_func_00793c50* m_p;
    void f();
};
void S_func_00793c50::f()
{
    m_p->g();
}
