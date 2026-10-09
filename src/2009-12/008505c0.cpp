// roc 2009-12 008505c0  unit: CXTPPropExchangeArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008505c0
//
// 008505c0  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 008505c3  e9263efaff           jmp 0x7f43ee
// copied from an identical function in another client (function ?f@S_func_00775840@ns_ROCX0000af@@QAEXXZ)

namespace ns_ROCX0000af {
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
}
