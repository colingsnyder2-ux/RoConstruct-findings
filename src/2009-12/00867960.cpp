// roc 2009-12 00867960  unit: CXTPPropertyGridView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867960
//
// 00867960  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00867966  e9c562feff           jmp 0x84dc30
// copied from an identical function in another client (function ?f@S_func_0067e700@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct P_func_0067e700 { void g(); };
struct S_func_0067e700 {
    char pad[176];
    P_func_0067e700* m_p;
    void f();
};
void S_func_0067e700::f()
{
    m_p->g();
}
}
