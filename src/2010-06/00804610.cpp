// roc 2010-06 00804610  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00804610
//
// 00804610  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 00804613  e91c3ffaff           jmp 0x7a8534
// auto-matched from its assembly shape

struct P_func_00804610 { void g(); };
struct S_func_00804610 {
    char pad[68];
    P_func_00804610* m_p;
    void f();
};
void S_func_00804610::f()
{
    m_p->g();
}
