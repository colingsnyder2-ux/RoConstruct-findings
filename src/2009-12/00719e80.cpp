// roc 2009-12 00719e80  unit: RBX::VPhysicsService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719e80
//
// 00719e80  8b89d8000000         mov ecx, dword ptr [ecx + 0xd8]
// 00719e86  e9a5ce0900           jmp 0x7b6d30
// copied from an identical function in another client (function ?f@S_func_00699b10@ns_ROCX000013@@QAEXXZ)

namespace ns_ROCX000013 {
struct P_func_00699b10 { void g(); };
struct S_func_00699b10 {
    char pad[216];
    P_func_00699b10* m_p;
    void f();
};
void S_func_00699b10::f()
{
    m_p->g();
}
}
