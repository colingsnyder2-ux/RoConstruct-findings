// roc 2007-08 005a9080  unit: RBX::VHumanoid::?$SignalDesc  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9080
//
// 005a9080  8b4930               mov ecx, dword ptr [ecx + 0x30]
// 005a9083  e988640500           jmp 0x5ff510
// auto-matched from its assembly shape

struct P_func_005a9080 { void g(); };
struct S_func_005a9080 {
    char pad[48];
    P_func_005a9080* m_p;
    void f();
};
void S_func_005a9080::f()
{
    m_p->g();
}
