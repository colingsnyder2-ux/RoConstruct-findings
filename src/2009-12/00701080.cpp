// roc 2009-12 00701080  unit: RBX::TimerService  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701080
//
// 00701080  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 00701083  e9a8250b00           jmp 0x7b3630
// copied from an identical function in another client (function ?f@S_func_00675ca0@ns_ROCX0000eb@@QAEXXZ)

namespace ns_ROCX0000eb {
struct P_func_00675ca0 { void g(); };
struct S_func_00675ca0 {
    char pad[60];
    P_func_00675ca0* m_p;
    void f();
};
void S_func_00675ca0::f()
{
    m_p->g();
}
}
