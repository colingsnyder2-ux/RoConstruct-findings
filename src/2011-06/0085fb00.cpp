// roc 2011-06 0085fb00  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085fb00
//
// 0085fb00  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0085fb03  e9eab0faff           jmp 0x80abf2
// auto-matched from its assembly shape

struct P_func_0085fb00 { void g(); };
struct S_func_0085fb00 {
    char pad[68];
    P_func_0085fb00* m_p;
    void f();
};
void S_func_0085fb00::f()
{
    m_p->g();
}
