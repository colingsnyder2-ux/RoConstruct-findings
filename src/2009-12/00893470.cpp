// roc 2009-12 00893470  unit: CXTPMenuBar::CControlMDIButton  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893470
//
// 00893470  8b89bc010000         mov ecx, dword ptr [ecx + 0x1bc]
// 00893476  e9b5f9ffff           jmp 0x892e30
// copied from an identical function in another client (function ?f@S_func_007b6290@ns_ROCX000081@@QAEXXZ)

namespace ns_ROCX000081 {
struct P_func_007b6290 { void g(); };
struct S_func_007b6290 {
    char pad[444];
    P_func_007b6290* m_p;
    void f();
};
void S_func_007b6290::f()
{
    m_p->g();
}
}
