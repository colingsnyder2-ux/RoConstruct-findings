// roc 2008-06 006fced0  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fced0
//
// 006fced0  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 006fced3  e97042faff           jmp 0x6a1148
// auto-matched from its assembly shape

struct P_func_006fced0 { void g(); };
struct S_func_006fced0 {
    char pad[68];
    P_func_006fced0* m_p;
    void f();
};
void S_func_006fced0::f()
{
    m_p->g();
}
