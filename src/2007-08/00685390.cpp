// roc 2007-08 00685390  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685390
//
// 00685390  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 00685393  e90eb3faff           jmp 0x6306a6
// auto-matched from its assembly shape

struct P_func_00685390 { void g(); };
struct S_func_00685390 {
    char pad[64];
    P_func_00685390* m_p;
    void f();
};
void S_func_00685390::f()
{
    m_p->g();
}
