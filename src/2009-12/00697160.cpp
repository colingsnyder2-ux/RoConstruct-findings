// roc 2009-12 00697160  unit: RBX::HeartbeatInstance  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697160
//
// 00697160  8b8940010000         mov ecx, dword ptr [ecx + 0x140]
// 00697166  e925440800           jmp 0x71b590
// copied from an identical function in another client (function ?f@S_func_00602860@ns_ROCX00006c@@QAEXXZ)

namespace ns_ROCX00006c {
struct P_func_00602860 { void g(); };
struct S_func_00602860 {
    char pad[320];
    P_func_00602860* m_p;
    void f();
};
void S_func_00602860::f()
{
    m_p->g();
}
}
