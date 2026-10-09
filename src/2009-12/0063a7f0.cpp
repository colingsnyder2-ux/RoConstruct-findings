// roc 2009-12 0063a7f0  unit: RBX::VRunService::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063a7f0
//
// 0063a7f0  8b8998000000         mov ecx, dword ptr [ecx + 0x98]
// 0063a7f6  e915d41a00           jmp 0x7e7c10
// copied from an identical function in another client (function ?f@S_func_0059c610@ns_ROCX000017@@QAEXXZ)

namespace ns_ROCX000017 {
struct P_func_0059c610 { void g(); };
struct S_func_0059c610 {
    char pad[152];
    P_func_0059c610* m_p;
    void f();
};
void S_func_0059c610::f()
{
    m_p->g();
}
}
