// roc 2009-12 00719e50  unit: RBX::VPhysicsService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719e50
//
// 00719e50  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 00719e56  e9e5450600           jmp 0x77e440
// copied from an identical function in another client (function ?f@S_func_00699af0@ns_ROCX000011@@QAEXXZ)

namespace ns_ROCX000011 {
struct P_func_00699af0 { void g(); };
struct S_func_00699af0 {
    char pad[208];
    P_func_00699af0* m_p;
    void f();
};
void S_func_00699af0::f()
{
    m_p->g();
}
}
