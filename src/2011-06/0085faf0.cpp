// roc 2011-06 0085faf0  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085faf0
//
// 0085faf0  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0085faf3  e900b1faff           jmp 0x80abf8
// auto-matched from its assembly shape

struct P_func_0085faf0 { void g(); };
struct S_func_0085faf0 {
    char pad[68];
    P_func_0085faf0* m_p;
    void f();
};
void S_func_0085faf0::f()
{
    m_p->g();
}
