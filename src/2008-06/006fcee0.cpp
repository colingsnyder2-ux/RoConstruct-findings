// roc 2008-06 006fcee0  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcee0
//
// 006fcee0  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 006fcee3  e95a42faff           jmp 0x6a1142
// auto-matched from its assembly shape

struct P_func_006fcee0 { void g(); };
struct S_func_006fcee0 {
    char pad[68];
    P_func_006fcee0* m_p;
    void f();
};
void S_func_006fcee0::f()
{
    m_p->g();
}
