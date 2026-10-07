// roc 2009-06 00775850  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00775850
//
// 00775850  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 00775853  e9683dfaff           jmp 0x7195c0
// auto-matched from its assembly shape

struct P_func_00775850 { void g(); };
struct S_func_00775850 {
    char pad[68];
    P_func_00775850* m_p;
    void f();
};
void S_func_00775850::f()
{
    m_p->g();
}
