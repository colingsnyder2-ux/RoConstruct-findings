// roc 2009-06 00775840  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00775840
//
// 00775840  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 00775843  e97e3dfaff           jmp 0x7195c6
// auto-matched from its assembly shape

struct P_func_00775840 { void g(); };
struct S_func_00775840 {
    char pad[68];
    P_func_00775840* m_p;
    void f();
};
void S_func_00775840::f()
{
    m_p->g();
}
